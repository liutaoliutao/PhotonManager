/* Exit Games Photon - objC Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#import "EGPhotonPeer.h"

@interface EGPhotonPeer ()

@property (readonly) ExitGames::Photon::PhotonPeer* Implementation;
@property (readonly) id<EGPhotonListener> InternalListener;

- (instancetype) initWithPhotonListener:(id<EGPhotonListener>)listener :(nByte)connectionProtocol :(bool)useLitePeer NS_DESIGNATED_INITIALIZER;

@end
