//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/mot/IMotTriggerStorage.java
//

#ifndef _IMotTriggerStorage_H_
#define _IMotTriggerStorage_H_

@class MotType;
#import "JBHashSet.h"

#import "JB.h"
#import "IBaseTriggersStorage.h"

/**
 @brief Created by smoradof on 5/5/2015.
 */
@protocol IMotTriggerStorage < IBaseTriggersStorage, NSObject >
- (Set*)getTriggersWithTypesWithMotType:(MotType *)newType
                                              withMotType:(MotType *)oldType;

@end

__attribute__((always_inline)) inline void IMotTriggerStorage_init() {}

#define ComIntelWearablePlatformTimeiqTriggersMotIMotTriggerStorage IMotTriggerStorage

#endif // _IMotTriggerStorage_H_
