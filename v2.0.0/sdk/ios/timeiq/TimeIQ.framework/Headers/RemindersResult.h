//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/reminders/RemindersResult.java
//

#ifndef _RemindersResult_H_
#define _RemindersResult_H_

#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by smoradof on 6/8/2015.
 */
@interface RemindersResult : NSObject {
 @public
  Set* m_result_;
}

- (instancetype)initWithCollection:(Set*)result;

/**
 @return A list of IReminder that is sent when reminders are triggered
 */
- (Set*)getResult;

- (void)copyAllFieldsTo:(RemindersResult *)other;

@end

__attribute__((always_inline)) inline void RemindersResult_init() {}

//J2OBJC_FIELD_SETTER(RemindersResult, m_result_, Set*)

typedef RemindersResult ComIntelWearablePlatformTimeiqApiRemindersRemindersResult;

#endif // _RemindersResult_H_