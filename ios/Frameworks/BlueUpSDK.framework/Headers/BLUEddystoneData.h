//
//  BLUEddystoneData.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 04/12/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLUEddystone.h"

@interface BLUEddystoneUidData : NSObject
@property (nullable, nonatomic) NSNumber *advertisedTxPower;
@property (nullable, nonatomic) NSUUID   *uid;
@end

@interface BLUEddystoneUrlData : NSObject
@property (nullable, nonatomic) NSNumber *advertisedTxPower;
@property (nullable, nonatomic) NSString *url;
@end

@interface BLUEddystoneTlmData : NSObject
@property (nullable, nonatomic) NSNumber *version;
@property (nullable, nonatomic) NSNumber *batteryVoltage;
@property (nullable, nonatomic) NSNumber *temperature;
@property (nullable, nonatomic) NSNumber *packetsCounter;
@property (nullable, nonatomic) NSNumber *secondsCounter;
@end

@interface BLUEddystoneEidData : NSObject
@property (nullable, nonatomic) NSNumber *advertisedTxPower;
@property (nullable, nonatomic) NSData   *eid;
@property (nullable, nonatomic) NSNumber *eidExponent;
@property (nullable, nonatomic) NSNumber *eidClock;
@property (nullable, nonatomic) NSData   *eidKey;
@end

@interface BLUEddystoneData : NSObject

@property (nonatomic, readonly) EddystoneFrameType frameType;
@property (nullable, nonatomic, readonly) BLUEddystoneUidData *uidData;
@property (nullable, nonatomic, readonly) BLUEddystoneUrlData *urlData;
@property (nullable, nonatomic, readonly) BLUEddystoneTlmData *tlmData;
@property (nullable, nonatomic, readonly) BLUEddystoneEidData *eidData;

- (nonnull instancetype)initWithUid:(nonnull NSUUID *)uid advertisedTxPower:(nullable NSNumber *)advertisedTxPower;
- (nonnull instancetype)initWithUrl:(nonnull NSString *)url advertisedTxPower:(nullable NSNumber *)advertisedTxPower;
- (nonnull instancetype)initWithTlmBatteryVoltage:(nullable NSNumber *)batteryVoltage
                              temperature:(nullable NSNumber *)temperature
                           secondsCounter:(nullable NSNumber *)secondsCounter
                           packetsCounter:(nullable NSNumber *)packetsCounter;
- (nonnull instancetype)initWithEid:(nullable NSData *)eid advertisedTxPower:(nullable NSNumber *)advertisedTxPower;
- (nonnull instancetype)initWithEidExponent:(nullable NSNumber *)eidExponent eidClock:(nullable NSNumber *)eidClock eid:(nullable NSData *)eid;
- (nonnull instancetype)initWithEidKey:(nullable NSData *)eidKey eidExponent:(nullable NSNumber *)eidExponent;
- (nonnull NSString *)description;

@end

