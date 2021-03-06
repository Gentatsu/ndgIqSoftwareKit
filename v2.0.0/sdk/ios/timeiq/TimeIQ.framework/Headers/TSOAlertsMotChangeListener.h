//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/TSOAlertsMotChangeListener.java
//

#ifndef _TSOAlertsMotChangeListener_H_
#define _TSOAlertsMotChangeListener_H_

@class MotType;
@class TSOAlertInner;
@class UserState;
@class UserStateChanges;
@protocol IAlertsOnMotChangeListener;
@protocol ITSOAlertsRepository;
@protocol IUserStateManagerModule;

#import "JB.h"
#import "IUserStateChangeListener.h"
#import "ITSOAlertsMotChangeListener.h"

/**
 @brief Created by mleib on 30/08/2015.
 */
@interface TSOAlertsMotChangeListener : NSObject < ITSOAlertsMotChangeListener, IUserStateChangeListener > {
 @public
  id<IAlertsOnMotChangeListener> m_alertsMotChangeListener_;
  id<ITSOAlertsRepository> m_alertRepository_;
  id<IUserStateManagerModule> m_userStateManager_;
  boolean m_isRegistered_;
}

- (instancetype)init;

- (instancetype)initWithITSOAlertsRepository:(id<ITSOAlertsRepository>)alertRepository
                 withIUserStateManagerModule:(id<IUserStateManagerModule>)userStateManager;

- (void)registerUserStateIfNeededWithIAlertsOnMotChangeListener:(id<IAlertsOnMotChangeListener>)iAlertsOnMotChangeListener;

- (void)register__WithIAlertsOnMotChangeListener:(id<IAlertsOnMotChangeListener>)iAlertsOnMotChangeListener;

- (void)unRegisterUserStateIfNeeded;

- (void)unregister;

- (void)unregisterNotSynchronized;

- (void)onStateChangedWithUserState:(UserState *)oldState
                      withUserState:(UserState *)newState
               withUserStateChanges:(UserStateChanges *)changes;

- (boolean)isMotChangeValidForReCalcWithMotType:(MotType *)oldMot
                                     withMotType:(MotType *)newMot;

- (boolean)isAlertValidForReCalcWithTSOAlertInner:(TSOAlertInner *)alertInner;

- (void)copyAllFieldsTo:(TSOAlertsMotChangeListener *)other;

@end

FOUNDATION_EXPORT BOOL TSOAlertsMotChangeListener_initialized;
J2OBJC_STATIC_INIT(TSOAlertsMotChangeListener)

//J2OBJC_FIELD_SETTER(TSOAlertsMotChangeListener, m_alertsMotChangeListener_, id<IAlertsOnMotChangeListener>)
//J2OBJC_FIELD_SETTER(TSOAlertsMotChangeListener, m_alertRepository_, id<ITSOAlertsRepository>)
//J2OBJC_FIELD_SETTER(TSOAlertsMotChangeListener, m_userStateManager_, id<IUserStateManagerModule>)

FOUNDATION_EXPORT id TSOAlertsMotChangeListener_m_lock_;
J2OBJC_STATIC_FIELD_GETTER(TSOAlertsMotChangeListener, m_lock_, id)

typedef TSOAlertsMotChangeListener ComIntelWearablePlatformTimeiqTtlAlertsTSOAlertsMotChangeListener;

#endif // _TSOAlertsMotChangeListener_H_
