//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/bluetooth/BluetoothDeviceInfo.java
//

#ifndef _BluetoothDeviceInfo_H_
#define _BluetoothDeviceInfo_H_

@class DeviceConnectionState;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by orencoh2 on 18/12/14.
 */
@interface BluetoothDeviceInfo : NSObject < IMappable > {
 @public
  DeviceConnectionState *m_state_;
  NSString *m_address_;
  NSString *m_deviceName_;
  int m_deviceClass_;
  int m_deviceMajorClass_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)deviceName
   withDeviceConnectionState:(DeviceConnectionState *)state
                    withNSString:(NSString *)deviceAddress
                         withInt:(int)deviceClass
                         withInt:(int)deviceMajorClass;

- (NSString *)getAddress;

- (void)setAddressWithNSString:(NSString *)m_address;

- (NSString *)getDeviceName;

- (void)setDeviceNameWithNSString:(NSString *)m_deviceName;

- (int)getDeviceClass;

- (int)getDeviceMajorClass;

- (DeviceConnectionState *)getState;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(BluetoothDeviceInfo *)other;

@end

__attribute__((always_inline)) inline void BluetoothDeviceInfo_init() {}

//J2OBJC_FIELD_SETTER(BluetoothDeviceInfo, m_state_, DeviceConnectionState *)
//J2OBJC_FIELD_SETTER(BluetoothDeviceInfo, m_address_, NSString *)
//J2OBJC_FIELD_SETTER(BluetoothDeviceInfo, m_deviceName_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceInfo_DEVICE_CONNECTION_STATE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceInfo, DEVICE_CONNECTION_STATE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceInfo_ADDRESS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceInfo, ADDRESS_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceInfo_DEVICE_NAME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceInfo, DEVICE_NAME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceInfo_DEVICE_CLASS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceInfo, DEVICE_CLASS_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceInfo_DEVICE_MAJOR_CLASS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceInfo, DEVICE_MAJOR_CLASS_FIELD_, NSString *)

typedef BluetoothDeviceInfo ComIntelWearablePlatformTimeiqSensorsDatatypesBluetoothBluetoothDeviceInfo;

#endif // _BluetoothDeviceInfo_H_
