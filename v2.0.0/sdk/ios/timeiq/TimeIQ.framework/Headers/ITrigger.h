//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/triggers/ITrigger.java
//

#ifndef _ITrigger_H_
#define _ITrigger_H_

@class TriggerStatus;
@class TriggerType;

#import "JB.h"

/**
 @brief This interface describes the main functionality that can be used on a trigger
 */
@protocol ITrigger < NSObject >

/**
 @return the type of the trigger ( TriggerType#CHARGE for ChargeTrigger , TriggerType#PLACE for PlaceTrigger , TriggerType#TIME for TimeTrigger or TriggerType#MOT for MotTrigger )
 */
- (TriggerType *)getTriggerType;

/**
 @return the unique ID of the trigger
 */
- (NSString *)getId;

/**
 @return tag that can be used for extra data in the trigger (can be null)
 */
- (NSString *)getTag;

/**
 @return the status of the trigger
 */
- (TriggerStatus *)getStatus;

/**
 @return the time that the trigger was triggered, or -1 if it did not trigger yet
 */
- (long64)getTriggeredTime;

@end

__attribute__((always_inline)) inline void ITrigger_init() {}

#define ComIntelWearablePlatformTimeiqApiTriggersITrigger ITrigger

#endif // _ITrigger_H_
