/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "TrafficStats.h"
#import "EGTrafficStats.h"

@interface EGTrafficStats ()

- (instancetype) initWithCppTrafficStats:(const ExitGames::Photon::TrafficStats&)ts NS_DESIGNATED_INITIALIZER;
+ (instancetype) trafficStatsWithCppTrafficStats:(const ExitGames::Photon::TrafficStats&)ts;

@end
