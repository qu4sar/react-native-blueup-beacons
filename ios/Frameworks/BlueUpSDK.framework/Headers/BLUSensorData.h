//
//  BLUSensorData.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 04/12/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLUSensorData : NSObject

@property (nullable, nonatomic, readonly) NSNumber *temperature;
@property (nullable, nonatomic, readonly) NSNumber *humidity;
@property (nullable, nonatomic, readonly) NSNumber *pressure;

- (nonnull instancetype)initWithTemperature:(nullable NSNumber *)temperature humidity:(nullable NSNumber *)humidity pressure:(nullable NSNumber *)pressure;
- (nonnull NSString *)description;

@end
