//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/routeprovider/audit/dataobjects/response/TTLRequestResponseDataObj.java
//

#ifndef _TTLRequestResponseDataObj_H_
#define _TTLRequestResponseDataObj_H_

@class TTLRequestDataObj;
@class TTLResponseDataObj;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface TTLRequestResponseDataObj : NSObject < IMappable > {
 @public
  TTLRequestDataObj *ttlRequestDataObj_;
  TTLResponseDataObj *ttlResponseDataObj_;
}

/**
 @brief Constructor
 */
- (instancetype)initWithTTLRequestDataObj:(TTLRequestDataObj *)ttlRequestDataObj
                   withTTLResponseDataObj:(TTLResponseDataObj *)ttlResponseDataObj;

- (instancetype)init;

- (void)setTtlResponseDataObjWithTTLResponseDataObj:(TTLResponseDataObj *)ttlResponseDataObj;

- (void)setTtlRequestDataObjWithTTLRequestDataObj:(TTLRequestDataObj *)ttlRequestDataObj;

- (TTLRequestDataObj *)getTtlRequestDataObj;

- (TTLResponseDataObj *)getTtlResponseDataObj;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (NSString *)description;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(TTLRequestResponseDataObj *)other;

@end

__attribute__((always_inline)) inline void TTLRequestResponseDataObj_init() {}

//J2OBJC_FIELD_SETTER(TTLRequestResponseDataObj, ttlRequestDataObj_, TTLRequestDataObj *)
//J2OBJC_FIELD_SETTER(TTLRequestResponseDataObj, ttlResponseDataObj_, TTLResponseDataObj *)

typedef TTLRequestResponseDataObj ComIntelWearablePlatformTimeiqRouteproviderAuditDataobjectsResponseTTLRequestResponseDataObj;

#endif // _TTLRequestResponseDataObj_H_
