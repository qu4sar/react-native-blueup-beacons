//
//  BLUiBeaconData.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 04/12/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLUiBeaconData : NSObject

@property (nullable, nonatomic, readonly) NSUUID   *uuid;
@property (nullable, nonatomic, readonly) NSNumber *major;
@property (nullable, nonatomic, readonly) NSNumber *minor;
@property (nullable, nonatomic, readonly) NSNumber *calibratedTxPower;

- (nonnull instancetype)initWithProximityUUID:(nonnull NSUUID *)uuid major:(nonnull NSNumber *)major minor:(nonnull NSNumber *)minor calibratedTxPower:(nullable NSNumber *)calibratedTxPower;
- (nonnull NSString *)description;

@end
