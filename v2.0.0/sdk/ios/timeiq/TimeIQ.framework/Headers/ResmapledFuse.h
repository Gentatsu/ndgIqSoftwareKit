//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/detection/ResmapledFuse.java
//

#ifndef _ResmapledFuse_H_
#define _ResmapledFuse_H_

@class FuseSensorData;
#import "JBHashSet.h"
#import "JBArrayList.h"

#import "JB.h"

#define ResmapledFuse_HighSampleRateMinutes 1

@interface ResmapledFuse : NSObject {
}

+ (ArrayList*)applyPolicyChangeWithJavaUtilList:(ArrayList*)fuseSensorDataHistory
                               withJavaUtilCollection:(Set*)policyHistory;

+ (void)sampleInBetweenWithFuseSensorData:(FuseSensorData *)fuse1
                       withFuseSensorData:(FuseSensorData *)fuse2
                         withJavaUtilList:(ArrayList*)resampledFuse;

+ (int)uniqueFuseDataDaysWithJavaUtilList:(ArrayList*)fuseData;

+ (ArrayList*)cutUniqeDaysWithJavaUtilList:(ArrayList*)fuseData
                                         withInt:(int)maxUniqueDays;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ResmapledFuse_init() {}

J2OBJC_STATIC_FIELD_GETTER(ResmapledFuse, HighSampleRateMinutes, int)

typedef ResmapledFuse ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleDetectionResmapledFuse;

#endif // _ResmapledFuse_H_
