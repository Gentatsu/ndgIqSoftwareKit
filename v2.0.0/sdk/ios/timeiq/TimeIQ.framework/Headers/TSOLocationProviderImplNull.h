//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/sensors/locationprovider/TSOLocationProviderImplNull.java
//

#ifndef _TSOLocationProviderImplNull_H_
#define _TSOLocationProviderImplNull_H_

@class ResultData;

#import "JB.h"
#import "TSOLocationProviderImplBase.h"

/**
 @brief Created by orencoh2 on 11/5/15.
 */
@interface TSOLocationProviderImplNull : TSOLocationProviderImplBase {
}

- (instancetype)init;

- (ResultData *)getPlatformLastKnownLocation;

@end

FOUNDATION_EXPORT BOOL TSOLocationProviderImplNull_initialized;
J2OBJC_STATIC_INIT(TSOLocationProviderImplNull)

FOUNDATION_EXPORT NSString *TSOLocationProviderImplNull_TAG_;
J2OBJC_STATIC_FIELD_GETTER(TSOLocationProviderImplNull, TAG_, NSString *)

typedef TSOLocationProviderImplNull ComIntelWearablePlatformTimeiqPlatformJavaSensorsLocationproviderTSOLocationProviderImplNull;

#endif // _TSOLocationProviderImplNull_H_
