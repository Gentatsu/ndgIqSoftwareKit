//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/common/logger/JavaTSOLogger.java
//

#ifndef _JavaTSOLogger_H_
#define _JavaTSOLogger_H_

#import "JB.h"
#import "ATSOLogger.h"

/**
 @brief Created by smoradof on 3/15/15.
 */
@interface JavaTSOLogger : ATSOLogger {
}

- (void)printToLogWithBoolean:(boolean)isErrorLog
                 withNSString:(NSString *)tag
                 withNSString:(NSString *)log;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaTSOLogger_init() {}

typedef JavaTSOLogger ComIntelWearablePlatformTimeiqPlatformJavaCommonLoggerJavaTSOLogger;

#endif // _JavaTSOLogger_H_
