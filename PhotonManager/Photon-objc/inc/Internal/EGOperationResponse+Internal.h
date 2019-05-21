/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "OperationResponse.h"
#import "EGOperationResponse.h"

@interface EGOperationResponse ()

- (EGOperationResponse*) initWithCppOperationResponse:(const ExitGames::Photon::OperationResponse&)operationResponse NS_DESIGNATED_INITIALIZER;
+ (EGOperationResponse*) operationResponseWithCppOperationResponse:(const ExitGames::Photon::OperationResponse&)operationResponse;

@end
