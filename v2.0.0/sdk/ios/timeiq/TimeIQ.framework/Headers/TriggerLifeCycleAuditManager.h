//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/TriggerLifeCycleAuditManager.java
//

#ifndef _TriggerLifeCycleAuditManager_H_
#define _TriggerLifeCycleAuditManager_H_

@class eAuditLabels;
@protocol IAuditManager;
@protocol ITriggerInner;
@protocol ITriggersManagerInner;

#import "JB.h"
#import "ITriggerLifeCycleAuditManager.h"
#import "ITriggerLifeCycleListener.h"

/**
 @brief Created by mleib on 26/07/2015.
 */
@interface TriggerLifeCycleAuditManager : NSObject < ITriggerLifeCycleAuditManager, ITriggerLifeCycleListener > {
 @public
  id<ITriggersManagerInner> m_triggersManagerInner_;
  id<IAuditManager> m_auditManager_;
}

- (instancetype)init;

- (instancetype)initWithIAuditManager:(id<IAuditManager>)auditManager;

- (void)startAuditWithITriggersManagerInner:(id<ITriggersManagerInner>)triggersManagerInner;

- (void)stopAudit;

- (void)onTriggerRegisteredWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerTriggeredWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerEndedWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerRemovedWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)auditTriggerLifeCycleWithITriggerInner:(id<ITriggerInner>)trigger
                                   withBoolean:(boolean)isRemoved;

- (eAuditLabels *)getAuditLabelWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)copyAllFieldsTo:(TriggerLifeCycleAuditManager *)other;

@end

__attribute__((always_inline)) inline void TriggerLifeCycleAuditManager_init() {}

//J2OBJC_FIELD_SETTER(TriggerLifeCycleAuditManager, m_triggersManagerInner_, id<ITriggersManagerInner>)
//J2OBJC_FIELD_SETTER(TriggerLifeCycleAuditManager, m_auditManager_, id<IAuditManager>)

typedef TriggerLifeCycleAuditManager ComIntelWearablePlatformTimeiqTriggersTriggerLifeCycleAuditManager;

#endif // _TriggerLifeCycleAuditManager_H_
