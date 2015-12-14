//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/system/SystemConfig.java
//

#ifndef _SystemConfig_H_
#define _SystemConfig_H_

#import "JB.h"

#define SystemConfig_DB_VERSION 10

/**
 @brief Created by orencoh2 on 9/2/15.
 */
@interface SystemConfig : NSObject {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void SystemConfig_init() {}

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_SENSOR_DIR_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_SENSOR_DIR_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_SENSOR_DIR_REPLAY_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_SENSOR_DIR_REPLAY_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_DB_DIR_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_DB_DIR_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_SENSOR_DIR_FEEDBACK_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_SENSOR_DIR_FEEDBACK_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_LOG_CAT_DIR_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, LOG_CAT_DIR_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_VERSION_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, VERSION_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(SystemConfig, DB_VERSION, int)

FOUNDATION_EXPORT NSString *SystemConfig_SENSOR_DUMP_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, SENSOR_DUMP_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_LOG_CAT_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, LOG_CAT_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_SENSOR_DUMP_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_SENSOR_DUMP_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_STATS_SENSORS_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_STATS_SENSORS_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_STATS_POLICY_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_STATS_POLICY_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_DEVICE_STATE_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_DEVICE_STATE_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_NETWORK_CONSUMPTION_FILE_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_NETWORK_CONSUMPTION_FILE_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_STATS_REPLAY_RES_MANAGER_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_STATS_REPLAY_RES_MANAGER_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_LOG_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_LOG_SUFFIX_, NSString *)

FOUNDATION_EXPORT NSString *SystemConfig_PLACES_USER_INPUT_LOG_SUFFIX_;
J2OBJC_STATIC_FIELD_GETTER(SystemConfig, PLACES_USER_INPUT_LOG_SUFFIX_, NSString *)

typedef SystemConfig ComIntelWearablePlatformTimeiqCommonSystemSystemConfig;

#endif // _SystemConfig_H_