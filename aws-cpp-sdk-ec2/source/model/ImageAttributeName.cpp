﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ImageAttributeNameMapper
      {

        static const int description_HASH = HashingUtils::HashString("description");
        static const int kernel_HASH = HashingUtils::HashString("kernel");
        static const int ramdisk_HASH = HashingUtils::HashString("ramdisk");
        static const int launchPermission_HASH = HashingUtils::HashString("launchPermission");
        static const int productCodes_HASH = HashingUtils::HashString("productCodes");
        static const int blockDeviceMapping_HASH = HashingUtils::HashString("blockDeviceMapping");
        static const int sriovNetSupport_HASH = HashingUtils::HashString("sriovNetSupport");
        static const int bootMode_HASH = HashingUtils::HashString("bootMode");
        static const int lastLaunchedTime_HASH = HashingUtils::HashString("lastLaunchedTime");


        ImageAttributeName GetImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return ImageAttributeName::description;
          }
          else if (hashCode == kernel_HASH)
          {
            return ImageAttributeName::kernel;
          }
          else if (hashCode == ramdisk_HASH)
          {
            return ImageAttributeName::ramdisk;
          }
          else if (hashCode == launchPermission_HASH)
          {
            return ImageAttributeName::launchPermission;
          }
          else if (hashCode == productCodes_HASH)
          {
            return ImageAttributeName::productCodes;
          }
          else if (hashCode == blockDeviceMapping_HASH)
          {
            return ImageAttributeName::blockDeviceMapping;
          }
          else if (hashCode == sriovNetSupport_HASH)
          {
            return ImageAttributeName::sriovNetSupport;
          }
          else if (hashCode == bootMode_HASH)
          {
            return ImageAttributeName::bootMode;
          }
          else if (hashCode == lastLaunchedTime_HASH)
          {
            return ImageAttributeName::lastLaunchedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageAttributeName>(hashCode);
          }

          return ImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForImageAttributeName(ImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ImageAttributeName::description:
            return "description";
          case ImageAttributeName::kernel:
            return "kernel";
          case ImageAttributeName::ramdisk:
            return "ramdisk";
          case ImageAttributeName::launchPermission:
            return "launchPermission";
          case ImageAttributeName::productCodes:
            return "productCodes";
          case ImageAttributeName::blockDeviceMapping:
            return "blockDeviceMapping";
          case ImageAttributeName::sriovNetSupport:
            return "sriovNetSupport";
          case ImageAttributeName::bootMode:
            return "bootMode";
          case ImageAttributeName::lastLaunchedTime:
            return "lastLaunchedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
