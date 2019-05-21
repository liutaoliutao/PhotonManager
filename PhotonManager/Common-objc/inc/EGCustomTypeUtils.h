/* Exit Games Common - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "defines.h"
#import "EGBase.h"
#import "EGCustomType.h"

@interface EGCustomTypeUtils : EGBase
{
}

+ (void) initClass:(nByte)typeCode :(Class<EGCustomType>)delegate;
+ (Class<EGCustomType>) getClassForCode:(nByte)typeCode;

@end
