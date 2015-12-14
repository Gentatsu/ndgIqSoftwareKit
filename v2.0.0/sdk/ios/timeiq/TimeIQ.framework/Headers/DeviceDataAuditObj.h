//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/android/common/system/DeviceDataAuditObj.java
//

#ifndef _DeviceDataAuditObj_H_
#define _DeviceDataAuditObj_H_

#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by slevin on 09/11/2015.
 */
@interface DeviceDataAuditObj : NSObject < IMappable > {
 @public
  int deviceSDKVersion_;
  NSString *manufacturer_;
  NSString *deviceModel_;
  NSString *osVersion_;
  NSString *osVersionIncremental_;
  NSString *sdkVersion_;
  NSString *sdkFullBuildDate_;
  NSString *sdkShortBuildDate_;
  NSString *brand_;
  NSString *product_;
  NSString *deviceDesign_;
  long64 systemUptimeMillis_;
  NSString *networkOperatorName_;
}

- (instancetype)initWithInt:(int)deviceSDKVersion
               withNSString:(NSString *)manufacturer
               withNSString:(NSString *)deviceModel
               withNSString:(NSString *)osVersion
               withNSString:(NSString *)osVersionIncremental
               withNSString:(NSString *)sdkVersion
               withNSString:(NSString *)sdkFullBuildDate
               withNSString:(NSString *)sdkShortBuildDate
               withNSString:(NSString *)brand
               withNSString:(NSString *)product
               withNSString:(NSString *)deviceDesign
                   withLong:(long64)systemUptimeMillis
               withNSString:(NSString *)networkOperatorName;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(DeviceDataAuditObj *)other;

@end

__attribute__((always_inline)) inline void DeviceDataAuditObj_init() {}

//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, manufacturer_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, deviceModel_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, osVersion_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, osVersionIncremental_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, sdkVersion_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, sdkFullBuildDate_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, sdkShortBuildDate_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, brand_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, product_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, deviceDesign_, NSString *)
//J2OBJC_FIELD_SETTER(DeviceDataAuditObj, networkOperatorName_, NSString *)

typedef DeviceDataAuditObj ComIntelWearablePlatformTimeiqPlatformAndroidCommonSystemDeviceDataAuditObj;

#endif // _DeviceDataAuditObj_H_