/* Exit Games Common - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#include "Hashtable.h"
#import "EGDictionary.h"

@interface EGUtils: EGBase

+ (ExitGames::Common::Hashtable*) newEGHashTableFromNSDictionary:(NSDictionary*)origHash;
+ (ExitGames::Common::Object*) newEGObjectFromNSObject:(id<NSObject, EGToString>)origObj;
+ (ExitGames::Common::JVector<ExitGames::Common::Object>*) newEGVectorFromNSMutableArray:(NSMutableArray*)origVec;
+ (NSDictionary*) NSDictionaryFromEGHashTable:(const ExitGames::Common::Hashtable*)origHash;
+ (NSMutableArray*) NSMutableArrayFromEGVector:(ExitGames::Common::JVector<ExitGames::Common::Object>*)origVec;
+ (EGDictionary*) EGDictionaryFromDictionaryBase:(const ExitGames::Common::DictionaryBase*)origDic;

@end
