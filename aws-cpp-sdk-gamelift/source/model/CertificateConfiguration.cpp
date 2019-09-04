﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

CertificateConfiguration::CertificateConfiguration() : 
    m_certificateType(CertificateType::NOT_SET),
    m_certificateTypeHasBeenSet(false)
{
}

CertificateConfiguration::CertificateConfiguration(JsonView jsonValue) : 
    m_certificateType(CertificateType::NOT_SET),
    m_certificateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateConfiguration& CertificateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateType"))
  {
    m_certificateType = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("CertificateType"));

    m_certificateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_certificateTypeHasBeenSet)
  {
   payload.WithString("CertificateType", CertificateTypeMapper::GetNameForCertificateType(m_certificateType));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws