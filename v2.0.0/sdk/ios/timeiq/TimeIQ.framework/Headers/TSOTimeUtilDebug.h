//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/utils/time/TSOTimeUtilDebug.java
//

#ifndef _TSOTimeUtilDebug_H_
#define _TSOTimeUtilDebug_H_

#import "JB.h"
#import "TSOTimeUtil.h"

/**
 @brief Created by smoradof on 1/20/15.
 */
@interface TSOTimeUtilDebug : TSOTimeUtil {
 @public
  long64 m_fakeTime_;
  long64 m_offset_;
  boolean m_useFakeTime_;
  boolean m_useOffset_;
}

- (void)setCurrentTimeMillisWithLong:(long64)currentTimeMillis;

- (void)setCurrentTimeMillisByOffsetFromRealWithLong:(long64)currentTimeMillis;

- (void)setUseFakeTimeWithBoolean:(boolean)useFakeTime;

- (void)resetTimeToReal;

- (void)turnOffOffset;

- (long64)getCurrentTimeMillis;

- (instancetype)init;

- (void)copyAllFieldsTo:(TSOTimeUtilDebug *)other;

@end

__attribute__((always_inline)) inline void TSOTimeUtilDebug_init() {}

typedef TSOTimeUtilDebug ComIntelWearablePlatformTimeiqCommonUtilsTimeTSOTimeUtilDebug;

#endif // _TSOTimeUtilDebug_H_
