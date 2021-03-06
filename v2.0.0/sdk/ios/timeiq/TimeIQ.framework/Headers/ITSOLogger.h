//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/logger/ITSOLogger.java
//

#ifndef _ITSOLogger_H_
#define _ITSOLogger_H_

#import "NSArray+JavaAPI.h"
#import "NSException+JavaAPI.h"
@protocol ITSOLoggerListener;
@protocol JavaLangIterable;

#import "JB.h"

/**
 @brief Created by smoradof on 1/20/15.
 */
@protocol ITSOLogger < NSObject >

- (void)addToLogWithBoolean:(boolean)isErrorLog
               withNSString:(NSString *)tag
               withNSString:(NSString *)log;

- (void)addToLogWithBoolean:(boolean)isErrorLog
               withNSString:(NSString *)tag
               withNSString:(NSString *)log
      withException:(Exception *)e;

- (void)printStringCollectionToLogWithBoolean:(boolean)isErrorLog
                                 withNSString:(NSString *)tag
                                 withNSString:(NSString *)prefix
                            withNSStringArray:(Array *)stringArray;

- (void)printStringCollectionToLogWithBoolean:(boolean)isErrorLog
                                 withNSString:(NSString *)tag
                                 withNSString:(NSString *)prefix
                         withJavaLangIterable:(Array*)stringCollection;

- (void)setLogListenerWithITSOLoggerListener:(id<ITSOLoggerListener>)logListener;

@end

__attribute__((always_inline)) inline void ITSOLogger_init() {}

#define ComIntelWearablePlatformTimeiqCommonLoggerITSOLogger ITSOLogger

#endif // _ITSOLogger_H_
