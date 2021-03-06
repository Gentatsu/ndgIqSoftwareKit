//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/geometry/Polygon.java
//

#ifndef _Polygon_H_
#define _Polygon_H_

@class Coord;
@class DBPolygon;
@class XY;
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 */
@interface Polygon : NSObject < IMappable > {
 @public
  ArrayList* bbox_;
  ArrayList* points_;
}

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(ArrayList*)points;

- (instancetype)initWithDBPolygon:(DBPolygon *)dbPoly;

/**
 @brief Check if the the given point is inside of the polygon.
 <br>
 @param p The point to check
 @return <code>True</code> if the point is inside the polygon, otherwise return <code>False</code>
 */
- (boolean)isPointInPolygin2WithCoord:(Coord *)p;

- (boolean)isPointInPolyginWithCoord:(Coord *)p;

- (double)lineInterceptWithCoord:(Coord *)p
                       withDouble:(double)a;

- (double)lineAngleWithCoord:(Coord *)p1
                    withCoord:(Coord *)p2;

- (Coord *)intersectionPointWithDouble:(double)a1
                            withDouble:(double)b1
                            withDouble:(double)a2
                            withDouble:(double)b2
                            withDouble:(double)x1
                            withDouble:(double)x2;

- (boolean)inBoundingBoxWithCoord:(Coord *)point;

- (ArrayList*)getPoints;

- (ArrayList*)getProjectedPointsWithDouble:(double)longref;

- (ArrayList*)getProjectedEdgesWithDouble:(double)longref;

- (void)dump;

- (double)area;

+ (double)areaWithJavaUtilList:(ArrayList*)points;

- (double)overlappingAreaWithPolygon:(Polygon *)clippingPolygon;

- (ArrayList*)clipWithPolygon:(Polygon *)clippingPolygon;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (ArrayList*)getBbox;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (double)distanceFromEnvelopeWithCoord:(Coord *)coord;

- (double)squareDistanceWithXY:(XY *)e1
                         withXY:(XY *)e2;

- (double)crossWithXY:(XY *)p
                withXY:(XY *)e1
                withXY:(XY *)e2;

- (double)distToEdgeWithXY:(XY *)p
                     withXY:(XY *)e1
                     withXY:(XY *)e2;

- (DBPolygon *)toDBPolygon;

- (void)copyAllFieldsTo:(Polygon *)other;

@end

__attribute__((always_inline)) inline void Polygon_init() {}

//J2OBJC_FIELD_SETTER(Polygon, bbox_, ArrayList*)
//J2OBJC_FIELD_SETTER(Polygon, points_, ArrayList*)

typedef Polygon ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleGeometryPolygon;

#endif // _Polygon_H_
