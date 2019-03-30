//
//  BLUCentralManager.h
//
//
//  Created by Samuele Forconi on 29/11/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@class BLUBeacon;
@protocol BLUCentralManagerDelegate;

@interface BLUCentralManager : NSObject <CBCentralManagerDelegate>

@property (nonatomic, nullable) id<BLUCentralManagerDelegate> delegate;
@property (nonatomic, readonly) BOOL isScanning;

- (nonnull instancetype)initWithDelegate:(nullable id<BLUCentralManagerDelegate>)delegate;
- (void)startScan;
- (void)stopScan;
- (void)connect:(nonnull BLUBeacon *)bluBeacon password:(nullable NSString *)password;
- (void)disconnect:(nonnull BLUBeacon *)bluBeacon;

@end

@protocol BLUCentralManagerDelegate <NSObject>
@optional
- (void)bluCentral:(nonnull BLUCentralManager *)central didDiscoverBeacons:(nonnull NSArray *)beacons;
- (void)bluCentral:(nonnull BLUCentralManager *)central didConnectBeacon:(nonnull BLUBeacon *)beacon error:(nullable NSError *)error;
- (void)bluCentral:(nonnull BLUCentralManager *)central didDisconnectBeacon:(nonnull BLUBeacon *)beacon error:(nullable NSError *)error;
@end
