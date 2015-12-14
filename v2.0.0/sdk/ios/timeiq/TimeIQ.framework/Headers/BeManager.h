//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/BeManager.java
//

#ifndef _BeManager_H_
#define _BeManager_H_

@class BeEvent;
@class EventContext;
@class EventIdManager;
@class EventsAudit;
@class EventsManager;
@class EventsPersistenceUtil;
@class EventsPriorityQueue;
@class TSOBeEvent;
@class TSOEventChangeType;
@class TSOEventsSync;
@protocol ITSOAlarmManager;
@protocol ITSOEvent;
@protocol ITSOLogger;
@protocol ITSOTimeUtil;
#import "JBArrayList.h"
#import "JBHashSet.h"

#import "JB.h"
#import "ITSOAlarmListener.h"
#import "IEventSyncListener.h"

#define BeManager_DAY 86400000LL
#define BeManager_ONE_MINUTE 60000LL
#define BeManager_SIX_HOURS 21600000LL

/**
 @brief Created by stzour on 11/05/2015.
 */
@interface BeManager : NSObject < ITSOAlarmListener, IEventSyncListener > {
 @public
  long64 lastEventInTimeFrameTime_;
  long64 timeFrame_;
  EventsManager *eventManager_;
  EventsPersistenceUtil *eventsPersistence_;
  EventsAudit *eventsAuditManager_;
  EventIdManager *eventIdManager_;
  id<ITSOAlarmManager> alarmManager_;
  id<ITSOTimeUtil> timerUtil_;
  id<ITSOLogger> logger_;
  TSOEventsSync *sync_;
  EventsPriorityQueue *beEvents_;
}

- (instancetype)init;

- (instancetype)initWithEventsManager:(EventsManager *)eventManager
            withEventsPersistenceUtil:(EventsPersistenceUtil *)eventsPersistence
                      withEventsAudit:(EventsAudit *)eventsAuditManager
                   withEventIdManager:(EventIdManager *)eventIdManager
                    withTSOEventsSync:(TSOEventsSync *)eventsSync
                 withITSOAlarmManager:(id<ITSOAlarmManager>)alarmManager
                     withITSOTimeUtil:(id<ITSOTimeUtil>)timerUtil
                       withITSOLogger:(id<ITSOLogger>)logger;

- (EventsPriorityQueue *)getPersistentEvents;

- (ArrayList*)getAllEvents;

- (ArrayList*)getEventsByDatesWithLong:(long64)startTime
                                    withLong:(long64)endTime;

- (boolean)addBeWithBeEvent:(BeEvent *)beEvent
            withEventContext:(EventContext *)eventContext;

- (boolean)addBesWithJavaUtilSet:(Set*)beEventSet
                 withEventContext:(EventContext *)eventContext;

- (boolean)updateBeWithBeEvent:(BeEvent *)beEvent
               withEventContext:(EventContext *)eventContext;

- (boolean)deleteBesWithJavaUtilSet:(Set*)beIds
                    withEventContext:(EventContext *)eventContext;

- (boolean)deleteBeWithNSString:(NSString *)beId
                withEventContext:(EventContext *)eventContext;

- (boolean)deleteEventWithNSString:(NSString *)eventId
                   withEventContext:(EventContext *)eventContext;

- (boolean)updateEventWithITSOEvent:(id<ITSOEvent>)updatedEvent
                    withEventContext:(EventContext *)eventContext;

- (void)onAlarmWithNSString:(NSString *)action
               withNSString:(NSString *)id_
               withNSString:(NSString *)data;

- (void)reScheduleAlarm;

- (long64)calculateNextDelay;

- (void)removeOldEvents;

- (void)updateEventsManager;

- (void)onEventUpdateWithITSOEvent:(id<ITSOEvent>)event
        withTSOEventChangeType:(TSOEventChangeType *)changeType
                  withEventContext:(EventContext *)eventContext;

- (void)onEventUpdateWithJavaUtilSet:(Set*)events
          withTSOEventChangeType:(TSOEventChangeType *)changeType
                    withEventContext:(EventContext *)eventContext;

- (TSOBeEvent *)getEventByClientIdWithNSString:(NSString *)beEventId;

- (void)copyAllFieldsTo:(BeManager *)other;

@end

__attribute__((always_inline)) inline void BeManager_init() {}

//J2OBJC_FIELD_SETTER(BeManager, eventManager_, EventsManager *)
//J2OBJC_FIELD_SETTER(BeManager, eventsPersistence_, EventsPersistenceUtil *)
//J2OBJC_FIELD_SETTER(BeManager, eventsAuditManager_, EventsAudit *)
//J2OBJC_FIELD_SETTER(BeManager, eventIdManager_, EventIdManager *)
//J2OBJC_FIELD_SETTER(BeManager, alarmManager_, id<ITSOAlarmManager>)
//J2OBJC_FIELD_SETTER(BeManager, timerUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(BeManager, logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(BeManager, sync_, TSOEventsSync *)
//J2OBJC_FIELD_SETTER(BeManager, beEvents_, EventsPriorityQueue *)

J2OBJC_STATIC_FIELD_GETTER(BeManager, ONE_MINUTE, long64)

J2OBJC_STATIC_FIELD_GETTER(BeManager, SIX_HOURS, long64)

J2OBJC_STATIC_FIELD_GETTER(BeManager, DAY, long64)

FOUNDATION_EXPORT NSString *BeManager_TAG_;
J2OBJC_STATIC_FIELD_GETTER(BeManager, TAG_, NSString *)

FOUNDATION_EXPORT NSString *BeManager_ALARM_ID_;
J2OBJC_STATIC_FIELD_GETTER(BeManager, ALARM_ID_, NSString *)

typedef BeManager ComIntelWearablePlatformTimeiqEventsBeManager;

#endif // _BeManager_H_