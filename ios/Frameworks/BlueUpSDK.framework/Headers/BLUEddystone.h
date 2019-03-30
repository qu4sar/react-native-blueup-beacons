//
//  Eddystone.h
//  BlueBeacon Manager
//
//  Created by Samuele Forconi on 12/01/17.
//  Copyright © 2017 BlueUp Srls. All rights reserved.
//

#ifndef BLUEddystone_h
#define BLUEddystone_h

#define EddystoneAdvertisingIntervalMin             100
#define EddystoneAdvertisingIntervalMax             5000

#define EddystoneAdvertisedTxPowerUnset             -128
#define EddystoneAdvertisedTxPowerMin               -100
#define EddystoneAdvertisedTxPowerMax               20

#define EddystoneWriteLengthUid                     16
#define EddystoneWriteLengthUrl                     18
#define EddystoneWriteLengthEidEcdh                 33
#define EddystoneWriteLengthEidIdk                  17

#define EddystoneReadLengthUid                      18
#define EddystoneReadLengthUrl                      20
#define EddystoneReadLengthTlm                      14
#define EddystoneReadLengthEid                      14

typedef enum {
    EddystoneRadioTxPowerNeg40 = -40,
    EddystoneRadioTxPowerNeg30 = -30,
    EddystoneRadioTxPowerNeg20 = -20,
    EddystoneRadioTxPowerNeg16 = -16,
    EddystoneRadioTxPowerNeg12 = -12,
    EddystoneRadioTxPowerNeg8  = -8,
    EddystoneRadioTxPowerNeg4  = -4,
    EddystoneRadioTxPowerPos0  = 0,
    EddystoneRadioTxPowerPos4  = 4
} EddystoneRadioTxPower;

typedef enum {
    EddystoneLockStateLocked  = 0x00,
    EddystoneLockStateUnlocked = 0x01,
    EddystoneLockStateUnlockedAndAutoRelockDisabled = 0x02
} EddystoneLockState;

typedef enum {
    EddystoneFrameTypeUid = 0x00,
    EddystoneFrameTypeUrl = 0x10,
    EddystoneFrameTypeTlm = 0x20,
    EddystoneFrameTypeEid = 0x30
} EddystoneFrameType;

typedef enum {
    EddystoneUrlSchemeHttpWww  = 0x00,
    EddystoneUrlSchemeHttpsWww = 0x01,
    EddystoneUrlSchemeHttp     = 0x02,
    EddystoneUrlSchemeHttps    = 0x03
} EddystoneUrlScheme;

typedef struct {
    uint8_t  version;
    uint8_t  maxSupportedTotalSlots;
    uint8_t  maxSupportedEidSlots;
    uint8_t  capabilitiesBitField;
    uint16_t supportedFrameTypes;
    uint8_t  supportedRadioTxPower[16];
    uint8_t  supportedRadioTxPowerLength;
} EddystoneCapabilities;


#endif /* Eddystone_h */
