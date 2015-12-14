//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/wifi/DBApStat.java
//

#ifndef _DBApStat_H_
#define _DBApStat_H_

#import "NSNumber+JavaAPI.h"
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IApStat.h"

@interface DBApStat : NSObject < IApStat > {
 @public
  ArrayList* rssStringArray_;
  ArrayList* bssidStringArray_;
  Integer *median_;
  double sigmaOfSquares_;
  double sigma_;
  double variance_;
  NSString *id__;
}

- (ArrayList*)getRssStringArray;

- (ArrayList*)getBssidStringArray;

- (void)setRssStringArrayWithJavaUtilList:(ArrayList*)rssStringArray;

- (void)setBssidStringArrayWithJavaUtilList:(ArrayList*)bssidStringArray;

- (Integer *)getMedian;

- (void)setMedianWithInteger:(Integer *)median;

- (double)getSigmaOfSquares;

- (void)setSigmaOfSquaresWithDouble:(double)sigmaOfSquares;

- (double)getSigma;

- (void)setSigmaWithDouble:(double)sigma;

- (double)getVariance;

- (void)setVarianceWithDouble:(double)variance;

- (NSString *)getId;

- (void)setIdWithNSString:(NSString *)id_;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (instancetype)init;

- (void)copyAllFieldsTo:(DBApStat *)other;

@end

__attribute__((always_inline)) inline void DBApStat_init() {}

//J2OBJC_FIELD_SETTER(DBApStat, rssStringArray_, ArrayList*)
//J2OBJC_FIELD_SETTER(DBApStat, bssidStringArray_, ArrayList*)
//J2OBJC_FIELD_SETTER(DBApStat, median_, Integer *)
//J2OBJC_FIELD_SETTER(DBApStat, id__, NSString *)

typedef DBApStat ComIntelWearablePlatformTimeiqDbobjectsPlacesWifiDBApStat;

#endif // _DBApStat_H_