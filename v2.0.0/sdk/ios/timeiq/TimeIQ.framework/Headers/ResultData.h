//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/common/result/ResultData.java
//

#ifndef _ResultData_H_
#define _ResultData_H_

#import "NSException+JavaAPI.h"
@class ResultCode;

#import "JB.h"
#import "Result.h"

/**
 @brief ResultData is a Result with an actual data object of the expected outcome.
 */
@interface ResultData : Result {
 @public
  /**
   @brief The data object of the specified T type
   */
  id data_;
}

/**
 @brief Constructs a ResultData object giving the ResultCode and the actual data
 @param resultCode - the result code (SUCCESS or specified error code)
 @param data - the object returned as an outcome
 */
- (instancetype)initWithResultCode:(ResultCode *)resultCode
                                withId:(id)data;

/**
 @brief Constructs a ResultData from a given ResultData object
 @param other - the ResultData to be copied from
 */
- (instancetype)initWithResultData:(ResultData *)other;

/**
 @brief Constructs a ResultData object giving the ResultCode and the actual data
 @param resultCode - the result code (SUCCESS or specified error code)
 @param message - a human readable message describing the result code
 @param data - the object returned as an outcome
 */
- (instancetype)initWithResultCode:(ResultCode *)resultCode
                          withNSString:(NSString *)message
                                withId:(id)data;

/**
 @brief Constructs a ResultData object giving an exception that would generate the appropriate ResultCode
 @param e - the exception we would like
 */
- (instancetype)initWithException:(Exception *)e;

/**
 @brief Returns the data object of the expected outcome.
 @return T - the data of type T as expected by the caller
 */
- (id)getData;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (NSString *)getInnerString;

- (void)copyAllFieldsTo:(ResultData *)other;

@end

__attribute__((always_inline)) inline void ResultData_init() {}

//J2OBJC_FIELD_SETTER(ResultData, data_, id)

typedef ResultData ComIntelWearablePlatformTimeiqApiCommonResultResultData;

#endif // _ResultData_H_
