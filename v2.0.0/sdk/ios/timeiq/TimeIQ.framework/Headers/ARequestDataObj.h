//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/routeprovider/audit/dataobjects/request/ARequestDataObj.java
//

#ifndef _ARequestDataObj_H_
#define _ARequestDataObj_H_

#import "JB.h"

@interface ARequestDataObj : NSObject {
 @public
  NSString *clientTimestamp_;
}

/**
 @brief Constructor
 */
- (instancetype)initWithNSString:(NSString *)clientTimestamp;

- (instancetype)init;

- (NSString *)getClientTimestamp;

- (void)setClientTimestampWithNSString:(NSString *)clientTimestamp;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (NSString *)description;

- (void)copyAllFieldsTo:(ARequestDataObj *)other;

@end

__attribute__((always_inline)) inline void ARequestDataObj_init() {}

//J2OBJC_FIELD_SETTER(ARequestDataObj, clientTimestamp_, NSString *)

typedef ARequestDataObj ComIntelWearablePlatformTimeiqRouteproviderAuditDataobjectsRequestARequestDataObj;

#endif // _ARequestDataObj_H_
