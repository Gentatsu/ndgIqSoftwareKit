//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/audit/AuditSettings.java
//

#ifndef _AuditSettings_H_
#define _AuditSettings_H_

#import "JB.h"

#define AuditSettings_DEFAULT_SCHEDULED_TIME 21600000LL

/**
 @brief Created by ibeider on 28/01/2015.
 */
@interface AuditSettings : NSObject {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void AuditSettings_init() {}

J2OBJC_STATIC_FIELD_GETTER(AuditSettings, DEFAULT_SCHEDULED_TIME, long64)

FOUNDATION_EXPORT NSString *AuditSettings_AUDIT_VERSION_;
J2OBJC_STATIC_FIELD_GETTER(AuditSettings, AUDIT_VERSION_, NSString *)

typedef AuditSettings ComIntelWearablePlatformTimeiqCommonAuditAuditSettings;

#endif // _AuditSettings_H_