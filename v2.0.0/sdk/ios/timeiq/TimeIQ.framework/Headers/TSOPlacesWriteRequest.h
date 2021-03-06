//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/protocol/request/TSOPlacesWriteRequest.java
//

#ifndef _TSOPlacesWriteRequest_H_
#define _TSOPlacesWriteRequest_H_

#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface TSOPlacesWriteRequest : NSObject < IMappable > {
 @public
  NSString *userId_;
  ArrayList* syncObjects_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)userId
                withJavaUtilList:(ArrayList*)syncObjects;

- (ArrayList*)getSyncObjects;

- (void)setSyncObjectsWithJavaUtilList:(ArrayList*)syncObjects;

- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)userId;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(TSOPlacesWriteRequest *)other;

@end

__attribute__((always_inline)) inline void TSOPlacesWriteRequest_init() {}

//J2OBJC_FIELD_SETTER(TSOPlacesWriteRequest, userId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOPlacesWriteRequest, syncObjects_, ArrayList*)

FOUNDATION_EXPORT NSString *TSOPlacesWriteRequest_JSON_OBJECTS_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(TSOPlacesWriteRequest, JSON_OBJECTS_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *TSOPlacesWriteRequest_USER_ID_;
J2OBJC_STATIC_FIELD_GETTER(TSOPlacesWriteRequest, USER_ID_, NSString *)

typedef TSOPlacesWriteRequest ComIntelWearablePlatformTimeiqProtocolRequestTSOPlacesWriteRequest;

#endif // _TSOPlacesWriteRequest_H_
