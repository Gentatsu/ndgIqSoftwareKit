//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/EventsEngineModuleDebug.java
//

#ifndef _EventsEngineModuleDebug_H_
#define _EventsEngineModuleDebug_H_

@class BeManager;
@class CalendarEventsManager;
@class EventIdManager;
@class EventsAudit;
@class EventsManager;
@class EventsPersistenceUtil;
@class ResultData;
@class TSOAlertUpdatedResult;
@class TSOEventsSync;
@class TSOPosition;
@protocol ICalendarDetailsProviderModule;
@protocol IExternalMessageEngine;
@protocol IInternalMessageEngine;
@protocol ISdkDefaultPrefs;
@protocol ITSOLogger;
@protocol ITSOTimeUtil;
@protocol ITriggersManager;

#import "JB.h"
#import "EventsEngineModule.h"

/**
 @brief Created by eskoran on 31/05/2015.
 */
@interface EventsEngineModuleDebug : EventsEngineModule {
}

- (instancetype)init;

- (instancetype)initWithBeManager:(BeManager *)beManager
        withCalendarEventsManager:(CalendarEventsManager *)calendarEventsManager
                withEventsManager:(EventsManager *)eventsManager
                withTSOEventsSync:(TSOEventsSync *)tsoEventsSync
                  withEventsAudit:(EventsAudit *)eventsAudit
               withEventIdManager:(EventIdManager *)eventIdManager
        withEventsPersistenceUtil:(EventsPersistenceUtil *)eventsPersistenceUtil
withICalendarDetailsProviderModule:(id<ICalendarDetailsProviderModule>)calendarDetailsProvider
             withITriggersManager:(id<ITriggersManager>)triggersManager
       withIExternalMessageEngine:(id<IExternalMessageEngine>)messageEngine
       withIInternalMessageEngine:(id<IInternalMessageEngine>)internalMessageEngine
             withISdkDefaultPrefs:(id<ISdkDefaultPrefs>)sdkDefaultPrefs
                 withITSOTimeUtil:(id<ITSOTimeUtil>)timerUtil
                   withITSOLogger:(id<ITSOLogger>)tsoLogger;

- (TSOAlertUpdatedResult *)getLastKnownTTLForBeEventWithNSString:(NSString *)beEventId;

- (ResultData *)getCurrentTTLForBeEventWithNSString:(NSString *)beEventId
                                    withTSOPosition:(TSOPosition *)userPosition;

- (ResultData *)getCurrentETAForBeEventWithNSString:(NSString *)beEventId
                                    withTSOPosition:(TSOPosition *)userPosition;

- (TSOAlertUpdatedResult *)getLastKnownTTLForCalendarEventWithNSString:(NSString *)calEventId;

- (ResultData *)getCurrentTTLForCalendarEventWithNSString:(NSString *)calEventId
                                          withTSOPosition:(TSOPosition *)userPosition;

- (ResultData *)getCurrentETAForCalendarEventWithNSString:(NSString *)calEventId
                                          withTSOPosition:(TSOPosition *)userPosition;

- (void)deleteAll;

@end

__attribute__((always_inline)) inline void EventsEngineModuleDebug_init() {}

typedef EventsEngineModuleDebug ComIntelWearablePlatformTimeiqEventsEventsEngineModuleDebug;

#endif // _EventsEngineModuleDebug_H_
