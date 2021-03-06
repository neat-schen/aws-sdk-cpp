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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Full directory configuration details, which are used to join domains for the
   * AppStream 2.0 streaming instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DirectoryConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API DirectoryConfig
  {
  public:
    DirectoryConfig();
    DirectoryConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectoryConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline DirectoryConfig& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline DirectoryConfig& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the directory, such as corp.example.com</p>
     */
    inline DirectoryConfig& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitDistinguishedNames() const{ return m_organizationalUnitDistinguishedNames; }

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = value; }

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = std::move(value); }

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitDistinguishedNames(value); return *this;}

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitDistinguishedNames(std::move(value)); return *this;}

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const Aws::String& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(Aws::String&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the distinguished names of organizational units in which to place
     * computer accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const char* value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }


    /**
     * <p>The <i>AccountName</i> and <i>AccountPassword</i> of the service account, to
     * be used by the streaming instance to connect to the directory.</p>
     */
    inline const ServiceAccountCredentials& GetServiceAccountCredentials() const{ return m_serviceAccountCredentials; }

    /**
     * <p>The <i>AccountName</i> and <i>AccountPassword</i> of the service account, to
     * be used by the streaming instance to connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(const ServiceAccountCredentials& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = value; }

    /**
     * <p>The <i>AccountName</i> and <i>AccountPassword</i> of the service account, to
     * be used by the streaming instance to connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(ServiceAccountCredentials&& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = std::move(value); }

    /**
     * <p>The <i>AccountName</i> and <i>AccountPassword</i> of the service account, to
     * be used by the streaming instance to connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(const ServiceAccountCredentials& value) { SetServiceAccountCredentials(value); return *this;}

    /**
     * <p>The <i>AccountName</i> and <i>AccountPassword</i> of the service account, to
     * be used by the streaming instance to connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(ServiceAccountCredentials&& value) { SetServiceAccountCredentials(std::move(value)); return *this;}


    /**
     * <p>The time stamp when the directory configuration was created within AppStream
     * 2.0.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time stamp when the directory configuration was created within AppStream
     * 2.0.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time stamp when the directory configuration was created within AppStream
     * 2.0.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time stamp when the directory configuration was created within AppStream
     * 2.0.</p>
     */
    inline DirectoryConfig& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time stamp when the directory configuration was created within AppStream
     * 2.0.</p>
     */
    inline DirectoryConfig& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
