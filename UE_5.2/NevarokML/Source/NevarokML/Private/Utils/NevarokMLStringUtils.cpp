/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLStringUtils.h"

#include "Types/NevarokMLIndex2D.h"

TArray<uint8> UNevarokMLStringUtils::StringToBytes(const FString& text)
{
    TArray<uint8> result;

    const FTCHARToUTF8 converter(text.GetCharArray().GetData());
    const FString convertedString = FString(converter.Length(), converter.Get());

    const uint8* data = reinterpret_cast<uint8*>(const_cast<TCHAR*>(convertedString.GetCharArray().GetData()));
    const int32 size = convertedString.Len() * sizeof(TCHAR);
    result.Append(data, size);

    return result;
}

FString UNevarokMLStringUtils::BytesToString(const TArray<uint8>& bytes)
{
    return FString(bytes.Num(), UTF8_TO_TCHAR(bytes.GetData()));
}

FString UNevarokMLStringUtils::Conv_IndexToString(FNevarokMLIndex2D index)
{
    return index.ToString();
}
