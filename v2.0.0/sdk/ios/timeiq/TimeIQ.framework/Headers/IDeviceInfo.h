//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/system/device/IDeviceInfo.java
//

#ifndef _IDeviceInfo_H_
#define _IDeviceInfo_H_

#import "JB.h"

/**
 @brief Created by slevin on 09/11/2015.
 */
@protocol IDeviceInfo < NSObject >

/**
 @brief The user-visible SDK version of the framework;
 */
- (int)getDeviceSDKVersion;

/**
 @brief The manufacturer of the product/hardware.
 */
- (NSString *)getManufacturer;

/**
 @brief The end-user-visible name for the end product.
 */
- (NSString *)getDeviceModel;

- (NSString *)getOSVersion;

/**
 @brief The internal value used by the underlying source control to represent this build.
 E.g., a perforce changelist number or a git hash.
 */
- (NSString *)getOSVersionIncremental;

/**
 @brief TimeIQ SDK Version
 */
- (NSString *)getSDKVersion;

/**
 @brief TimeIQ SDK full Build Date
 */
- (NSString *)getSDKFullBuildDate;

/**
 @brief TimeIQ SDK short Build Date
 */
- (NSString *)getSDKShortBuildDate;

/**
 @brief The consumer-visible brand with which the product/hardware will be associated, if any.
 */
- (NSString *)getBrand;

/**
 @brief The name of the overall product.
 */
- (NSString *)getProduct;

/**
 @brief The name of the industrial design.
 */
- (NSString *)getDeviceDesign;

/**
 @brief Returns milliseconds since boot, not counting time spent in deep sleep.
 */
- (long64)getSystemUptimeMillis;

/**
 @brief Get carrier name (Network Operator Name)
 */
- (NSString *)getNetworkOperatorName;

@end

__attribute__((always_inline)) inline void IDeviceInfo_init() {}

#define ComIntelWearablePlatformTimeiqCommonSystemDeviceIDeviceInfo IDeviceInfo

#endif // _IDeviceInfo_H_
