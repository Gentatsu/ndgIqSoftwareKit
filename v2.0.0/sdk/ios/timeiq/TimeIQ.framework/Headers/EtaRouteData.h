//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/route/EtaRouteData.java
//

#ifndef _EtaRouteData_H_
#define _EtaRouteData_H_

@class MotType;
@class RouteDataType;
#import "JBArrayList.h"

#import "JB.h"
#import "ARouteData.h"

/**
 @brief The result of ISegmentedRouteProvider#getTTL(TSOCoordinate,TSOCoordinate,long,MotType,MotType) <BR> It contains a list of RouteSegment ordered by time, from the time to leave until the arrival time.
 */
@interface EtaRouteData : ARouteData {
 @public
  long64 m_departureTime_;
}

/**
 @param routeSegments list of RouteSegment ordered by time, from the time to leave until the arrival time
 @param departureTime the arrival time to the destination
 */
- (instancetype)initWithRouteDataType:(RouteDataType *)routeDataType
                               withDouble:(double)aerialDistance
                         withJavaUtilList:(ArrayList*)routeSegments
                                 withLong:(long64)departureTime
                          withMotType:(MotType *)mainMotType;

/**
 @brief Get the arrival time to the destination
 @return the arrival time to the destination
 */
- (long64)getArrivalTime;

/**
 @brief Get the departure time from the origin
 @return the departure time from the origin
 */
- (long64)getDepartureTime;

- (boolean)isTtlRoute;

- (void)copyAllFieldsTo:(EtaRouteData *)other;

@end

__attribute__((always_inline)) inline void EtaRouteData_init() {}

typedef EtaRouteData ComIntelWearablePlatformTimeiqApiRouteEtaRouteData;

#endif // _EtaRouteData_H_
