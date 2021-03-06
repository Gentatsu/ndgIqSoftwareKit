//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/BaseReminderInner.java
//

#ifndef _BaseReminderInner_H_
#define _BaseReminderInner_H_

@class BaseReminder_BaseReminderBuilder;
#import "NSNumber+JavaAPI.h"
@class ReminderEndReason;
@class ReminderStatus;
@class ReminderStatusInner;
@class ReminderType;
@protocol ITSOTimeUtil;
@protocol ITrigger;
#import "JBHashtable.h"

#import "JB.h"
#import "ATSOBaseDBObject.h"
#import "IReminderInner.h"

/**
 @brief Created by mleib on 26/04/2015.
 */
@interface BaseReminderInner : ATSOBaseDBObject < IReminderInner > {
 @public
  id<ITSOTimeUtil> m_tsoTimeUtil_;
  id<ITrigger> m_trigger_;
  NSString *m_userId_;
  ReminderType *m_type_;
  NSString *m_triggerId_;
  ReminderStatusInner *m_reminderStatus_;
  long64 m_creationTime_;
  Long *m_registerTime_;
  Long *m_triggerTime_;
  Long *m_endTime_;
  ReminderEndReason *m_reminderEndReason_;
  Long *m_snoozeTime_;
}

- (instancetype)init;

- (instancetype)initWithITSOTimeUtil:(id<ITSOTimeUtil>)tsoTimeUtil;

- (instancetype)initWithNSString:(NSString *)id_
                    withITrigger:(id<ITrigger>)trigger
            withReminderType:(ReminderType *)type
                withITSOTimeUtil:(id<ITSOTimeUtil>)tsoTimeUtil;

- (id<ITrigger>)getTrigger;

- (NSString *)getId;

- (ReminderType *)getType;

- (ReminderStatusInner *)getStatus;

- (long64)getCreationTime;

- (void)setRegistered;

- (Long *)getRegisterTime;

- (void)setTriggered;

- (Long *)getTriggeredTime;

- (void)setEndedWithReminderEndReason:(ReminderEndReason *)endReason;

- (Long *)getEndTime;

- (ReminderEndReason *)getEndReason;

- (void)snoozeWithITrigger:(id<ITrigger>)trigger;

- (boolean)isActive;

- (ReminderStatus *)getStatusOuter;

- (NSString *)getTriggerId;

- (void)setTriggerWithITrigger:(id<ITrigger>)trigger;

/**
 @brief do not compare the m_trigger !!
 @param o
 @return 
 */
- (boolean)isEqual:(id)o;

/**
 @brief do not hash the m_trigger
 @return 
 */
- (NSUInteger)hash;

- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)s;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)setBaseDataWithBaseReminder_BaseReminderBuilder:(BaseReminder_BaseReminderBuilder *)baseReminderBuilder;

- (void)copyAllFieldsTo:(BaseReminderInner *)other;

@end

__attribute__((always_inline)) inline void BaseReminderInner_init() {}

//J2OBJC_FIELD_SETTER(BaseReminderInner, m_tsoTimeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_trigger_, id<ITrigger>)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_userId_, NSString *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_type_, ReminderType *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_triggerId_, NSString *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_reminderStatus_, ReminderStatusInner *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_registerTime_, Long *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_triggerTime_, Long *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_endTime_, Long *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_reminderEndReason_, ReminderEndReason *)
//J2OBJC_FIELD_SETTER(BaseReminderInner, m_snoozeTime_, Long *)

FOUNDATION_EXPORT NSString *BaseReminderInner_USER_ID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, USER_ID_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_TYPE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, TYPE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_TRIGGER_ID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, TRIGGER_ID_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_REMINDER_STATUS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, REMINDER_STATUS_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_CREATION_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, CREATION_TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_REGISTER_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, REGISTER_TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_TRIGGER_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, TRIGGER_TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_END_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, END_TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_REMINDER_END_REASON_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, REMINDER_END_REASON_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BaseReminderInner_SNOOZE_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BaseReminderInner, SNOOZE_TIME_FIELD_, NSString *)

typedef BaseReminderInner ComIntelWearablePlatformTimeiqRemindersBaseReminderInner;

#endif // _BaseReminderInner_H_
