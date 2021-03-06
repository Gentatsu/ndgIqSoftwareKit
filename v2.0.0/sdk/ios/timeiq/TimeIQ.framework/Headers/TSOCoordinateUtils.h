//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/utils/geo/TSOCoordinateUtils.java
//

#ifndef _TSOCoordinateUtils_H_
#define _TSOCoordinateUtils_H_

#import "NSNumber+JavaAPI.h"
@class TSOCoordinate;

#import "JB.h"

#define TSOCoordinateUtils_EARTH_RADIUS_IN_METERS 6371000.0
#define TSOCoordinateUtils_PI 3.141592653589793

/**
 @brief Created by mleib on 27/01/2015.
 */
@interface TSOCoordinateUtils : NSObject {
}

+ (NSString *)distanceToStringWithLong:(long64)distanceInMeters;

/**
 @return the Haversine distance or null if one of the inputs is null
 */
+ (JBDouble *)getHaversineDistanceInMetersWithTSOCoordinate:(TSOCoordinate *)coordinate1
                                                withTSOCoordinate:(TSOCoordinate *)coordinate2;

+ (double)getHaversineDistanceInMetersWithDouble:(double)radianLat1
                                       withDouble:(double)radianLon1
                                       withDouble:(double)radianLat2
                                       withDouble:(double)radianLon2;

+ (double)getHaversineDistanceInMetersWithDouble:(double)radius
                                       withDouble:(double)radianLat1
                                       withDouble:(double)radianLon1
                                       withDouble:(double)radianLat2
                                       withDouble:(double)radianLon2;

+ (double)toRadiansWithDouble:(double)angDeg;

+ (double)toDegreesWithDouble:(double)angRad;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void TSOCoordinateUtils_init() {}

J2OBJC_STATIC_FIELD_GETTER(TSOCoordinateUtils, PI, double)

J2OBJC_STATIC_FIELD_GETTER(TSOCoordinateUtils, EARTH_RADIUS_IN_METERS, double)

typedef TSOCoordinateUtils ComIntelWearablePlatformTimeiqCommonUtilsGeoTSOCoordinateUtils;

#endif // _TSOCoordinateUtils_H_
