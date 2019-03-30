//
//  BeaconManager.m
//  RNBlueBeacon
//
//  Created by Salif Omar Faye on 30/03/2019.
//  Copyright © 2019 Stride. All rights reserved.
//

#import "BeaconManager.h"

@implementation BeaconManager

    -(void)initSdk{
        self.central = [[BLUCentralManager alloc] initWithDelegate:self];
    }
        
    -(void)startSearch{
        self.central.delegate = self;
        [self.central startScan];
    }
    
    -(void)stopSearch{
        [self.central stopScan];
    }
    
    /*** Beacon delegate ***/
    
    -(void)bluCentral:(BLUCentralManager *)central didDiscoverBeacons:(NSArray *)beacons{
        NSLog(@"Beacon discovered");
    }
    
    -(void)bluCentral:(BLUCentralManager *)central didConnectBeacon:(BLUBeacon *)beacon error:(NSError *)error{
        NSLog(@"Connecting to beacon...");
    }
    
    -(void)bluCentral:(BLUCentralManager *)central didDisconnectBeacon:(BLUBeacon *)beacon error:(NSError *)error{
        NSLog(@"Disconnected...");
    }
@end
