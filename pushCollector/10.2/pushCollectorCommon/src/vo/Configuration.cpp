/*!
* Copyright (c) 2012, 2013 Research In Motion Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "Configuration.hpp"

namespace pushcollector
{

Configuration::Configuration()
    : m_usingPublicPushProxyGateway(true)
    , m_launchApplicationOnPush(true)
{
}

Configuration::~Configuration()
{
}

bool Configuration::usingPublicPushProxyGateway() const
{
    return m_usingPublicPushProxyGateway;
}

QString Configuration::providerApplicationId() const
{
    return m_providerApplicationId;
}

QString Configuration::ppgUrl() const
{
    return m_ppgUrl;
}

QString Configuration::pushInitiatorUrl() const
{
    return m_pushInitiatorUrl;
}

bool Configuration::launchApplicationOnPush() const
{
    return m_launchApplicationOnPush;
}

void Configuration::setUsingPublicPushProxyGateway(bool usingPublicPushProxyGateway)
{
    m_usingPublicPushProxyGateway = usingPublicPushProxyGateway;
}

void Configuration::setProviderApplicationId(const QString& providerApplicationId)
{
    m_providerApplicationId = providerApplicationId;
}

void Configuration::setPpgUrl(const QString& ppgUrl)
{
    m_ppgUrl = ppgUrl;
}

void Configuration::setPushInitiatorUrl(const QString& pushInitiatorUrl)
{
    m_pushInitiatorUrl = pushInitiatorUrl;
}

void Configuration::setLaunchApplicationOnPush(bool launchApplicationOnPush)
{
    m_launchApplicationOnPush = launchApplicationOnPush;
}

} // namespace pushcollector
