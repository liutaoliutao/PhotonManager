/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "OperationRequest.h"
#import "EGOperationRequest.h"

@interface EGOperationRequest (Internal)

- (ExitGames::Photon::OperationRequest*) toCPP;

@end
