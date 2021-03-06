//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/repo/PlaceRepoModule.java
//

#ifndef _PlaceRepoModule_H_
#define _PlaceRepoModule_H_

@class ClassFactory;
@class DetectedPlace;
@class ExternalPlacesModule;
#import "NSNumber+JavaAPI.h"
@class ManualPlace;
@class ManualPlaceSource;
@class PlaceID;
@class Result;
@class ResultData;
@class SemanticDetectedPlace;
@class SemanticKey;
@class TSOPlace;
@protocol IAuthorizationManager;
@protocol IGenericDaoImpl;
@protocol IInternalMessageEngine;
@protocol IMessage;
@protocol IPlacesEngine;
@protocol ITSOLogger;
#import "JBHashtable.h"

#import "JB.h"
#import "IMessageListener.h"
#import "IPlaceListener.h"
#import "IPlaceRepoModule.h"

/**
 @brief Created by orencoh2 on 7/13/15.
 */
@interface PlaceRepoModule : NSObject < IPlaceRepoModule, IMessageListener > {
 @public
  id<ITSOLogger> m_logger_;
  ExternalPlacesModule *m_externalPlacesModule_;
  id<IGenericDaoImpl> m_detectedPlaceDao_;
  id<IGenericDaoImpl> m_semanticDetectionDao_;
  id<IGenericDaoImpl> m_manualPlaceDao_;
  id<IAuthorizationManager> m_authMgr_;
  id<IPlacesEngine> m_placesEngine_;
  id<IInternalMessageEngine> m_internalMsgHandler_;
  HashMap* m_semanticKeyToId_;
  HashMap* m_placeIdToSemanticKey_;
  PlaceID *m_autoDetectedHome_;
  PlaceID *m_autoDetectedWork_;
  id m_lockObject_;
  int counter_;
}

/**
 @brief Constructor
 */
- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)factory;

/**
 @brief Constructor
 @param detectedPlaceDao
 @param semanticDetectionDao
 @param manualPlaceDao
 @param authMgr
 @param placesEngine
 @param logger
 @param externalPlacesModule
 */
- (instancetype)initWithIGenericDaoImpl:(id<IGenericDaoImpl>)detectedPlaceDao
                    withIGenericDaoImpl:(id<IGenericDaoImpl>)semanticDetectionDao
                    withIGenericDaoImpl:(id<IGenericDaoImpl>)manualPlaceDao
              withIAuthorizationManager:(id<IAuthorizationManager>)authMgr
                      withIPlacesEngine:(id<IPlacesEngine>)placesEngine
                         withITSOLogger:(id<ITSOLogger>)logger
               withExternalPlacesModule:(ExternalPlacesModule *)externalPlacesModule
             withIInternalMessageEngine:(id<IInternalMessageEngine>)internalMessageEngine;

- (void)registerExternalPlacesListener;

- (void)populateMaps;

- (void)onReceiveWithIMessage:(id<IMessage>)message;

- (void)switchMapsWithJavaUtilMap:(HashMap*)updatedSemanticKeyToId
                  withJavaUtilMap:(HashMap*)updatedPlaceIdToSemanticKey
              withInteger:(Integer *)mapsStateId;

- (void)updatePlaceOnMapsWithJavaUtilMap:(HashMap*)updatedSemanticKeyToId
                         withJavaUtilMap:(HashMap*)updatedPlaceIdToSemanticKey
                         withSemanticKey:(SemanticKey *)semanticKey
                             withPlaceID:(PlaceID *)semanticPlaceId;

- (SemanticKey *)generateSemanticKeyWithTSOPlace:(TSOPlace *)place;

- (ResultData *)addPlaceWithTSOPlace:(TSOPlace *)place;

- (ResultData *)addPlaceWithTSOPlace:(TSOPlace *)place
                     withSemanticKey:(SemanticKey *)semanticKey;

- (ResultData *)addPlaceWithTSOPlace:(TSOPlace *)place
           withManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

- (ResultData *)addPlaceWithTSOPlace:(TSOPlace *)place
                     withSemanticKey:(SemanticKey *)semanticKey
           withManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

- (Result *)removePlaceWithPlaceID:(PlaceID *)placeID;

/**
 @brief Returns a list of all places either user-defined or SDK detected that has semantic information.
 Usually used for display purposes to the user using the semantic information. Returned list is also de-duplicated from places containing the same semantic tag by priority ( external place > semantic detected place )
 @return List of places
 */
- (ResultData *)getAllPlaces;

- (ResultData *)getPlaceWithPlaceID:(PlaceID *)placeId;

/**
 @brief Returns a specific place idetified by it's id
 @param id
 @return Place object or null if not found
 */
- (TSOPlace *)getPlaceInternalWithPlaceID:(PlaceID *)id_;

- (ResultData *)getPlaceIdWithSemanticKey:(SemanticKey *)semanticKey;

- (SemanticKey *)getSemanticKeyWithPlaceID:(PlaceID *)placeId;

- (PlaceID *)getSemanticPlaceIdWithPlaceID:(PlaceID *)placeId;

- (PlaceID *)getPlaceIdInternalWithSemanticKey:(SemanticKey *)semanticKey;

- (ManualPlace *)getExternalPlaceByIdWithPlaceID:(PlaceID *)id_;

- (SemanticDetectedPlace *)getSemanticDetectedPlaceByIdWithPlaceID:(PlaceID *)id_;

- (DetectedPlace *)getDetectedPlaceByIdWithPlaceID:(PlaceID *)id_;

/**
 @param id
 @return 
 */
- (TSOPlace *)convertExternalPlaceByIdWithPlaceID:(PlaceID *)id_;

/**
 @param id
 @return 
 */
- (TSOPlace *)convertSemanticPlaceByIdWithPlaceID:(PlaceID *)id_;

/**
 @param id
 @return 
 */
- (TSOPlace *)convertDetectedPlaceByIdWithPlaceID:(PlaceID *)id_;

/**
 @return 
 */
- (NSString *)getUserId;

- (TSOPlace *)convertManualPlaceWithManualPlace:(ManualPlace *)place;

/**
 @param place
 */
- (TSOPlace *)convertSemanticPlaceWithSemanticDetectedPlace:(SemanticDetectedPlace *)place;

/**
 @param place
 */
- (TSOPlace *)convertDetectedPlaceWithDetectedPlace:(DetectedPlace *)place;

- (void)copyAllFieldsTo:(PlaceRepoModule *)other;

@end

FOUNDATION_EXPORT BOOL PlaceRepoModule_initialized;
J2OBJC_STATIC_INIT(PlaceRepoModule)

//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_externalPlacesModule_, ExternalPlacesModule *)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_detectedPlaceDao_, id<IGenericDaoImpl>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_semanticDetectionDao_, id<IGenericDaoImpl>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_manualPlaceDao_, id<IGenericDaoImpl>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_authMgr_, id<IAuthorizationManager>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_placesEngine_, id<IPlacesEngine>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_internalMsgHandler_, id<IInternalMessageEngine>)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_semanticKeyToId_, HashMap*)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_placeIdToSemanticKey_, HashMap*)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_autoDetectedHome_, PlaceID *)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_autoDetectedWork_, PlaceID *)
//J2OBJC_FIELD_SETTER(PlaceRepoModule, m_lockObject_, id)

FOUNDATION_EXPORT NSString *PlaceRepoModule_TAG_;
J2OBJC_STATIC_FIELD_GETTER(PlaceRepoModule, TAG_, NSString *)

typedef PlaceRepoModule ComIntelWearablePlatformTimeiqPlacesRepoPlaceRepoModule;

@interface PlaceRepoModule_PlaceIdKey : NSObject {
 @public
  PlaceID *placeId_;
}

/**
 @brief Constructor
 @param placeId
 */
- (instancetype)initWithPlaceID:(PlaceID *)placeId;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(PlaceRepoModule_PlaceIdKey *)other;

@end

__attribute__((always_inline)) inline void PlaceRepoModule_PlaceIdKey_init() {}

//J2OBJC_FIELD_SETTER(PlaceRepoModule_PlaceIdKey, placeId_, PlaceID *)

@interface PlaceRepoModule_$1 : NSObject < IPlaceListener > {
 @public
  PlaceRepoModule *this$0_;
}

- (void)onDetectionFinished;

- (instancetype)initWithPlaceRepoModule:(PlaceRepoModule *)outer$;

@end

__attribute__((always_inline)) inline void PlaceRepoModule_$1_init() {}

//J2OBJC_FIELD_SETTER(PlaceRepoModule_$1, this$0_, PlaceRepoModule *)

#endif // _PlaceRepoModule_H_
