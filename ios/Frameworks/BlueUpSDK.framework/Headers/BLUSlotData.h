//
//  AdvSlotData.h
//  BlueBeacon5
//
//  Created by Samuele Forconi on 25/01/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BLUSensorData.h"
#import "BLUiBeaconData.h"
#import "BLUQuuppaData.h"
#import "BLUEddystoneData.h"

@interface BLUSlotData : NSObject

@property (nullable, nonatomic, readonly) BLUEddystoneData *eddystone;
@property (nullable, nonatomic, readonly) BLUiBeaconData   *ibeacon;
@property (nullable, nonatomic, readonly) BLUQuuppaData    *quuppa;
@property (nullable, nonatomic, readonly) BLUSensorData    *sensor;

// Override del metodo description
- (nonnull NSString *)description;

@end
