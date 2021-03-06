//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/VipEventPersistency.java
//

#ifndef _VipEventPersistency_H_
#define _VipEventPersistency_H_

@class PlaceID;
@class VisitedPlace;
@protocol IGenericDaoImpl;
#import "JBHashSet.h"
#import "JBArrayList.h"

#import "JB.h"
#import "JBComparator.h"

#define VipEventPersistency_EXPIRATION_TIME_IN_MINS 30.0
#define VipEventPersistency_MERGE_VIP_TIME_DIFF 5.0

/**
 @brief Created by ylempert on 05-Nov-15.
 */
@interface VipEventPersistency : NSObject {
 @public
  long64 lastUpdateBeforeInit_;
  ArrayList* startUpdbEventsList_;
  NSString *userId_;
  id<IGenericDaoImpl> vpdao_;
}

- (void)init__ OBJC_METHOD_FAMILY_NONE;

- (Set*)onVipEventsUpdateWithJavaUtilCollection:(Set*)startEvents
                                           withJavaUtilCollection:(Set*)endEvents
                                                         withLong:(long64)currentTimestamp;

- (Set*)filterVipStartEventsByDbEventsWithJavaUtilCollection:(Set*)vipStartEvents
                                                              withJavaUtilList:(ArrayList*)startUpdbEventsList;

- (VisitedPlace *)createSytheticEndEventWithLong:(long64)lastUpdateBeforeInit
                                withVisitedPlace:(VisitedPlace *)dbe;

- (void)addObjectToVipDaoWithVisitedPlace:(VisitedPlace *)rec;

- (void)updateVipEventsDbWithJavaUtilCollection:(Set*)eventList
                               withJavaUtilList:(ArrayList*)dbEventList;

- (void)expireEventsWithJavaUtilList:(ArrayList*)dbEventList
                    withJavaUtilList:(ArrayList*)startUpdbEventsList
                            withLong:(long64)timestamp;

- (void)updateStartUpEventsWithJavaUtilList:(ArrayList*)startUpdbEventsList
                                   withLong:(long64)timestamp
                                   withLong:(long64)lastUpdateBeforeInit;

- (void)updateDummyRecordWithJavaUtilList:(ArrayList*)dbEventList
                                 withLong:(long64)timestamp;

- (void)updateVipDaoObjectWithVisitedPlace:(VisitedPlace *)rec;

- (boolean)isObjectInDaoWithVisitedPlace:(VisitedPlace *)rec;

- (long64)getLastUpdateBeforeInitWithJavaUtilList:(ArrayList*)dbEventList;

- (VisitedPlace *)findDummyVisitedPlaceWithNSString:(NSString *)dummyId
                                   withJavaUtilList:(ArrayList*)dbEventList;

- (PlaceID *)createDummyPlaceIdWithNSString:(NSString *)timeRecordDummyPlaceId;

+ (boolean)isDummyPlaceWithVisitedPlace:(VisitedPlace *)event;

- (ArrayList*)loadEventsSortedReverseOrder;

/**
 @param placeId
 @param dbevents - assume reversed sorted
 @return 
 */
- (VisitedPlace *)findLatestDbEventWithPlaceID:(PlaceID *)placeId
                              withJavaUtilList:(ArrayList*)dbevents;

/**
 @param placeId
 @param dbevents - assume reverse sorted
 @return 
 */
- (VisitedPlace *)findLastDbEventByPlaceIdWithPlaceID:(PlaceID *)placeId
                                     withJavaUtilList:(ArrayList*)dbevents;

- (ArrayList*)loadVipDbEventsList;

- (ArrayList*)getStartUpdbEventsList;

- (instancetype)init;

- (void)copyAllFieldsTo:(VipEventPersistency *)other;

@end

__attribute__((always_inline)) inline void VipEventPersistency_init() {}

//J2OBJC_FIELD_SETTER(VipEventPersistency, startUpdbEventsList_, ArrayList*)
//J2OBJC_FIELD_SETTER(VipEventPersistency, userId_, NSString *)
//J2OBJC_FIELD_SETTER(VipEventPersistency, vpdao_, id<IGenericDaoImpl>)

FOUNDATION_EXPORT NSString *VipEventPersistency_DUMMY_PLACE_ID_;
J2OBJC_STATIC_FIELD_GETTER(VipEventPersistency, DUMMY_PLACE_ID_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(VipEventPersistency, EXPIRATION_TIME_IN_MINS, double)

J2OBJC_STATIC_FIELD_GETTER(VipEventPersistency, MERGE_VIP_TIME_DIFF, double)

typedef VipEventPersistency ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleVipEventPersistency;

@interface VipEventPersistency_$1 : NSObject < IComparator > {
}

- (int)compareWithId:(VisitedPlace *)o1
               withId:(VisitedPlace *)o2;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void VipEventPersistency_$1_init() {}

#endif // _VipEventPersistency_H_
