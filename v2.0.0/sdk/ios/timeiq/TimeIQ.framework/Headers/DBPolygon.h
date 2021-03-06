//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/cluster/DBPolygon.java
//

#ifndef _DBPolygon_H_
#define _DBPolygon_H_

#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface DBPolygon : NSObject < IMappable > {
 @public
  ArrayList* bbox_;
  ArrayList* points_;
}

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(ArrayList*)points
                    withJavaUtilList:(ArrayList*)bbox;

- (ArrayList*)getBbox;

- (void)setBboxWithJavaUtilList:(ArrayList*)bbox;

- (ArrayList*)getPoints;

- (void)setPointsWithJavaUtilList:(ArrayList*)points;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (void)copyAllFieldsTo:(DBPolygon *)other;

@end

__attribute__((always_inline)) inline void DBPolygon_init() {}

//J2OBJC_FIELD_SETTER(DBPolygon, bbox_, ArrayList*)
//J2OBJC_FIELD_SETTER(DBPolygon, points_, ArrayList*)

FOUNDATION_EXPORT NSString *DBPolygon_BBOX_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(DBPolygon, BBOX_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *DBPolygon_POINTS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(DBPolygon, POINTS_FIELD_, NSString *)

typedef DBPolygon ComIntelWearablePlatformTimeiqDbobjectsPlacesClusterDBPolygon;

#endif // _DBPolygon_H_
