//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/userstate/UserStateData.java
//

#ifndef _UserStateData_H_
#define _UserStateData_H_

#import "JB.h"

/**
 @brief Created by gilsharo on 5/11/2015.
 */
@interface UserStateData : NSObject {
 @public
  id m_data_;
  long64 m_timeStamp_;
}

- (instancetype)initWithId:(id)data
                  withLong:(long64)timeStamp;

- (id)getData;

- (long64)getTimeStamp;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)copyAllFieldsTo:(UserStateData *)other;

@end

__attribute__((always_inline)) inline void UserStateData_init() {}

//J2OBJC_FIELD_SETTER(UserStateData, m_data_, id)

typedef UserStateData ComIntelWearablePlatformTimeiqApiUserstateUserStateData;

#endif // _UserStateData_H_
