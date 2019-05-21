/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "TrafficStatsGameLevel.h"
#import "EGTrafficStatsGameLevel.h"

@interface EGTrafficStatsGameLevel ()

- (instancetype) initWithCppTrafficStatsGameLevel:(const ExitGames::Photon::TrafficStatsGameLevel&)ts NS_DESIGNATED_INITIALIZER;
+ (instancetype) trafficStatsGameLevelWithCppTrafficStatsGameLevel:(const ExitGames::Photon::TrafficStatsGameLevel&)ts;

@end
