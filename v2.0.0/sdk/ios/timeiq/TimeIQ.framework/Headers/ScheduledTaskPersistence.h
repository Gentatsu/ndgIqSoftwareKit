//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/timer/ScheduledTaskPersistence.java
//

#ifndef _ScheduledTaskPersistence_H_
#define _ScheduledTaskPersistence_H_

#import "NSNumber+JavaAPI.h"
#import "JBHashtable.h"

#import "JB.h"
#import "ATSOBaseDBObject.h"

/**
 @brief Created by asamouch on 17/09/2015.
 */
@interface ScheduledTaskPersistence : ATSOBaseDBObject {
 @public
  Long *timestamp_;
}

/**
 @brief Empty constructor for the stupid IMappable thingy
 */
- (instancetype)init;

/**
 @brief Constructor
 @param taskName
 @param timestamp
 */
- (instancetype)initWithNSString:(NSString *)taskName
                        withLong:(long64)timestamp;

- (Long *)getTimestamp;

- (void)setTimestampWithLong:(Long *)timestamp;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(ScheduledTaskPersistence *)other;

@end

__attribute__((always_inline)) inline void ScheduledTaskPersistence_init() {}

//J2OBJC_FIELD_SETTER(ScheduledTaskPersistence, timestamp_, Long *)

FOUNDATION_EXPORT NSString *ScheduledTaskPersistence_TIMESTAMP_;
J2OBJC_STATIC_FIELD_GETTER(ScheduledTaskPersistence, TIMESTAMP_, NSString *)

typedef ScheduledTaskPersistence ComIntelWearablePlatformTimeiqCommonTimerScheduledTaskPersistence;

#endif // _ScheduledTaskPersistence_H_
