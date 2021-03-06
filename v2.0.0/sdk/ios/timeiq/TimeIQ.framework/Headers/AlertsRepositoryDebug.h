//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/repository/AlertsRepositoryDebug.java
//

#ifndef _AlertsRepositoryDebug_H_
#define _AlertsRepositoryDebug_H_

@class TSOAlert;
@class TSOAlertInner;

#import "JB.h"
#import "AlertsRepository.h"

#define AlertsRepositoryDebug_RETRY_INTERVAL_MAXIMUM 10000
#define AlertsRepositoryDebug_RETRY_INTERVAL_MINIMUM 2000

/**
 @brief Created by mleib on 14/04/2015.
 */
@interface AlertsRepositoryDebug : AlertsRepository {
}

- (TSOAlertInner *)getAlertDataWithTSOAlert:(TSOAlert *)tsoAlert;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void AlertsRepositoryDebug_init() {}

J2OBJC_STATIC_FIELD_GETTER(AlertsRepositoryDebug, RETRY_INTERVAL_MINIMUM, int)

J2OBJC_STATIC_FIELD_GETTER(AlertsRepositoryDebug, RETRY_INTERVAL_MAXIMUM, int)

typedef AlertsRepositoryDebug ComIntelWearablePlatformTimeiqTtlAlertsRepositoryAlertsRepositoryDebug;

#endif // _AlertsRepositoryDebug_H_
