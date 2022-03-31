﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DisassociateThirdPartyFirewallResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateThirdPartyFirewallResult::DisassociateThirdPartyFirewallResult() : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET)
{
}

DisassociateThirdPartyFirewallResult::DisassociateThirdPartyFirewallResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET)
{
  *this = result;
}

DisassociateThirdPartyFirewallResult& DisassociateThirdPartyFirewallResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThirdPartyFirewallStatus"))
  {
    m_thirdPartyFirewallStatus = ThirdPartyFirewallAssociationStatusMapper::GetThirdPartyFirewallAssociationStatusForName(jsonValue.GetString("ThirdPartyFirewallStatus"));

  }



  return *this;
}
