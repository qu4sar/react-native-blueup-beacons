//
//  BeaconManager.h
//  RNBlueBeacon
//
//  Created by Salif Omar Faye on 30/03/2019.
//  Copyright © 2019 Stride. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BlueUpSDK/BlueUpSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BeaconManager : NSObject <BLUCentralManagerDelegate>
    @property (nonatomic) BLUCentralManager *central;

    /*** Initialization **/
    -(void)initSdk:();
    
    /** Scanner management **/
    -(void) startSearch; // start blueup beacon search
    -(void) stopSearch;  // stop blueup beacon search
    
@end

NS_ASSUME_NONNULL_END
