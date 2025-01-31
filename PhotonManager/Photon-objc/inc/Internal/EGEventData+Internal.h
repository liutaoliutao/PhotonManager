/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "EventData.h"
#import "EGEventData.h"

@interface EGEventData (Internal)

- (EGEventData*) initWithCppEventData:(const ExitGames::Photon::EventData&)eventData;
+ (EGEventData*) eventDataWithCppEventData:(const ExitGames::Photon::EventData&)eventData;

@end
