/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Utils/NevarokMLJsonUtils.h"
#include "Utils/NevarokMLStringUtils.h"
#include "Serialization/JsonSerializer.h"

void UNevarokMLJsonUtils::ToString(const TSharedPtr<FJsonObject>& jsonObject, FString& jsonString)
{
    jsonString.Reserve(jsonString.Len() + 2 + jsonObject->Values.Num() * 64);

    jsonString.AppendChar('{');

    bool bFirst = true;
    for (const auto& pair : jsonObject->Values)
    {
        if (!bFirst)
        {
            jsonString.AppendChar(',');
        }

        jsonString.AppendChar('\"');
        jsonString.Append(pair.Key);
        jsonString.Append(TEXT("\":"));

        ValueToString(pair.Value, jsonString);

        bFirst = false;
    }

    jsonString.AppendChar('}');
}

void UNevarokMLJsonUtils::ValueToString(const TSharedPtr<FJsonValue>& jsonValue, FString& jsonString)
{
    switch (jsonValue->Type)
    {
        case EJson::String:
            jsonString.AppendChar('\"');
            jsonString.Append(jsonValue->AsString());
            jsonString.AppendChar('\"');
            break;

        case EJson::Number:
        {
            const double numericValue = jsonValue->AsNumber();
            const int64 integerValue = static_cast<int64>(numericValue);
            if (FMath::IsNearlyEqual(numericValue, static_cast<double>(integerValue)))
            {
                jsonString.Appendf(TEXT("%lld"), integerValue);
            }
            else
            {
                jsonString.Appendf(TEXT("%f"), numericValue);
            }
            break;
        }

        case EJson::Boolean:
            jsonString.Append(jsonValue->AsBool() ? TEXT("true") : TEXT("false"));
            break;

        case EJson::Array:
        {
            const TArray<TSharedPtr<FJsonValue>>& arrayValues = jsonValue->AsArray();
            const int32 numValues = arrayValues.Num();

            jsonString.AppendChar('[');

            if (numValues > 0)
            {
                ValueToString(arrayValues[0], jsonString);

                for (int32 i = 1; i < numValues; ++i)
                {
                    jsonString.AppendChar(',');
                    ValueToString(arrayValues[i], jsonString);
                }
            }

            jsonString.AppendChar(']');
            break;
        }

        case EJson::Object:
        {
            const TSharedPtr<FJsonObject>& objectValue = jsonValue->AsObject();
            ToString(objectValue, jsonString);
            break;
        }
    }
}

TArray<uint8> UNevarokMLJsonUtils::ToBytes(const TSharedPtr<FJsonObject>& jsonObject)
{
    FString jsonString;
    ToString(jsonObject, jsonString);
    
    return UNevarokMLStringUtils::StringToBytes(jsonString);
}

bool UNevarokMLJsonUtils::TryGetJsonObject(const FString& jsonString, TSharedPtr<FJsonObject>& jsonObject)
{
    const TSharedRef<TJsonReader<>> reader = TJsonReaderFactory<>::Create(jsonString);
    return FJsonSerializer::Deserialize(reader, jsonObject);
}
