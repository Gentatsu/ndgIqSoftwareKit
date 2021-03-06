//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/state/SemanticSensedPlace.java
//

#ifndef _SemanticSensedPlace_H_
#define _SemanticSensedPlace_H_

@class Coord;
@class Polygon;
@class SemanticDetectedPlace;
@class TSOCoordinate;
@class WifiScan;

#import "JB.h"
#import "SensedPlace.h"

/**
 @brief Created by asamouch on 02/08/2015.
 */
@interface SemanticSensedPlace : SensedPlace {
 @public
  SemanticDetectedPlace *semanticPlace_;
  Polygon *envelope_;
}

/**
 @brief Constructor
 @param semanticPlace
 */
- (instancetype)initWithSemanticDetectedPlace:(SemanticDetectedPlace *)semanticPlace;

- (long64)distanceToEnvelopeWithCoord:(Coord *)coord;

- (long64)distanceToCenterWithCoord:(Coord *)coord;

- (TSOCoordinate *)getCenter;

- (SemanticDetectedPlace *)getSemanticPlace;

- (int)getWifSignaureNum;

- (int)calcMatchingSignatureWithWifiScan:(WifiScan *)wifiScan;

- (NSString *)getManaualId;

- (NSString *)getDetectedId;

- (void)copyAllFieldsTo:(SemanticSensedPlace *)other;

@end

__attribute__((always_inline)) inline void SemanticSensedPlace_init() {}

//J2OBJC_FIELD_SETTER(SemanticSensedPlace, semanticPlace_, SemanticDetectedPlace *)
//J2OBJC_FIELD_SETTER(SemanticSensedPlace, envelope_, Polygon *)

typedef SemanticSensedPlace ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleStateSemanticSensedPlace;

#endif // _SemanticSensedPlace_H_
