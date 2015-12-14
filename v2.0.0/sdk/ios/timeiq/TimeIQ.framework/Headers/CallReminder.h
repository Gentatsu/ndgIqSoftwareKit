//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/reminders/phoneBasedReminder/callReminder/CallReminder.java
//

#ifndef _CallReminder_H_
#define _CallReminder_H_

@class ContactInfo;
@class ReminderStatus;
@class ReminderType;
@protocol ITrigger;

#import "JB.h"
#import "BasePhoneReminder.h"

/**
 @brief This class represents a reminder to call a certain contact
 */
@interface CallReminder : BasePhoneReminder {
}

/**
 @brief Create the CallReminder using a builder
 @param aPhoneBasedReminderBuilder the builder that has the input parameters for the reminder
 @throws ReminderBuildException will be thrown when input is missing or invalid (see ReminderBuildExceptionType for reasons)
 */
- (instancetype)initWithBasePhoneReminder_BasePhoneBasedReminderBuilder:(BasePhoneReminder_BasePhoneBasedReminderBuilder *)aPhoneBasedReminderBuilder;

/**
 @brief Create the CallReminder using parameters (the builder should be used in most cases)
 @param id the unique ID of the reminder
 @param reminderType the type of the reminder ( ReminderType#DO for DoReminder , ReminderType#CALL for CallReminder or ReminderType#NOTIFY for NotificationReminder )
 @param trigger the trigger that will make the reminder notify
 @param contactInfo the contact that is associated with this reminder
 @param status the status of the reminder
 @param triggeredTime the time that the reminder was triggered, or -1 if not triggered yet
 @param addedTime the time that the reminder was added, or -1 if not added yet
 @throws ReminderBuildException will be thrown when input is missing or invalid (see ReminderBuildExceptionType for reasons)
 */
- (instancetype)initWithNSString:(NSString *)id_
            withReminderType:(ReminderType *)reminderType
                    withITrigger:(id<ITrigger>)trigger
                 withContactInfo:(ContactInfo *)contactInfo
          withReminderStatus:(ReminderStatus *)status
                        withLong:(long64)triggeredTime
                        withLong:(long64)addedTime;

@end

__attribute__((always_inline)) inline void CallReminder_init() {}

typedef CallReminder ComIntelWearablePlatformTimeiqApiRemindersPhoneBasedReminderCallReminderCallReminder;

/**
 @brief Builder class used to create the CallReminder
 */
@interface CallReminder_CallReminderBuilder : BasePhoneReminder_BasePhoneBasedReminderBuilder {
}

/**
 @brief Create a builder for creating the CallReminder
 @param trigger the trigger that will make the reminder notify
 @param contactInfo the contact that is associated with this reminder
 */
- (instancetype)initWithITrigger:(id<ITrigger>)trigger
                 withContactInfo:(ContactInfo *)contactInfo;

/**
 @brief Create the CallReminder
 @return the CallReminder
 @throws ReminderBuildException will be thrown when input is missing or invalid (see ReminderBuildExceptionType for reasons)
 */
- (CallReminder *)build;

@end

__attribute__((always_inline)) inline void CallReminder_CallReminderBuilder_init() {}

#endif // _CallReminder_H_