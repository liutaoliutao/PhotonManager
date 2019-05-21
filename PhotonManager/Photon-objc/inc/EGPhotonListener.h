/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#import "EGBaseListener.h"
#import "EGEventData.h"
#import "EGOperationResponse.h"

@protocol EGPhotonListener <EGBaseListener>

- (void) onOperationResponse:(EGOperationResponse*)operationResponse;
- (void) onStatusChanged:(int)statusCode;
- (void) onEvent:(EGEventData*)eventData;



@optional

- (void) onPingResponse:(NSString*)address :(unsigned int)pingResult;

@end

/** @file */
