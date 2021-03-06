//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/protocol/request/TSOPlaceGetSyncRequest.java
//

#ifndef _TSOPlaceGetSyncRequest_H_
#define _TSOPlaceGetSyncRequest_H_

@class DaoType;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface TSOPlaceGetSyncRequest : NSObject < IMappable > {
 @public
  NSString *userId_;
  long64 syncFromTimeStamp_;
  DaoType *deserializeClass_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)userId
                        withLong:(long64)syncFromTimeStamp
                 withDaoType:(DaoType *)deserializeClass;

- (long64)getSyncFromTimeStamp;

- (void)setSyncFromTimeStampWithLong:(long64)syncFromTimeStamp;

- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)userId;

- (DaoType *)getDeserializeClass;

- (void)setDeserializeClassWithDaoType:(DaoType *)deserializeClass;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (void)copyAllFieldsTo:(TSOPlaceGetSyncRequest *)other;

@end

__attribute__((always_inline)) inline void TSOPlaceGetSyncRequest_init() {}

//J2OBJC_FIELD_SETTER(TSOPlaceGetSyncRequest, userId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOPlaceGetSyncRequest, deserializeClass_, DaoType *)

FOUNDATION_EXPORT NSString *TSOPlaceGetSyncRequest_USER_ID_;
J2OBJC_STATIC_FIELD_GETTER(TSOPlaceGetSyncRequest, USER_ID_, NSString *)

FOUNDATION_EXPORT NSString *TSOPlaceGetSyncRequest_SYNC_FROM_TIME_STAMP_;
J2OBJC_STATIC_FIELD_GETTER(TSOPlaceGetSyncRequest, SYNC_FROM_TIME_STAMP_, NSString *)

FOUNDATION_EXPORT NSString *TSOPlaceGetSyncRequest_SOURCE_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(TSOPlaceGetSyncRequest, SOURCE_TYPE_, NSString *)

typedef TSOPlaceGetSyncRequest ComIntelWearablePlatformTimeiqProtocolRequestTSOPlaceGetSyncRequest;

#endif // _TSOPlaceGetSyncRequest_H_
