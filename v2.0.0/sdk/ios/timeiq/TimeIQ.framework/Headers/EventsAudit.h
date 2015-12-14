//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/audit/EventsAudit.java
//

#ifndef _EventsAudit_H_
#define _EventsAudit_H_

@class ClassFactory;
@class EventsAudit_AuditObject;
@class TSOEventAuditObj;
@protocol IAuditManager;
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "JBRunnable.h"

/**
 @brief Created by slevin on 21/06/2015.
 */
@interface EventsAudit : NSObject {
 @public
  EventsAudit_AuditObject *audit_;
  id<IAuditManager> auditManager_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithIAuditManager:(id<IAuditManager>)auditManager;

- (void)auditMessageWithNSString:(NSString *)message;

- (void)writeAudit;

- (void)sendOldAuditWithEventsAudit_AuditObject:(EventsAudit_AuditObject *)data;

+ (void)sendAuditWithTSOEventAuditObj:(TSOEventAuditObj *)tsoEventAuditObj;

- (void)sendAuditNow;

- (void)copyAllFieldsTo:(EventsAudit *)other;

@end

__attribute__((always_inline)) inline void EventsAudit_init() {}

//J2OBJC_FIELD_SETTER(EventsAudit, audit_, EventsAudit_AuditObject *)
//J2OBJC_FIELD_SETTER(EventsAudit, auditManager_, id<IAuditManager>)

typedef EventsAudit ComIntelWearablePlatformTimeiqEventsAuditEventsAudit;

@interface EventsAudit_AuditObject : NSObject < IMappable > {
 @public
  ArrayList* auditObj_;
}

- (instancetype)initWithEventsAudit:(EventsAudit *)outer$
                   withJavaUtilList:(ArrayList*)auditObj;

- (ArrayList*)getAuditObj;

- (void)addAuditObjWithNSString:(NSString *)str;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(EventsAudit_AuditObject *)other;

@end

__attribute__((always_inline)) inline void EventsAudit_AuditObject_init() {}

//J2OBJC_FIELD_SETTER(EventsAudit_AuditObject, auditObj_, ArrayList*)

@interface EventsAudit_$1 : NSObject < Runnable > {
 @public
  EventsAudit *this$0_;
}

- (void)run;

- (instancetype)initWithEventsAudit:(EventsAudit *)outer$;

@end

__attribute__((always_inline)) inline void EventsAudit_$1_init() {}

//J2OBJC_FIELD_SETTER(EventsAudit_$1, this$0_, EventsAudit *)

#endif // _EventsAudit_H_