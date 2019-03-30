//
//  BLUBeaconError.h
//  BLUBeacon5
//
//  Created by Samuele Forconi on 25/01/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#ifndef BLUError_h
#define BLUError_h

#define BLUCentralErrorDomain                           @"com.blueup.BLUCentralManager"
#define BLUCentralErrorCodeUnsupportedOperation         -1
#define BLUCentralErrorCodeOperationTimeout             -2
#define BLUCentralErrorCodeInvalidPassword              -3

#define BLUBeaconErrorDomain                            @"com.blueup.BLUBeacon"
#define BLUBeaconErrorCodeServiceNotFound               -1
#define BLUBeaconErrorCodeCharacteristicNotFound        -2
#define BLUBeaconErrorCodeOperationCancelled            -3
#define BLUBeaconErrorCodeOperationFailed               -4
#define BLUBeaconErrorCodeInvalidState                  -5
#define BLUBeaconErrorCodeInvalidValue                  -6
#define BLUBeaconErrorCodeForbiddenOperation            -7
#define BLUBeaconErrorCodeWrongPassword                 -8
#define BLUBeaconErrorCodeNotEnoughSpace                -9


#endif /* BLUBeaconError_h */
