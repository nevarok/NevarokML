/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Sockets/NevarokMLSocketServer.h"
#include "Utils/NevarokMLLogUtils.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "SocketSubsystem.h"
#include "Sockets.h"

UNevarokMLSocketServer::UNevarokMLSocketServer()
{
    _socketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    _socket = nullptr;
}

UNevarokMLSocketServer::~UNevarokMLSocketServer()
{
    Close();
}

bool UNevarokMLSocketServer::Initialize(const FString& address, const int32 port)
{
    _socket = _socketSubsystem->CreateSocket(NAME_Stream, TEXT("default"), false);

    if (!_socket)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to create listener socket!"));
        return false;
    }

    FIPv4Address ipAddress;
    FIPv4Address::Parse(address, ipAddress);
    const FIPv4Endpoint endpoint(ipAddress, port);

    const auto bound = _socket->Bind(*endpoint.ToInternetAddr());
    if (!bound)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to bind listener socket to address!"));
        return false;
    }

    const auto listening = _socket->Listen(8);
    if (!listening)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to start listening for incoming connections!"));
        return false;
    }

    _initialized = true;
    _socket->SetNonBlocking(true);

    return true;
}

bool UNevarokMLSocketServer::Listen()
{
    if (!_socket)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Listener socket is not initialized!"));
        return false;
    }

    const auto clientAddress = _socketSubsystem->CreateInternetAddr();
    const auto clientSocket = _socket->Accept(*clientAddress, TEXT("NewClientSocket"));

    if (!clientSocket)
    {
        return false;
    }

    clientSocket->SetNonBlocking(false);
    _clientSockets.Add(clientSocket);

    return true;
}

bool UNevarokMLSocketServer::Send(const TArray<uint8>& data)
{
    if (_clientSockets.Num() > 0)
    {
        bool successful = false;

        if (Send(_clientSockets[0], data, successful))
        {
            return true;
        }

        if (!successful)
        {
            CloseConnections();
        }

        return successful;
    }

    return false;
}

bool UNevarokMLSocketServer::Receive(TArray<uint8>& data)
{
    if (_clientSockets.Num() > 0)
    {
        bool successful = false;

        if (Receive(_clientSockets[0], data, successful))
        {
            return true;
        }

        if (!successful)
        {
            CloseConnections();
        }

        return successful;
    }

    return false;
}

bool UNevarokMLSocketServer::IsConnected() const
{
    return _clientSockets.Num() > 0 && IsConnected(_clientSockets[0]);
}


bool UNevarokMLSocketServer::SendAll(const TArray<uint8>& data)
{
    for (auto i = _clientSockets.Num() - 1; i >= 0; i--)
    {
        const auto clientSocket = _clientSockets[i];
        bool successful = false;
        Send(clientSocket, data, successful);

        if (!successful)
        {
            _clientSockets.RemoveAt(i);
        }
    }

    return true;
}

bool UNevarokMLSocketServer::Send(FSocket* socket, const TArray<uint8>& data, bool& successful) const
{
    if (!socket)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Socket is not valid!"));
        return false;
    }

    TArray<uint8> sendBuffer;
    sendBuffer.AddZeroed(4);


    const uint32 length = FMath::Clamp<uint32>(data.Num(), 0, UINT32_MAX);
    FMemory::Memcpy(sendBuffer.GetData(), &length, sizeof length);

    sendBuffer.Append(data);

    int32 bytesSent = 0;
    successful = socket->Send(sendBuffer.GetData(), sendBuffer.Num(), bytesSent);

    if (!successful)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to send data through the socket!"));
        return false;
    }

    return true;
}


bool UNevarokMLSocketServer::Receive(FSocket* socket, TArray<uint8>& data, bool& successful) const
{
    const auto UINT32_SIZE = sizeof uint32;

    if (!socket)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Socket is not valid!"));
        return false;
    }

    TArray<uint8> lengthBuffer;
    lengthBuffer.SetNumUninitialized(UINT32_SIZE);

    int32 bytesReceived = 0;
    successful = socket->Recv(lengthBuffer.GetData(), lengthBuffer.Num(), bytesReceived);

    if (lengthBuffer.Num() < UINT32_SIZE)
    {
        return false;
    }

    if (!successful)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to receive data from the socket!"));
        return false;
    }

    if (bytesReceived < UINT32_SIZE)
    {
        return false;
    }

    uint32 length = 0;
    FMemory::Memcpy(&length, lengthBuffer.GetData(), UINT32_SIZE);

    if (length <= 0)
    {
        return false;
    }

    TArray<uint8> receiveBuffer;
    receiveBuffer.SetNumUninitialized(length);

    successful = socket->Recv(receiveBuffer.GetData(), receiveBuffer.Num(), bytesReceived);
    if (!successful)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to receive data from the socket!"));
        return false;
    }

    data = MoveTemp(receiveBuffer);

    return true;
}

void UNevarokMLSocketServer::CloseConnections()
{
    for (const auto clientSocket : _clientSockets)
    {
        if (clientSocket)
        {
            clientSocket->Close();
            _socketSubsystem->DestroySocket(clientSocket);
        }
    }

    _clientSockets.Empty();
}

void UNevarokMLSocketServer::Close()
{
    if (_socket)
    {
        _socket->Close();
        _socketSubsystem->DestroySocket(_socket);
        _socket = nullptr;
    }

    CloseConnections();
}

bool UNevarokMLSocketServer::HasPendingData() const
{
    uint32 BytesPending;
    return _clientSockets.Num() > 0 && _clientSockets[0]->HasPendingData(BytesPending);
}

bool UNevarokMLSocketServer::IsConnected(FSocket* socket)
{
    if (!socket)
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Socket is not valid!"));
        return false;
    }

    uint32 BytesPending;
    if (!socket->HasPendingData(BytesPending))
    {
        UNevarokMLLogUtils::LogError(TEXT("[USocketServer]Failed to check pending data on socket!"));
        return false;
    }

    return BytesPending > 0;
}

bool UNevarokMLSocketServer::HasConnections() const
{
    return _clientSockets.Num() > 0;
}

TArray<uint8> UNevarokMLSocketServer::StringToBytes(const FString& text)
{
    TArray<uint8> result;

    const FTCHARToUTF8 converter(text.GetCharArray().GetData());
    const FString convertedString = FString(converter.Length(), converter.Get());

    uint8* data = reinterpret_cast<uint8*>(const_cast<TCHAR*>(convertedString.GetCharArray().GetData()));
    const int32 size = convertedString.Len() * sizeof(TCHAR);
    result.Append(data, size);

    return result;
}

FString UNevarokMLSocketServer::BytesToString(const TArray<uint8>& bytes)
{
    return FString(bytes.Num(), UTF8_TO_TCHAR(bytes.GetData()));
}
