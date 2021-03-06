//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/audit/TSOEventAuditObjectFactory.java
//

#ifndef _TSOEventAuditObjectFactory_H_
#define _TSOEventAuditObjectFactory_H_

@class EventTriggerType;
#import "NSNumber+JavaAPI.h"
@class MessageImpl;
@class TSOBeEvent;
@class TSOCalendarEvent;
@class TSOEventAuditObj;
@class TSOEventChangeType;
@class UpdateAlertResultType;
@class UserActionType;
@protocol ITSOEvent;

#import "JB.h"

/**
 @brief Created by slevin on 30/08/2015.
 */
@interface TSOEventAuditObjectFactory : NSObject {
}

+ (TSOEventAuditObj *)getTSOTriggeredEventAuditObjWithITSOEvent:(id<ITSOEvent>)tsoEvent
                                       withEventTriggerType:(EventTriggerType *)eventTriggerType
                                                withMessageImpl:(MessageImpl *)message
                                               withLong:(Long *)actualNotificationTime;

+ (TSOEventAuditObj *)getTSOEventAlertAuditObjWithITSOEvent:(id<ITSOEvent>)tsoEvent
                                               withNSString:(NSString *)tsoAlertId
                                           withLong:(Long *)calculatedNotificationTime
                              withUpdateAlertResultType:(UpdateAlertResultType *)ttlResultType;

+ (TSOEventAuditObj *)getTSOBeEventAuditObjWithNSString:(NSString *)beId
                                         withTSOBeEvent:(TSOBeEvent *)tsoBeEvent
                             withTSOEventChangeType:(TSOEventChangeType *)eventChangeType;

+ (TSOEventAuditObj *)getTSOCalEventAuditObjWithNSString:(NSString *)meetingId
                                    withTSOCalendarEvent:(TSOCalendarEvent *)tsoCalendarEvent
                              withTSOEventChangeType:(TSOEventChangeType *)eventChangeType;

+ (TSOEventAuditObj *)getTSOEventAuditObjWithITSOEvent:(id<ITSOEvent>)tsoEvent
                            withTSOEventChangeType:(TSOEventChangeType *)eventChangeType;

+ (TSOEventAuditObj *)getUserActionAuditObjWithNSString:(NSString *)eventId
                                 withUserActionType:(UserActionType *)userAction
                                               withLong:(long64)delayInMillis;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void TSOEventAuditObjectFactory_init() {}

typedef TSOEventAuditObjectFactory ComIntelWearablePlatformTimeiqEventsAuditTSOEventAuditObjectFactory;

#endif // _TSOEventAuditObjectFactory_H_
