//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/locationprovider/LocationProviderDebug.java
//

#ifndef _LocationProviderDebug_H_
#define _LocationProviderDebug_H_

@class ResultCode;
@class ResultData;
@class TSOCoordinate;

#import "JB.h"
#import "ILocationProvider.h"

/**
 @brief Created by glis on 14/10/2015.
 */
@interface LocationProviderDebug : NSObject < ILocationProvider > {
 @public
  boolean m_isFakeLocationActive_;
  ResultData *m_positionResultMoc_;
  id<ILocationProvider> locationProvider_;
}

- (instancetype)init;

- (instancetype)initWithILocationProvider:(id<ILocationProvider>)locationProvider;

- (void)setIsFakeLocationActiveWithBoolean:(boolean)isFakeLocationActive;

- (void)setCurrentUserLocationWithResultCode:(ResultCode *)resultCode
                               withTSOCoordinate:(TSOCoordinate *)userLocationMoc;

- (void)setCurrentUserLocationWithTSOCoordinate:(TSOCoordinate *)userLocationMoc;

- (void)setCurrentUserLocationErrorWithResultCode:(ResultCode *)resultCode;

- (ResultData *)getLastKnownLocation;

- (ResultData *)getUserLocationWithLong:(long64)maximumAgeInMillis;

- (ResultData *)getUserLocationWithDouble:(double)minimumAccuracy
                                 withLong:(long64)maximumAgeInMillis;

- (void)copyAllFieldsTo:(LocationProviderDebug *)other;

@end

__attribute__((always_inline)) inline void LocationProviderDebug_init() {}

//J2OBJC_FIELD_SETTER(LocationProviderDebug, m_positionResultMoc_, ResultData *)
//J2OBJC_FIELD_SETTER(LocationProviderDebug, locationProvider_, id<ILocationProvider>)

typedef LocationProviderDebug ComIntelWearablePlatformTimeiqPlacesLocationproviderLocationProviderDebug;

#endif // _LocationProviderDebug_H_