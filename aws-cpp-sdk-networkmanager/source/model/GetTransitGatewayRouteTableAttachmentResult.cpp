﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetTransitGatewayRouteTableAttachmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTransitGatewayRouteTableAttachmentResult::GetTransitGatewayRouteTableAttachmentResult()
{
}

GetTransitGatewayRouteTableAttachmentResult::GetTransitGatewayRouteTableAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTransitGatewayRouteTableAttachmentResult& GetTransitGatewayRouteTableAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransitGatewayRouteTableAttachment"))
  {
    m_transitGatewayRouteTableAttachment = jsonValue.GetObject("TransitGatewayRouteTableAttachment");

  }



  return *this;
}
