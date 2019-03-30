//
//  BLUBeacon.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 29/11/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLUBeaconConfiguration;
@class BLUBeaconDeviceInfo;
@protocol BLUBeaconDelegate;

@interface BLUBeacon : NSObject

@property (nonatomic, nullable) id<BLUBeaconDelegate> delegate;

- (NSInteger)modelNumber;
- (nonnull NSString *)modelName;
- (NSInteger)serialNumber;
- (NSInteger)batteryLevel;
- (NSInteger)RSSI;
- (BOOL)connectable;

- (void)reset;

- (void)readDeviceInformations;
- (void)readBatteryLevel;
- (void)readConfiguration;
- (void)writeConfiguration:(nonnull BLUBeaconConfiguration *)configuration;

- (void)changePassword:(nullable NSString *)oldPassword withNewPassword:(nonnull NSString *)newPassword;
- (void)disablePassword;

@end

@protocol BLUBeaconDelegate <NSObject>

@optional
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didReadConfiguration:(nullable BLUBeaconConfiguration *)configuration error:(nullable NSError *)error;
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didReadDeviceInformations:(nullable BLUBeaconDeviceInfo *)deviceInfo error:(nullable NSError *)error;
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didReadBatteryLevel:(nullable NSNumber *)batteryLevel error:(nullable NSError *)error;
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didReset:(nullable NSError *)error;
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didWriteConfiguration:(nullable BLUBeaconConfiguration *)configuration error:(nullable NSError *)error;

- (void)bluBeacon:(nonnull BLUBeacon *)beacon didChangePassword:(nullable NSError *)error;
- (void)bluBeacon:(nonnull BLUBeacon *)beacon didDisablePassword:(nullable NSError *)error;

@end
