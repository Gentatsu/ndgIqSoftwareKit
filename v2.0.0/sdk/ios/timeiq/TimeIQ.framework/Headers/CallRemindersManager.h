//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/phoneBasedReminder/callReminder/CallRemindersManager.java
//

#ifndef _CallRemindersManager_H_
#define _CallRemindersManager_H_

@protocol ICallRemindersStorage;

#import "JB.h"
#import "ARemindersManager.h"
#import "ICallRemindersManager.h"

/**
 @brief Created by mleib on 04/05/2015.
 */
@interface CallRemindersManager : ARemindersManager < ICallRemindersManager > {
}

- (instancetype)init;

- (instancetype)initWithICallRemindersStorage:(id<ICallRemindersStorage>)callRemindersStorage;

@end

__attribute__((always_inline)) inline void CallRemindersManager_init() {}

typedef CallRemindersManager ComIntelWearablePlatformTimeiqRemindersPhoneBasedReminderCallReminderCallRemindersManager;

#endif // _CallRemindersManager_H_
