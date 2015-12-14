//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/TriggersListenerList.java
//

#ifndef _TriggersListenerList_H_
#define _TriggersListenerList_H_

@protocol ITriggerInner;
#import "JBHashSet.h"

#import "JB.h"

/**
 @brief this class is for IOS compatible code conventions:
 */
@interface TriggersListenerList : NSObject {
 @public
  Set* list_;
  NSString *m_listenerId_;
}

- (instancetype)initWithNSString:(NSString *)listenerId;

- (NSString *)getListenerId;

- (void)addWithITriggerInner:(id<ITriggerInner>)trigger;

- (Set*)getList;

- (void)copyAllFieldsTo:(TriggersListenerList *)other;

@end

__attribute__((always_inline)) inline void TriggersListenerList_init() {}

//J2OBJC_FIELD_SETTER(TriggersListenerList, list_, Set*)
//J2OBJC_FIELD_SETTER(TriggersListenerList, m_listenerId_, NSString *)

typedef TriggersListenerList ComIntelWearablePlatformTimeiqTriggersTriggersListenerList;

#endif // _TriggersListenerList_H_