//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/routeprovider/audit/dataobjects/response/AResponseDataObj.java
//

#ifndef _AResponseDataObj_H_
#define _AResponseDataObj_H_

@class RouteErrorDataObj;

#import "JB.h"

@interface AResponseDataObj : NSObject {
 @public
  RouteErrorDataObj *error_;
}

/**
 @brief Constructor
 */
- (instancetype)initWithRouteErrorDataObj:(RouteErrorDataObj *)error;

- (instancetype)init;

- (RouteErrorDataObj *)getError;

- (void)setErrorWithRouteErrorDataObj:(RouteErrorDataObj *)error;

- (NSString *)description;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (void)copyAllFieldsTo:(AResponseDataObj *)other;

@end

__attribute__((always_inline)) inline void AResponseDataObj_init() {}

//J2OBJC_FIELD_SETTER(AResponseDataObj, error_, RouteErrorDataObj *)

typedef AResponseDataObj ComIntelWearablePlatformTimeiqRouteproviderAuditDataobjectsResponseAResponseDataObj;

#endif // _AResponseDataObj_H_
