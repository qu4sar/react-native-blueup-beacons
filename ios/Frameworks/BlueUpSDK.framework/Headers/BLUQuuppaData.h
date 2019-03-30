//
//  BLUQuuppaData.h
//  BlueUpSDK
//
//  Created by Samuele Forconi on 04/12/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLUQuuppaData : NSObject
@property (nullable, nonatomic, readonly) NSNumber *packetId;
@property (nullable, nonatomic, readonly) NSNumber *deviceType;
@property (nullable, nonatomic, readonly) NSNumber *header;
@property (nullable, nonatomic, readonly) NSData   *tagId;
@property (nullable, nonatomic, readonly) NSNumber *checksum;
@property (nullable, nonatomic, readonly) NSData   *dfField;

- (nonnull instancetype)initWithDirectionFindingData:(nonnull NSData *)data;
- (nonnull instancetype)initWithTagId:(nullable NSData *)tagId;
- (nonnull NSString *)description;

@end
