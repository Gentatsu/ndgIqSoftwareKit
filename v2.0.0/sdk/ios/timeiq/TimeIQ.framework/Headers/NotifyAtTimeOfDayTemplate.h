//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/extended_events/templates/NotifyAtTimeOfDayTemplate.java
//

#ifndef _NotifyAtTimeOfDayTemplate_H_
#define _NotifyAtTimeOfDayTemplate_H_

#import "JBArrayList.h"
@class eDayOfReminder;
#import "JBHashSet.h"
#import "JBHashtable.h"

#import "JB.h"
#import "AReminderTemplate.h"

/**
 @brief Created by smoradof on 7/29/2015.
 */
@interface NotifyAtTimeOfDayTemplate : AReminderTemplate {
 @public
  ArrayList *mContactsToNotify_;
  eDayOfReminder *mDayOfReminder_;
  long64 mTime_;
  NSString *mMessage_;
}

- (instancetype)init;

- (instancetype)initWithBoolean:(boolean)isActive
                   withNSString:(NSString *)uiControllerId
         withJavaUtilCollection:(Set*)contactsToNotify
                   withNSString:(NSString *)message
         withEDayOfReminderEnum:(eDayOfReminder *)dayOfReminder
                       withLong:(long64)time;

- (AReminderTemplate *)clone;

- (Set*)getContactsToNotify;

- (eDayOfReminder *)getDayOfReminder;

- (long64)getTime;

- (NSString *)getMessage;

- (void)setContactsToNotifyWithArrayList:(ArrayList *)contactsToNotify;

- (void)setDayOfReminderWithEDayOfReminderEnum:(eDayOfReminder *)dayOfReminder;

- (void)setTimeWithLong:(long64)time;

- (void)setMessageWithNSString:(NSString *)message;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSString *)description;

- (void)copyAllFieldsTo:(NotifyAtTimeOfDayTemplate *)other;

@end

__attribute__((always_inline)) inline void NotifyAtTimeOfDayTemplate_init() {}

//J2OBJC_FIELD_SETTER(NotifyAtTimeOfDayTemplate, mContactsToNotify_, ArrayList *)
//J2OBJC_FIELD_SETTER(NotifyAtTimeOfDayTemplate, mDayOfReminder_, eDayOfReminder *)
//J2OBJC_FIELD_SETTER(NotifyAtTimeOfDayTemplate, mMessage_, NSString *)

FOUNDATION_EXPORT NSString *NotifyAtTimeOfDayTemplate_CONTACTS_TO_NOTIFY_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(NotifyAtTimeOfDayTemplate, CONTACTS_TO_NOTIFY_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *NotifyAtTimeOfDayTemplate_DAY_OF_REMINDER_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(NotifyAtTimeOfDayTemplate, DAY_OF_REMINDER_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *NotifyAtTimeOfDayTemplate_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(NotifyAtTimeOfDayTemplate, TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *NotifyAtTimeOfDayTemplate_MESSAGE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(NotifyAtTimeOfDayTemplate, MESSAGE_FIELD_, NSString *)

typedef NotifyAtTimeOfDayTemplate ComIntelWearablePlatformTimeiqExtended_eventsTemplatesNotifyAtTimeOfDayTemplate;

#endif // _NotifyAtTimeOfDayTemplate_H_
