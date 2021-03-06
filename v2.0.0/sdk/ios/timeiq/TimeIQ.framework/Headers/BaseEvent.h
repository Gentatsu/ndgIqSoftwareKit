//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/events/BaseEvent.java
//

#ifndef _BaseEvent_H_
#define _BaseEvent_H_

@class BaseEvent_BaseEventBuilder;
@class TSOEventType;
@class TSOPlace;
@class TransportType;

#import "JB.h"
#import "IEvent.h"

/**
 @brief Basic event type to be extended by other event types in the system
 */
@interface BaseEvent : NSObject < IEvent > {
 @public
  TSOPlace *location_;
  long64 arrivalTime_;
  NSString *calendarId_;
  long64 duration_;
  NSString *id__;
  NSString *subject_;
  NSString *description__;
  long64 reminderTimeBeforeTTL_;
  TSOEventType *eventType_;
  long64 generalAlarmTime_;
  boolean disableTTLAlerts_;
  boolean disableGeneralReminderAlerts_;
  boolean alertOnEventStart_;
  boolean alertOnEventEnd_;
  TransportType *preferredTransportType_;
}

- (instancetype)initWithBaseEvent_BaseEventBuilder:(BaseEvent_BaseEventBuilder *)builder;

/**
 @brief Event location
 @return TSOLocation
 */
- (TSOPlace *)getLocation;

/**
 @brief Event start time
 @return a long that represents the event arrival\start time
 */
- (long64)getArrivalTime;

/**
 @brief Returns the calendar ID in which the event is written
 @return the calendarId in which the event is written
 */
- (NSString *)getCalendarId;

/**
 @brief Event duration
 @return a long that represents the event duration
 */
- (long64)getDuration;

/**
 @brief Event one-to-one identifier
 @return a string that represents the event identifier
 */
- (NSString *)getId;

/**
 @brief Event subject
 @return a String that describes the event subject
 */
- (NSString *)getSubject;

/**
 @brief Event description
 @return a String that describes the event description
 */
- (NSString *)getDescription;

/**
 @brief The time to trigger a reminder before the Time-To-Leave to arrive on time to event
 @return a long that represents the reminder time before Time-To-Leave.
 */
- (long64)getReminderTimeBeforeTTL;

/**
 @brief The user preferred transport type to event
 @return TransportType
 */
- (TransportType *)getPreferredTransportType;

/**
 @brief Returns the event type
 @return TSOEventType
 */
- (TSOEventType *)getEventType;

/**
 @brief The time to trigger a reminder before the event starts, in case the Time-To-Leave alarm is disabled.
 @return a long that represents the reminder time
 */
- (long64)getGeneralAlarmTime;

/**
 @brief Did the user enable the Time-To-Leave alarm to pop.
 @return boolean
 */
- (boolean)isDisableTTLAlerts;

/**
 @brief Did the user enable the General reminder alarm to pop.
 @return boolean
 */
- (boolean)isDisableGeneralReminderAlerts;

/**
 @brief Did the user enable an alarm to trigger when event starts.
 @return boolean
 */
- (boolean)isAlertOnEventStart;

/**
 @brief Did the user enable an alarm to trigger when event ends.
 @return boolean
 */
- (boolean)isAlertOnEventEnd;

- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(BaseEvent *)other;

@end

__attribute__((always_inline)) inline void BaseEvent_init() {}

//J2OBJC_FIELD_SETTER(BaseEvent, location_, TSOPlace *)
//J2OBJC_FIELD_SETTER(BaseEvent, calendarId_, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent, id__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent, subject_, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent, description__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent, eventType_, TSOEventType *)
//J2OBJC_FIELD_SETTER(BaseEvent, preferredTransportType_, TransportType *)

typedef BaseEvent ComIntelWearablePlatformTimeiqApiEventsBaseEvent;

#define BaseEvent_BaseEventBuilder_DEFAULT_DURATION 900000LL
#define BaseEvent_BaseEventBuilder_DEFAULT_GENERAL_ALARM 900000LL
#define BaseEvent_BaseEventBuilder_FIFTEEN_MINUTES 900000LL

/**
 @brief Builder class for events
 @param < T > the type of event builder
 */
@interface BaseEvent_BaseEventBuilder : NSObject {
 @public
  TSOPlace *location__;
  long64 arrivalTime__;
  NSString *calendarId__;
  long64 duration__;
  NSString *id__;
  NSString *subject__;
  NSString *description__;
  long64 reminderTimeBeforeTTL__;
  TSOEventType *eventType_;
  long64 generalAlarmTime__;
  boolean disableTTLAlerts__;
  boolean disableGeneralReminderAlerts__;
  boolean alertOnEventStart__;
  boolean alertOnEventEnd__;
  TransportType *preferredTransportType__;
}

/**
 @brief Constructs a new BaseEvenBuilder from location and arrival time
 @param location the location of the event, represented as TSOPlace
 @param arrivalTime the planned arrival time in milliseconds
 */
- (instancetype)initWithTSOPlace:(TSOPlace *)location
                        withLong:(long64)arrivalTime;

/**
 @brief Sets whether or not to disable time to leave alerts and returns an updated event builder
 @param disableTTLAlerts whether or not to disable time to leave alerts
 @return event builder
 */
- (id)disableTTLAlertsWithBoolean:(boolean)disableTTLAlerts;

/**
 @brief Sets whether or not to disable general reminder alerts and returns an updated event builder
 @param disableGeneralReminderAlerts whether or not to disable general reminder alerts
 @return event builder
 */
- (id)disableGeneralReminderAlertsWithBoolean:(boolean)disableGeneralReminderAlerts;

/**
 @brief Sets whether or not to enable alert on event start and returns an updated event builder
 @param alertOnEventStart whether or not to enable alert on event start
 @return event builder
 */
- (id)alertOnEventStartWithBoolean:(boolean)alertOnEventStart;

/**
 @brief Sets whether or not to enable alert on event end and returns an updated event builder
 @param alertOnEventEnd whether or not to enable alert on event end
 @return event builder
 */
- (id)alertOnEventEndWithBoolean:(boolean)alertOnEventEnd;

/**
 @brief Sets general alert time (time before arrival time in milliseconds to alert in case there was no time to leave alert) and returns an updated event builder
 @param generalAlarmTime time before arrival time in milliseconds alert
 @return event builder
 */
- (id)generalAlarmTimeWithLong:(long64)generalAlarmTime;

/**
 @brief Sets time before time to leave to alert in milliseconds and returns an updated event builder
 @param reminderTimeBeforeTTL time before time to leave to alert in milliseconds
 @return event builder
 */
- (id)reminderTimeBeforeTTLWithLong:(long64)reminderTimeBeforeTTL;

/**
 @brief Sets subject and returns an updated event builder
 @param subject event subject
 @return event builder
 */
- (id)subjectWithNSString:(NSString *)subject;

/**
 @brief Sets the description and returns an updated event builder
 @param description event description
 @return event builder
 */
- (id)description__WithNSString:(NSString *)description_;

/**
 @brief Sets the event duration and returns an updated event builder
 @param duration event duration in milliseconds
 @return event builder
 */
- (id)durationWithLong:(long64)duration;

/**
 @brief Sets the eventId  and returns an updated event builder
 @param id eventId
 @return event builder
 */
- (id)id__WithNSString:(NSString *)id_;

/**
 @brief Sets the location and returns an updated event builder
 @param location event location
 @return event builder
 */
- (id)locationWithTSOPlace:(TSOPlace *)location;

/**
 @brief Sets calendarId and returns an updated event builder
 @param calendarId calendarId
 @return event builder
 */
- (id)calendarIdWithNSString:(NSString *)calendarId;

/**
 @brief Sets arrival time and returns an updated event builder
 @param arrivalTime arrival time
 @return event builder
 */
- (id)arrivalTimeWithLong:(long64)arrivalTime;

/**
 @brief Sets preferred transport type and returns an updated event builder
 @param preferredTransportType preferred transport type
 @return event builder
 */
- (id)preferredTransportTypeWithTransportType:(TransportType *)preferredTransportType;

/**
 @brief Returns a BaseEvent with all the previously defined parameters
 @return BaseEvent
 */
- (BaseEvent *)build;

/**
 @brief Returns a generated unique eventId
 @return eventId
 */
+ (NSString *)generateEventId;

- (void)copyAllFieldsTo:(BaseEvent_BaseEventBuilder *)other;

@end

__attribute__((always_inline)) inline void BaseEvent_BaseEventBuilder_init() {}

//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, location__, TSOPlace *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, calendarId__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, id__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, subject__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, description__, NSString *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, eventType_, TSOEventType *)
//J2OBJC_FIELD_SETTER(BaseEvent_BaseEventBuilder, preferredTransportType__, TransportType *)

J2OBJC_STATIC_FIELD_GETTER(BaseEvent_BaseEventBuilder, FIFTEEN_MINUTES, long64)

J2OBJC_STATIC_FIELD_GETTER(BaseEvent_BaseEventBuilder, DEFAULT_DURATION, long64)

J2OBJC_STATIC_FIELD_GETTER(BaseEvent_BaseEventBuilder, DEFAULT_GENERAL_ALARM, long64)

#endif // _BaseEvent_H_
