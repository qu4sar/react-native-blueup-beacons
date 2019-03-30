//
//  Slot.h
//  BlueBeacon Manager
//
//  Created by Samuele Forconi on 18/01/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BLUSlotData.h"

@interface BLUSlot : NSObject

@property (nullable, nonatomic, readonly) BLUSlotData *slotData;
@property (nullable, nonatomic, readonly) NSNumber    *advertisingInterval;
@property (nullable, nonatomic, readonly) NSNumber    *radioTxPower;
@property (nullable, nonatomic, readonly) NSNumber    *advertisedTxPower;

- (nonnull NSString *)description;

@end
