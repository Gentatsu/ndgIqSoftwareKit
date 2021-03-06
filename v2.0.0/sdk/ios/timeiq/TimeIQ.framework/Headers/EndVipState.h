//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/state/EndVipState.java
//

#ifndef _EndVipState_H_
#define _EndVipState_H_

@class IPC;
@class PlaceID;
@class Visit;
@protocol IState;

#import "JB.h"
#import "AbstractState.h"

#define EndVipState_WIFI_END_INFLUENCE_IN_MINS 5LL

@interface EndVipState : AbstractState {
}

- (instancetype)initWithPlaceID:(PlaceID *)id_
                       withLong:(long64)creationTime;

- (id<IState>)updateIpcWithIPC:(IPC *)ipc
                          withLong:(long64)timestamp
                       withIPC:(IPC *)wifiIpc
                          withLong:(long64)wifiTimestamp;

- (id<IState>)updateVisitStartWithVisit:(Visit *)visit
                               withLong:(long64)timestamp;

- (id<IState>)updateVisitEndWithVisit:(Visit *)visit
                             withLong:(long64)timestamp;

- (id<IState>)updateTimerWithLong:(long64)timestamp;

@end

__attribute__((always_inline)) inline void EndVipState_init() {}

J2OBJC_STATIC_FIELD_GETTER(EndVipState, WIFI_END_INFLUENCE_IN_MINS, long64)

typedef EndVipState ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleStateEndVipState;

#endif // _EndVipState_H_
