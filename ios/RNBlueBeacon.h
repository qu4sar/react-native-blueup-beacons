
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import "BeaconManager.h"

@interface RNBlueBeacon : NSObject <RCTBridgeModule>
    @property (nonatomic) BeaconManager *manager;

@end
  
