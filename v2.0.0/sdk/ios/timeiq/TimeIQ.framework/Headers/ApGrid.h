//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/wifi/ApGrid.java
//

#ifndef _ApGrid_H_
#define _ApGrid_H_

@class Coord;
@class QuadTree;
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"

#define ApGrid_MaxError 2.2
#define ApGrid_MinElements 4

@interface ApGrid : NSObject {
 @public
  double distance_;
  QuadTree *qtree_;
  ArrayList* refPointList_;
  HashMap* accessPointToRefPoint_;
}

- (instancetype)initWithCoord:(Coord *)c1
                    withCoord:(Coord *)c2;

- (void)addPointWithCoord:(Coord *)p
         withJavaUtilList:(ArrayList*)aps;

- (void)filter;

- (NSString *)print;

- (ArrayList*)findRefPointsWithJavaUtilList:(ArrayList*)aps;

- (void)fillRefPointMap;

- (ArrayList*)getRefPoints;

- (NSString *)description;

- (void)copyAllFieldsTo:(ApGrid *)other;

@end

__attribute__((always_inline)) inline void ApGrid_init() {}

//J2OBJC_FIELD_SETTER(ApGrid, qtree_, QuadTree *)
//J2OBJC_FIELD_SETTER(ApGrid, refPointList_, ArrayList*)
//J2OBJC_FIELD_SETTER(ApGrid, accessPointToRefPoint_, HashMap*)

J2OBJC_STATIC_FIELD_GETTER(ApGrid, MinElements, int)

J2OBJC_STATIC_FIELD_GETTER(ApGrid, MaxError, double)

typedef ApGrid ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleWifiApGrid;

#endif // _ApGrid_H_