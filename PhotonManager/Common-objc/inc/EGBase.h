/* Exit Games Common - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#import "EGBaseListener.h"
#import "EGDefines.h"
#import "EGToString.h"

@interface EGBase : NSObject

+ (void) setListener:(id<EGBaseListener>)baseListener;
+ (int) DebugOutputLevel;
+ (void) setDebugOutputLevel:(int)debugOutputLevel;

@end
