//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/hwsensors/AbstractHWSensor.java
//

#ifndef _AbstractHWSensor_H_
#define _AbstractHWSensor_H_

@class BaseSensorData;
#import "NSException+JavaAPI.h"
@class SensorState;
@class SensorType;
@protocol IHWSensorListener;
#import "JBFuture.h"

#import "JB.h"

/**
 @brief Created by orencoh2 on 5/11/14.
 */
@interface AbstractHWSensor : NSObject {
 @public
  id<IHWSensorListener> m_listener_;
  SensorState *m_sensorState_;
  long64 m_sampleIntervalInMillis_;
}

- (instancetype)initWithLong:(long64)sampleIntervalInMillis;

- (void)registerListenerWithIHWSensorListener:(id<IHWSensorListener>)m_listener;

- (void)unRegisterListener;

- (id<IHWSensorListener>)getListener;

/**
 @return Future object or null if no listener. The Future object will return null from it's get() method after sensorData is handled by the listener.
 */
- (id<Future>)sendDataWithBaseSensorData:(BaseSensorData *)sensorData;

- (SensorState *)getSensorState;

- (void)handleErrorWithNSString:(NSString *)message
          withException:(Exception *)ex
                      withShort:(short)errorCode;

- (long64)getSampleIntervalInMillis;

- (void)setSampleIntervalInMillisWithLong:(long64)sampleIntervalInMillis;

- (BaseSensorData *)getRecentSample;

- (boolean)startSensor;

- (boolean)stopSensor;

- (boolean)pauseSensor;

- (boolean)resumeSensor;

- (SensorType *)getSensorType;

- (void)changeSampleRateWithLong:(long64)intervalInMillis;

- (void)copyAllFieldsTo:(AbstractHWSensor *)other;

@end

FOUNDATION_EXPORT BOOL AbstractHWSensor_initialized;
J2OBJC_STATIC_INIT(AbstractHWSensor)

//J2OBJC_FIELD_SETTER(AbstractHWSensor, m_listener_, id<IHWSensorListener>)
//J2OBJC_FIELD_SETTER(AbstractHWSensor, m_sensorState_, SensorState *)

FOUNDATION_EXPORT NSString *AbstractHWSensor_TAG_;
J2OBJC_STATIC_FIELD_GETTER(AbstractHWSensor, TAG_, NSString *)

typedef AbstractHWSensor ComIntelWearablePlatformTimeiqSensorsHwsensorsAbstractHWSensor;

#endif // _AbstractHWSensor_H_