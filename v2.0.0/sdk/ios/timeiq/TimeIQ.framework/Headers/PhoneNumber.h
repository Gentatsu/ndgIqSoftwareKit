//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/common/contact/PhoneNumber.java
//

#ifndef _PhoneNumber_H_
#define _PhoneNumber_H_

#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief This class represents a person's phone number
 */
@interface PhoneNumber : NSObject < IMappable > {
 @public
  NSString *m_fullPhoneNumber_;
  NSString *m_cleanPhoneNumber_;
}

/**
 @brief For internal use
 */
- (instancetype)init;

/**
 @brief Create a PhoneNumber that represents a person's phone number
 @param fullPhoneNumber a string representing the contact's phone number
 */
- (instancetype)initWithNSString:(NSString *)fullPhoneNumber;

/**
 @brief Create a PhoneNumber that represents a person's phone number
 @param fullPhoneNumber a string representing the contact's phone number
 @param cleanPhoneNumber a clean string representing the contact's phone number
 */
- (instancetype)initWithNSString:(NSString *)fullPhoneNumber
                    withNSString:(NSString *)cleanPhoneNumber;

- (PhoneNumber *)clone;

- (void)initCleanPhoneNumber OBJC_METHOD_FAMILY_NONE;

/**
 @brief Get a string representing the contact's phone number
 @return a string representing the contact's phone number
 */
- (NSString *)getFullPhoneNumber;

/**
 @brief Get a clean string representing the contact's phone number
 @return a clean string representing the contact's phone number
 */
- (NSString *)getCleanPhoneNumber;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

/**
 @brief For internal use
 */
- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

/**
 @brief For internal use
 */
- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(PhoneNumber *)other;

@end

__attribute__((always_inline)) inline void PhoneNumber_init() {}

//J2OBJC_FIELD_SETTER(PhoneNumber, m_fullPhoneNumber_, NSString *)
//J2OBJC_FIELD_SETTER(PhoneNumber, m_cleanPhoneNumber_, NSString *)

FOUNDATION_EXPORT NSString *PhoneNumber_FULL_PHONE_NUMBER_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PhoneNumber, FULL_PHONE_NUMBER_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *PhoneNumber_CLEAN_PHONE_NUMBER_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PhoneNumber, CLEAN_PHONE_NUMBER_FIELD_, NSString *)

typedef PhoneNumber ComIntelWearablePlatformTimeiqApiCommonContactPhoneNumber;

#endif // _PhoneNumber_H_
