//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/EventContext.java
//

#ifndef _EventContext_H_
#define _EventContext_H_

@class Result;
@protocol ITSOLogger;
#import "JBFuture.h"
#import "JBArrayList.h"

#import "JB.h"

/**
 @brief Created by kyablonk on 30/08/2015.
 */
@interface EventContext : NSObject {
 @public
  ArrayList* subTasksFutures_;
  ArrayList* subTasksResults_;
}

- (void)addFutureWithFuture:(id<Future>)future;

- (void)addResultWithResult:(Result *)result;

- (ArrayList*)getSubTasksResults;

- (Result *)waitForSubTasks;

- (instancetype)init;

- (void)copyAllFieldsTo:(EventContext *)other;

@end

FOUNDATION_EXPORT BOOL EventContext_initialized;
J2OBJC_STATIC_INIT(EventContext)

//J2OBJC_FIELD_SETTER(EventContext, subTasksFutures_, ArrayList*)
//J2OBJC_FIELD_SETTER(EventContext, subTasksResults_, ArrayList*)

FOUNDATION_EXPORT NSString *EventContext_ERROR_MSG_;
J2OBJC_STATIC_FIELD_GETTER(EventContext, ERROR_MSG_, NSString *)

FOUNDATION_EXPORT id<ITSOLogger> EventContext_LOGGER_;
J2OBJC_STATIC_FIELD_GETTER(EventContext, LOGGER_, id<ITSOLogger>)
//J2OBJC_STATIC_FIELD_SETTER(EventContext, LOGGER_, id<ITSOLogger>)

FOUNDATION_EXPORT NSString *EventContext_TAG_;
J2OBJC_STATIC_FIELD_GETTER(EventContext, TAG_, NSString *)

typedef EventContext ComIntelWearablePlatformTimeiqEventsEventContext;

@interface EventContext_FutureWrapper : NSObject {
 @public
  id<Future> future_;
}

- (instancetype)initWithEventContext:(EventContext *)outer$
        withFuture:(id<Future>)future;

- (id)get;

- (void)copyAllFieldsTo:(EventContext_FutureWrapper *)other;

@end

__attribute__((always_inline)) inline void EventContext_FutureWrapper_init() {}

//J2OBJC_FIELD_SETTER(EventContext_FutureWrapper, future_, id<Future>)

#endif // _EventContext_H_