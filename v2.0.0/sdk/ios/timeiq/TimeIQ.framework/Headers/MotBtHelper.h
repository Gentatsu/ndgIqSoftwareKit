//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/motmodule/algs/MotBtHelper.java
//

#ifndef _MotBtHelper_H_
#define _MotBtHelper_H_

@class BluetoothDeviceInfo;

#import "JB.h"

#define MotBtHelper_AUDIO_VIDEO_CAMCORDER 1076
#define MotBtHelper_AUDIO_VIDEO_CAR_AUDIO 1056
#define MotBtHelper_AUDIO_VIDEO_HANDSFREE 1032
#define MotBtHelper_AUDIO_VIDEO_HEADPHONES 1048
#define MotBtHelper_AUDIO_VIDEO_HIFI_AUDIO 1064
#define MotBtHelper_AUDIO_VIDEO_LOUDSPEAKER 1044
#define MotBtHelper_AUDIO_VIDEO_MICROPHONE 1040
#define MotBtHelper_AUDIO_VIDEO_PORTABLE_AUDIO 1052
#define MotBtHelper_AUDIO_VIDEO_SET_TOP_BOX 1060
#define MotBtHelper_AUDIO_VIDEO_UNCATEGORIZED 1024
#define MotBtHelper_AUDIO_VIDEO_VCR 1068
#define MotBtHelper_AUDIO_VIDEO_VIDEO_CAMERA 1072
#define MotBtHelper_AUDIO_VIDEO_VIDEO_CONFERENCING 1088
#define MotBtHelper_AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER 1084
#define MotBtHelper_AUDIO_VIDEO_VIDEO_GAMING_TOY 1096
#define MotBtHelper_AUDIO_VIDEO_VIDEO_MONITOR 1080
#define MotBtHelper_AUDIO_VIDEO_WEARABLE_HEADSET 1028
#define MotBtHelper_CAR_HIGH_PROBABILITY 100
#define MotBtHelper_COMPUTER_DESKTOP 260
#define MotBtHelper_COMPUTER_HANDHELD_PC_PDA 272
#define MotBtHelper_COMPUTER_LAPTOP 268
#define MotBtHelper_COMPUTER_PALM_SIZE_PC_PDA 276
#define MotBtHelper_COMPUTER_SERVER 264
#define MotBtHelper_COMPUTER_UNCATEGORIZED 256
#define MotBtHelper_COMPUTER_WEARABLE 280
#define MotBtHelper_NEUTRAL 0
#define MotBtHelper_NON_CAR_HIGH_PROBABILITY -90
#define MotBtHelper_NON_CAR_LOW_PROBABILITY -50
#define MotBtHelper_PHONE_CELLULAR 516
#define MotBtHelper_PHONE_CORDLESS 520
#define MotBtHelper_PHONE_ISDN 532
#define MotBtHelper_PHONE_MODEM_OR_GATEWAY 528
#define MotBtHelper_PHONE_SMART 524
#define MotBtHelper_PHONE_UNCATEGORIZED 512

/**
 @brief Helper class for classifying connected Bluetooth devices by probability of indicating driving
 */
@interface MotBtHelper : NSObject {
}

/**
 @brief main method for classifying driving or not by connected BT device
 @return true if with high probability the BT device indicates in_vehicle
 */
+ (boolean)estimatedAsCarBtDeviceWithBluetoothDeviceInfo:(BluetoothDeviceInfo *)bluetoothDeviceInfo;

/**
 @brief classify by major BT class
 */
+ (int)computeDrivingRelatedDeviceWithBluetoothDeviceInfo:(BluetoothDeviceInfo *)device;

+ (int)computeDrivingRelatedDeviceComputerWithInt:(int)deviceClass;

+ (int)computeDrivingRelatedDevicePhoneWithInt:(int)deviceClass;

+ (int)computeDrivingRelatedDeviceAudioVideoWithInt:(int)deviceClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void MotBtHelper_init() {}

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, NON_CAR_HIGH_PROBABILITY, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, NON_CAR_LOW_PROBABILITY, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, NEUTRAL, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, CAR_HIGH_PROBABILITY, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_UNCATEGORIZED, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_DESKTOP, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_SERVER, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_LAPTOP, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_HANDHELD_PC_PDA, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_PALM_SIZE_PC_PDA, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, COMPUTER_WEARABLE, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_UNCATEGORIZED, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_CELLULAR, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_CORDLESS, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_SMART, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_MODEM_OR_GATEWAY, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, PHONE_ISDN, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_UNCATEGORIZED, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_WEARABLE_HEADSET, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_HANDSFREE, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_MICROPHONE, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_LOUDSPEAKER, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_HEADPHONES, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_PORTABLE_AUDIO, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_CAR_AUDIO, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_SET_TOP_BOX, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_HIFI_AUDIO, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VCR, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VIDEO_CAMERA, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_CAMCORDER, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VIDEO_MONITOR, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VIDEO_CONFERENCING, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper, AUDIO_VIDEO_VIDEO_GAMING_TOY, int)

typedef MotBtHelper ComIntelWearablePlatformTimeiqPlacesModulesMotmoduleAlgsMotBtHelper;

#define MotBtHelper_Major_AUDIO_VIDEO 1024
#define MotBtHelper_Major_BITMASK 7936
#define MotBtHelper_Major_COMPUTER 256
#define MotBtHelper_Major_HEALTH 2304
#define MotBtHelper_Major_IMAGING 1536
#define MotBtHelper_Major_MISC 0
#define MotBtHelper_Major_NETWORKING 768
#define MotBtHelper_Major_PERIPHERAL 1280
#define MotBtHelper_Major_PHONE 512
#define MotBtHelper_Major_TOY 2048
#define MotBtHelper_Major_UNCATEGORIZED 7936
#define MotBtHelper_Major_WEARABLE 1792

@interface MotBtHelper_Major : NSObject {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void MotBtHelper_Major_init() {}

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, BITMASK, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, MISC, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, COMPUTER, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, PHONE, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, NETWORKING, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, AUDIO_VIDEO, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, PERIPHERAL, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, IMAGING, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, WEARABLE, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, TOY, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, HEALTH, int)

J2OBJC_STATIC_FIELD_GETTER(MotBtHelper_Major, UNCATEGORIZED, int)

#endif // _MotBtHelper_H_
