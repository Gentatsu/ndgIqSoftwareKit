//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/resourcemanager/policy/SingleSensorPolicy.java
//

#ifndef _SingleSensorPolicy_H_
#define _SingleSensorPolicy_H_

#import "JB.h"

/**
 @brief Created by eleuchte on 02/02/2015.
 SingleSensorPolicy - describes the policy for a given sensor type: it's sample interval, and the minimum interval allowed by that policy
 */
@interface SingleSensorPolicy : NSObject {
 @public
  boolean m_isRunning_;
  long64 m_sampleInterval_;
  long64 m_minSampleInterval_;
}

/**
 @brief Ctor:
 @param isRunning is this sensor type permitted to run on a given policy
 @param sampleInterval the sample interval to run the sensor which will also be set as the minSampleInterval
 */
- (instancetype)initWithBoolean:(boolean)isRunning
                       withLong:(long64)sampleInterval;

/**
 @brief Ctor:
 @param isRunning is this sensor type permitted to run on a given policy
 @param sampleInterval the sample interval to run the sensor
 @param minSampleInterval the min sample interval range this sensor is permitted to run on a given policy
 */
- (instancetype)initWithBoolean:(boolean)isRunning
                       withLong:(long64)sampleInterval
                       withLong:(long64)minSampleInterval;

/**
 @brief The state (running/stopped) for a given sensor type
 @return 
 */
- (boolean)isRunning;

/**
 @brief the current sample interval of the sensor
 @return 
 */
- (long64)getSampleInterval;

/**
 @brief Minimum range of Sample interval of the sensor
 @return 
 */
- (long64)getMinSampleInterval;

/**
 @brief Modify the sensor's sample interval
 @param sampleInterval
 */
- (void)setSampleIntervalWithLong:(long64)sampleInterval;

- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(SingleSensorPolicy *)other;

@end

__attribute__((always_inline)) inline void SingleSensorPolicy_init() {}

typedef SingleSensorPolicy ComIntelWearablePlatformTimeiqSensorsResourcemanagerPolicySingleSensorPolicy;

#endif // _SingleSensorPolicy_H_