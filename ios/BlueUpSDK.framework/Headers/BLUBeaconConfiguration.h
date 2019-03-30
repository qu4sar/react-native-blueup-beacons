//
//  BLUBeaconConfiguration.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 30/11/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    BLURadioTxPower_Pos4dBm  = 4,
    BLURadioTxPower_0dBm     = 0,
    BLURadioTxPower_Neg4dBm  = -4,
    BLURadioTxPower_Neg8dBm  = -8,
    BLURadioTxPower_Neg12dBm = -12,
    BLURadioTxPower_Neg16dBm = -16,
    BLURadioTxPower_Neg20dBm = -20,
    BLURadioTxPower_Neg30dBm = -30,
    BLURadioTxPower_Neg40dBm = -40
} BLURadioTxPower;

typedef enum {
    BLUAccelerometerDisabled             = 0,
    BLUAccelerometerSleepOnHorizontal    = 1,
    BLUAccelerometerStandByOnHorizontal  = 2,
    BLUAccelerometerAdvertisingOnShake   = 3,
    BLUAccelerometerAdvertisingOnMoveHi  = 4,
    BLUAccelerometerAdvertisingOnMoveMed = 5,
    BLUAccelerometerAdvertisingOnMoveLo  = 6,
    BLUAccelerometerNotSupported         = 15
} BLUAccelerometerMode;

@interface BLUBeaconConfiguration : NSObject

- (BOOL)isConnectable;
- (void)setConnectable:(BOOL)connectable;

- (BOOL)isAnonymous;
- (void)setAnonymous:(BOOL)anonymous;

- (nullable NSDate *)getAdvertisingStartTime;
- (nullable NSDate *)getAdvertisingEndTime;
- (nullable NSError *)setAdvertisingTime:(nullable NSDate *)advertisingStartTime duration:(NSUInteger)duration;

- (BLUAccelerometerMode)getAccelerometerConfiguration;
- (nullable NSError *)setAccelerometerConfiguration:(BLUAccelerometerMode)accelerometerMode;

- (nonnull NSArray *)getConfiguredSlots;
- (void)removeSlotAtIndex:(NSUInteger)index;
- (void)removeAllSlots;

- (nullable NSError *)addIBeaconSlot:(nonnull NSUUID *)uuid
                      major:(uint16_t)major
                      minor:(uint16_t)minor
        advertisingInterval:(uint16_t)advertisingInterval
               radioTxPower:(BLURadioTxPower)radioTxPower;

- (nullable NSError *)addSensorSlot:(uint16_t)advertisingInterval
              radioTxPower:(BLURadioTxPower)radioTxPower;


- (nullable NSError *)addQuuppaSlot:(nullable NSData *)tagId
                advertisingInterval:(uint16_t)advertisingInterval
                       radioTxPower:(BLURadioTxPower)radioTxPower;

- (nullable NSError *)addEddystoneUIDSlot:(nonnull NSUUID *)uid
             advertisingInterval:(uint16_t)advertisingInterval
                    radioTxPower:(BLURadioTxPower)radioTxPower;

- (nullable NSError *)addEddystoneURLSlot:(nonnull NSString *)url
             advertisingInterval:(uint16_t)advertisingInterval
                    radioTxPower:(BLURadioTxPower)radioTxPower;

- (nullable NSError *)addEddystoneTLMSlot:(uint16_t)advertisingInterval
                    radioTxPower:(BLURadioTxPower)radioTxPower;

- (nonnull NSString *)description;

@end
