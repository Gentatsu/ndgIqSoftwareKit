//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/network/http/HttpProviderSettings.java
//

#ifndef _HttpProviderSettings_H_
#define _HttpProviderSettings_H_

#import "JB.h"

/**
 @brief Created by ibeider on 01/02/2015.
 */
@interface HttpProviderSettings : NSObject {
}

+ (void)updateSettings;

+ (void)setToCachedServerWithBoolean:(boolean)toChached;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL HttpProviderSettings_initialized;
J2OBJC_STATIC_INIT(HttpProviderSettings)

FOUNDATION_EXPORT NSString *HttpProviderSettings_TSO_CLOUD_SERVER_CONTEXT_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, TSO_CLOUD_SERVER_CONTEXT_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_TSO_CLOUD_DAEMON_SERVER_CONTEXT_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, TSO_CLOUD_DAEMON_SERVER_CONTEXT_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudServerURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudServerURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudServerURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSODaemonServerURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSODaemonServerURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSODaemonServerURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudAuditURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudAuditURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudAuditURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_getDBObjectURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_getDBObjectURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_getDBObjectURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_clientToMasterSyncURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_clientToMasterSyncURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_clientToMasterSyncURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_resetAuditURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_resetAuditURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_resetAuditURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_syncSlaveDBSURLS_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_syncSlaveDBSURLS_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_syncSlaveDBSURLS_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudResolverURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudResolverURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudResolverURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudRouteTTLURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudRouteTTLURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudRouteTTLURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudRouteETAURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudRouteETAURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudRouteETAURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudCheckTokenURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudCheckTokenURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudCheckTokenURL_, NSString *)

FOUNDATION_EXPORT NSString *HttpProviderSettings_m_TSOCloudDaemonPlaceDetectionURL_;
J2OBJC_STATIC_FIELD_GETTER(HttpProviderSettings, m_TSOCloudDaemonPlaceDetectionURL_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(HttpProviderSettings, m_TSOCloudDaemonPlaceDetectionURL_, NSString *)

typedef HttpProviderSettings ComIntelWearablePlatformTimeiqCommonNetworkHttpHttpProviderSettings;

#endif // _HttpProviderSettings_H_
