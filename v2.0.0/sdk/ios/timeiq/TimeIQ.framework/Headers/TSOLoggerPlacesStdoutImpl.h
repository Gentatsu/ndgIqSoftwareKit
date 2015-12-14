//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/sensors/logger/TSOLoggerPlacesStdoutImpl.java
//

#ifndef _TSOLoggerPlacesStdoutImpl_H_
#define _TSOLoggerPlacesStdoutImpl_H_

#import "NSArray+JavaAPI.h"
#import "NSException+JavaAPI.h"
@class LOG_LEVEL;

#import "JB.h"
#import "ITSOLoggerPlaces.h"

/**
 @brief Created by eleuchte on 01/01/2015.
 */
@interface TSOLoggerPlacesStdoutImpl : NSObject < ITSOLoggerPlaces > {
}

- (instancetype)init;

- (void)addToLogWithLOG_LEVEL:(LOG_LEVEL *)level
                     withNSString:(NSString *)tag
                     withNSString:(NSString *)log;

- (void)addToLogWithLOG_LEVEL:(LOG_LEVEL *)level
                     withNSString:(NSString *)tag
                     withNSString:(NSString *)log
            withThrowable:(Throwable *)ex;

- (void)printStringCollectionToLogWithLOG_LEVEL:(LOG_LEVEL *)level
                                       withNSString:(NSString *)tag
                                       withNSString:(NSString *)prefix
                                  withNSStringArray:(Array *)stringArray;

- (void)resetLog;

@end

FOUNDATION_EXPORT BOOL TSOLoggerPlacesStdoutImpl_initialized;
J2OBJC_STATIC_INIT(TSOLoggerPlacesStdoutImpl)

FOUNDATION_EXPORT NSString *TSOLoggerPlacesStdoutImpl_TAG_;
J2OBJC_STATIC_FIELD_GETTER(TSOLoggerPlacesStdoutImpl, TAG_, NSString *)

typedef TSOLoggerPlacesStdoutImpl ComIntelWearablePlatformTimeiqPlatformJavaSensorsLoggerTSOLoggerPlacesStdoutImpl;

#endif // _TSOLoggerPlacesStdoutImpl_H_