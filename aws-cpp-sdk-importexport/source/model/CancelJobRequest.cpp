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

#include <aws/importexport/model/CancelJobRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils;

CancelJobRequest::CancelJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_aPIVersionHasBeenSet(false)
{
}

Aws::String CancelJobRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelJob&";
  if(m_jobIdHasBeenSet)
  {
    ss << "JobId=" << StringUtils::URLEncode(m_jobId.c_str()) << "&";
  }

  if(m_aPIVersionHasBeenSet)
  {
    ss << "APIVersion=" << StringUtils::URLEncode(m_aPIVersion.c_str()) << "&";
  }

  ss << "Version=2010-06-01";
  return ss.str();
}


void  CancelJobRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
