//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/android/common/logger/ProxyTSOLogger.java
//

#ifndef _ProxyTSOLogger_H_
#define _ProxyTSOLogger_H_

#import "JB.h"
#import "ATSOLogger.h"

/**
 @brief Created by orencoh2 on 5/7/15.
 */
@interface ProxyTSOLogger : ATSOLogger {
}

- (void)printToLogWithBoolean:(boolean)isErrorLog
                 withNSString:(NSString *)tag
                 withNSString:(NSString *)log;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ProxyTSOLogger_init() {}

typedef ProxyTSOLogger ComIntelWearablePlatformTimeiqPlatformAndroidCommonLoggerProxyTSOLogger;

#endif // _ProxyTSOLogger_H_
