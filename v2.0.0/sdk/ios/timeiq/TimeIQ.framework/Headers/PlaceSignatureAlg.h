//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/wifi/PlaceSignatureAlg.java
//

#ifndef _PlaceSignatureAlg_H_
#define _PlaceSignatureAlg_H_

@class ApStat;
@class Cluster;
@class Coord;
@class RefPoint;
#import "JBArrayList.h"

#import "JB.h"
#import "JBComparator.h"

#define PlaceSignatureAlg_BETWEEN_LOCATIOND_IN_PLACE_TIME 300000LL
#define PlaceSignatureAlg_CUT_WIFI_NUM 20
#define PlaceSignatureAlg_IN_AREA_LATLON_EPS 0.003
#define PlaceSignatureAlg_TIME_NEAR_LOCATION 60000LL

/**
 @brief Created by ylempert on 08-Oct-15.
 */
@interface PlaceSignatureAlg : NSObject {
}

- (void)calcPlaceSignatureWithJavaUtilList:(ArrayList*)wifiData
                          withJavaUtilList:(ArrayList*)fuseData
                               withCluster:(Cluster *)cluster;

- (int)collectWifInRangeWithRefPoint:(RefPoint *)rf
                     withJavaUtilList:(ArrayList*)wifiData
                             withLong:(long64)t1
                             withLong:(long64)t2
                              withInt:(int)wi;

- (boolean)isInAreasWithCoord:(Coord *)center
                    withDouble:(double)latitude
                    withDouble:(double)longitude
                    withDouble:(double)eps;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void PlaceSignatureAlg_init() {}

J2OBJC_STATIC_FIELD_GETTER(PlaceSignatureAlg, IN_AREA_LATLON_EPS, double)

J2OBJC_STATIC_FIELD_GETTER(PlaceSignatureAlg, BETWEEN_LOCATIOND_IN_PLACE_TIME, long64)

J2OBJC_STATIC_FIELD_GETTER(PlaceSignatureAlg, TIME_NEAR_LOCATION, long64)

J2OBJC_STATIC_FIELD_GETTER(PlaceSignatureAlg, CUT_WIFI_NUM, int)

typedef PlaceSignatureAlg ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleWifiPlaceSignatureAlg;

@interface PlaceSignatureAlg_$1 : NSObject < IComparator > {
}

- (int)compareWithId:(ApStat *)o1
               withId:(ApStat *)o2;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void PlaceSignatureAlg_$1_init() {}

#endif // _PlaceSignatureAlg_H_
