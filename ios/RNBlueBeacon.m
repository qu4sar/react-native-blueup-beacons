
#import "RNBlueBeacon.h"

@implementation RNBlueBeacon


    
    RCT_EXPORT_MODULE();

    //exports a method getDeviceName to javascript
    RCT_EXPORT_METHOD(start:(RCTResponseSenderBlock)callback){
        @try{
            self.manager = [[BeaconManager alloc]init];
            [self.manager initSdk];
            [self.manager startSearch];
            callback(@[[NSNull null], @"test"]);
        }
        @catch(NSException *exception){
            callback(@[exception.reason, [NSNull null]]);
        }
    }
@end

