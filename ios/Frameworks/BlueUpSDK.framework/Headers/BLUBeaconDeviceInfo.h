//
//  BLUBeaconDeviceInfo.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 05/12/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLUBeaconDeviceInfo : NSObject

@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *modelNumber;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *hardwareRevision;
@property (nonatomic, readonly) NSString *firmwareRevision;
@property (nonatomic, readonly) NSString *softwareRevision;

- (NSString *)description;

@end
