//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/nextNotificationCalculator/INextNotificationCalculator.java
//

#ifndef _INextNotificationCalculator_H_
#define _INextNotificationCalculator_H_

@class ResultData;
@class TSOAlertInner;

#import "JB.h"

/**
 @brief Created by smoradof on 1/19/15.
 */
@protocol INextNotificationCalculator < NSObject >

- (ResultData *)calcNextNotificationTimeWithTSOAlertInner:(TSOAlertInner *)tsoAlertInner
                                           withResultData:(ResultData *)routeDataRes;

- (ResultData *)calcNotificationFallbackTimeWithTSOAlertInner:(TSOAlertInner *)tsoAlertInner;

@end

__attribute__((always_inline)) inline void INextNotificationCalculator_init() {}

#define ComIntelWearablePlatformTimeiqTtlAlertsNextNotificationCalculatorINextNotificationCalculator INextNotificationCalculator

#endif // _INextNotificationCalculator_H_
