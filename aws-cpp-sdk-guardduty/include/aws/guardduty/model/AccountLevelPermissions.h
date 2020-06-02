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

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/BlockPublicAccess.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the account level permissions on the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountLevelPermissions">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API AccountLevelPermissions
  {
  public:
    AccountLevelPermissions();
    AccountLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AccountLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const{ return m_blockPublicAccess; }

    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }

    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline void SetBlockPublicAccess(const BlockPublicAccess& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = value; }

    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline void SetBlockPublicAccess(BlockPublicAccess&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::move(value); }

    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(const BlockPublicAccess& value) { SetBlockPublicAccess(value); return *this;}

    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(BlockPublicAccess&& value) { SetBlockPublicAccess(std::move(value)); return *this;}

  private:

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
