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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetRolePolicyRequest : public IAMRequest
  {
  public:
    GetRolePolicyRequest();
    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline GetRolePolicyRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline GetRolePolicyRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role associated with the policy.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline GetRolePolicyRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline GetRolePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline GetRolePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy document to get.</p> <p>This parameter allows (per its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-+</p>
     */
    inline GetRolePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
