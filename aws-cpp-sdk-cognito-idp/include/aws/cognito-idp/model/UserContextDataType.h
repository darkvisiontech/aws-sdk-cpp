﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Information that your app generates about a user's
   * <code>AdminInitiateAuth</code> or <code>AdminRespondToAuthChallenge</code>
   * session. Amazon Cognito advanced security features calculate risk levels for
   * user sessions based on this context data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserContextDataType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserContextDataType
  {
  public:
    UserContextDataType();
    UserContextDataType(Aws::Utils::Json::JsonView jsonValue);
    UserContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline const Aws::String& GetEncodedData() const{ return m_encodedData; }

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline bool EncodedDataHasBeenSet() const { return m_encodedDataHasBeenSet; }

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetEncodedData(const Aws::String& value) { m_encodedDataHasBeenSet = true; m_encodedData = value; }

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetEncodedData(Aws::String&& value) { m_encodedDataHasBeenSet = true; m_encodedData = std::move(value); }

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline void SetEncodedData(const char* value) { m_encodedDataHasBeenSet = true; m_encodedData.assign(value); }

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline UserContextDataType& WithEncodedData(const Aws::String& value) { SetEncodedData(value); return *this;}

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline UserContextDataType& WithEncodedData(Aws::String&& value) { SetEncodedData(std::move(value)); return *this;}

    /**
     * <p>Contextual data, such as the user's device fingerprint, IP address, or
     * location, used for evaluating the risk of an unexpected event by Amazon Cognito
     * advanced security.</p>
     */
    inline UserContextDataType& WithEncodedData(const char* value) { SetEncodedData(value); return *this;}

  private:

    Aws::String m_encodedData;
    bool m_encodedDataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
