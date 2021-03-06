//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/mot/MotTriggersPersistentStorage.java
//

#ifndef _MotTriggersPersistentStorage_H_
#define _MotTriggersPersistentStorage_H_

#import "JBClass.h"
@class MotType;
#import "JBHashSet.h"

#import "JB.h"
#import "ABaseTriggersPersistentStorage.h"
#import "IMotTriggerStorage.h"

/**
 @brief Created by Yaron Abramovich on 25.5.15.
 */
@interface MotTriggersPersistentStorage : ABaseTriggersPersistentStorage < IMotTriggerStorage > {
}

- (Class )getClassType;

- (Set*)getTriggersWithTypesWithMotType:(MotType *)newType
                                              withMotType:(MotType *)oldType;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void MotTriggersPersistentStorage_init() {}

typedef MotTriggersPersistentStorage ComIntelWearablePlatformTimeiqTriggersMotMotTriggersPersistentStorage;

#endif // _MotTriggersPersistentStorage_H_
