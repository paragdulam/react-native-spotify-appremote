
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSpotifyAppremoteSpec.h"

@interface SpotifyAppremote : NSObject <NativeSpotifyAppremoteSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SpotifyAppremote : NSObject <RCTBridgeModule>
#endif

@end
