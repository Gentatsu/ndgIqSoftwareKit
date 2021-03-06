//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/cluster/ClusterStatistics.java
//

#ifndef _ClusterStatistics_H_
#define _ClusterStatistics_H_

@class DetectedPlace;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface ClusterStatistics : NSObject < IMappable > {
 @public
  double avgAccuracy_;
  double minDimension_;
  double maxDimension_;
  double avgSpeed_;
  int uniqueDays_;
  int numPoints_;
}

- (instancetype)init;

- (instancetype)initWithDetectedPlace:(DetectedPlace *)cluster;

- (double)getAvgAccuracy;

- (int)getNumPoints;

- (double)getMinDimension;

- (double)getMaxDimension;

- (int)getUniqueDays;

- (double)getAvgSpeed;

- (void)setNumPointsWithInt:(int)numPoints;

- (void)setMaxDimensionWithDouble:(double)maxDimension;

- (void)setMinDimensionWithDouble:(double)minDimension;

- (void)setAvgAccuracyWithDouble:(double)avgAccuracy;

- (void)setAvgSpeedWithDouble:(double)avgSpeed;

- (void)setUniqueDaysWithInt:(int)uniqueDays;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(ClusterStatistics *)other;

@end

__attribute__((always_inline)) inline void ClusterStatistics_init() {}

FOUNDATION_EXPORT NSString *ClusterStatistics_AVG_ACCURACY_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, AVG_ACCURACY_, NSString *)

FOUNDATION_EXPORT NSString *ClusterStatistics_MIN_DIMENSION_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, MIN_DIMENSION_, NSString *)

FOUNDATION_EXPORT NSString *ClusterStatistics_MAX_DIMENSION_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, MAX_DIMENSION_, NSString *)

FOUNDATION_EXPORT NSString *ClusterStatistics_AVG_SPEED_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, AVG_SPEED_, NSString *)

FOUNDATION_EXPORT NSString *ClusterStatistics_UNIQUE_DAYS_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, UNIQUE_DAYS_, NSString *)

FOUNDATION_EXPORT NSString *ClusterStatistics_NUM_POINTS_;
J2OBJC_STATIC_FIELD_GETTER(ClusterStatistics, NUM_POINTS_, NSString *)

typedef ClusterStatistics ComIntelWearablePlatformTimeiqDbobjectsPlacesClusterClusterStatistics;

#endif // _ClusterStatistics_H_
