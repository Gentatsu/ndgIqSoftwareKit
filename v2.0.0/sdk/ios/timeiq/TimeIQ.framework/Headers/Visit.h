//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitsmodule/visit/Visit.java
//

#ifndef _Visit_H_
#define _Visit_H_

@class DBVisit;
@class TSOCoordinate;
@class WifiSignature;
@protocol ILocationData;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "ATSOSyncDbObject.h"
#import "IVisitEntry.h"

@interface Visit : ATSOSyncDbObject < IVisitEntry, IMappable > {
 @public
  WifiSignature *signature_;
  WifiSignature *ssidSignature_;
  long64 visitEnd_;
  long64 visitStart_;
  id<ILocationData> fuseLocation_;
  long64 lastSampleTime_;
  double sumlong_;
  double sumlat_;
  int fuseSamplesNum_;
  TSOCoordinate *center_;
  double radiusInMeters_;
}

- (instancetype)initWithILocationData:(id<ILocationData>)fuseLocation
                             withLong:(long64)visitStart
                         withNSString:(NSString *)userId;

- (instancetype)initWithVisit:(Visit *)visit;

- (instancetype)initWithDBVisit:(DBVisit *)dbVisit;

- (instancetype)initWithNSString:(NSString *)userId;

- (instancetype)init;

- (void)updateFuseWithILocationData:(id<ILocationData>)fuseLocation;

- (void)updateCenterAndRadiusWithTSOCoordinate:(TSOCoordinate *)visitCenter
                                    withDouble:(double)visitRadiusInMeters;

- (TSOCoordinate *)getCenterCoordinate;

- (float)getAccuracy;

- (long64)getStartTime;

- (long64)getEndTime;

- (long64)getLastSampleTime;

- (WifiSignature *)getSignature;

- (void)setSignatureWithWifiSignature:(WifiSignature *)signature;

- (WifiSignature *)getSSIDSignature;

- (void)setSSIDSignatureWithWifiSignature:(WifiSignature *)signature;

- (void)setEndVisitWithLong:(long64)visitEndTime;

- (void)setLocationWithILocationData:(id<ILocationData>)fuseLocation;

- (NSString *)getUserId;

- (long64)getModificationTimeStamp;

- (void)setUserIdWithNSString:(NSString *)userId;

- (double)getRadius;

- (id<ILocationData>)getFuseLocation;

- (double)getSumlong;

- (double)getSumlat;

- (int)getFuseSamplesNum;

- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)setLastSampleTimeWithLong:(long64)lastSampleTime;

- (void)copyAllFieldsTo:(Visit *)other;

@end

FOUNDATION_EXPORT BOOL Visit_initialized;
J2OBJC_STATIC_INIT(Visit)

//J2OBJC_FIELD_SETTER(Visit, signature_, WifiSignature *)
//J2OBJC_FIELD_SETTER(Visit, ssidSignature_, WifiSignature *)
//J2OBJC_FIELD_SETTER(Visit, fuseLocation_, id<ILocationData>)
//J2OBJC_FIELD_SETTER(Visit, center_, TSOCoordinate *)

FOUNDATION_EXPORT NSString *Visit_TAG_;
J2OBJC_STATIC_FIELD_GETTER(Visit, TAG_, NSString *)

typedef Visit ComIntelWearablePlatformTimeiqPlacesModulesVisitsmoduleVisitVisit;

#endif // _Visit_H_
