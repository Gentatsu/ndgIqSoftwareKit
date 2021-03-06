//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/engine/SensorsEngine.java
//

#ifndef _SensorsEngine_H_
#define _SensorsEngine_H_

@class ASensorsEnginePlatformAPI;
@class AbstractHWSensor;
@class BaseSensorData;
@class PolicyChangeInfo;
@class PolicyMode;
@class ReceiverSensorsRequest;
@class ResourceManager;
@class SDKPolicy;
@class SensorState;
@class SensorStateManager;
@class SensorStateType;
@class SensorType;
@protocol IBuildPrefs;
@protocol ILocationProvider;
@protocol ISensorDataReceiver;
#import "JBArrayList.h"
#import "JBHashtable.h"
#import "JBHashSet.h"

#import "JB.h"
#import "ISensorsEngine.h"
#import "IPolicyListener.h"

/**
 */
@interface SensorsEngine : NSObject < ISensorsEngine, IPolicyListener > {
 @public
  ASensorsEnginePlatformAPI *m_sensorsEnginePlatformAPI_;
  SensorStateManager *m_sensorStateManager_;
  boolean m_bIsRunning_;
  id<ILocationProvider> m_locationProvider_;
  /**
   @brief Resource Manager and Sensors start/stop params
   */
  ResourceManager *m_resourceManager_;
  HashMap* m_receiversToRequestMap_;
  ArrayList* m_alwaysOnSensors_;
  HashMap* m_sensorsRules_;
  boolean m_bIsInitDone_;
  id<IBuildPrefs> m_buildPrefs_;
  boolean m_bIsLockedSensors_;
}

- (instancetype)initWithASensorsEnginePlatformAPI:(ASensorsEnginePlatformAPI *)sensorEngineImpl;

/**
 @brief Registers the SensorStateManager as a listener to all available sensors
 */
- (void)registerSensorStateManagerAsSensorsListener;

/**
 @brief Registers the initial receivers, these receivers stay registered during the whole life cycle (unless survey/replay mode is invoked)
 */
- (void)registerInitialReceivers;

/**
 @brief A singleton implementation.
 Returns the instance of the SensorEngine.
 @return SensorEngine instance
 */
+ (SensorsEngine *)getInstance;

/**
 @brief Initializes the SensorsEngine.
 Requires a platform specific implementation of ASensorsEnginePlatformAPI to supply the list of actual platform available sensors.
 @param sensorEngineImpl ASensorsEnginePlatformAPI Implementation class to supply the available platform sensors.
 */
+ (void)init__WithASensorsEnginePlatformAPI:(ASensorsEnginePlatformAPI *)sensorEngineImpl OBJC_METHOD_FAMILY_NONE;

/**
 @brief Clear instance
 */
+ (void)dispose;

/**
 @return 
 */
- (boolean)isInitialized;

/**
 */
- (void)pauseSensors;

- (void)resumeSensors;

/**
 @param sensorType
 @return 
 */
- (boolean)stopAndRemoveSingleSensorWithSensorType:(SensorType *)sensorType;

/**
 @param sensorType
 @return 
 */
- (boolean)addAndStartSingleSensorWithSensorType:(SensorType *)sensorType;

- (void)registerReceiverOnAllSensorsWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver;

/**
 @param receiver
 @param request
 */
- (void)registerReceiverOnSpecificSensorsWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver
                                      withReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

- (void)unRegisterReceiverFromAllSensorsWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver;

- (void)unRegisterReceiverFromSpecificSensorWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver
                                                 withSensorType:(SensorType *)sensorType;

- (void)removeRequestFromSensorDataReceiverWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver
                                        withReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

- (void)addRequestOfSensorDataReceiverWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver
                                   withReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

- (void)addRequestedSensorsToCounterMapWithReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

- (void)removeRequestedSensorsToCounterMapWithReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

/**
 @brief Checks how many receivers are registered on a given sensor type: if none - stops it, if there is at least one and policy permits it - starts it In addition updates the status of sensor's running flag There is no problem in 'multiple' start/stop of a sensor - this process is optimized on the SensorsEnginePlatformAPI
 */
- (void)applyStartOrStopOnSensors;

- (boolean)isRunning;

/**
 @param sensorType
 @return 
 */
- (SensorState *)getSensorStateWithSensorType:(SensorType *)sensorType;

- (BaseSensorData *)getRecentSampleDataWithSensorType:(SensorType *)sensorType;

/**
 @return 
 */
- (SDKPolicy *)getSDKPolicy;

/**
 @param sensorType
 @return 
 */
- (long64)getSensorSampleIntervalInMillisWithSensorType:(SensorType *)sensorType;

/**
 @return 
 */
- (ArrayList*)getAllPlatformSensorStates;

/**
 @return 
 @throws CloneNotSupportedException
 */
- (id)clone;

/**
 @return 
 */
- (ArrayList*)getAllPlatformSensorsTypes;

/**
 @param type
 @return 
 */
- (AbstractHWSensor *)getPlatformSensorByTypeWithSensorType:(SensorType *)type;

/**
 */
- (void)resetReceivers;

/**
 @return 
 */
- (Set*)getReceivers;

- (HashMap*)getRegisteredReceiversOnEngine;

/**
 @param policyChangeInfo
 */
- (void)onPolicyChangeWithPolicyChangeInfo:(PolicyChangeInfo *)policyChangeInfo;

/**
 @brief Notify that there is a change on location sample mode: GPS available or lost
 @param isHighAccuracySample
 */
- (void)onLocationSampleChangeWithBoolean:(boolean)isHighAccuracySample;

- (boolean)processChangeOnSensorWithSensorType:(SensorType *)sensorType
                                      withSDKPolicy:(SDKPolicy *)newPolicy;

- (void)registerListenerOnResourceManagerWithIPolicyListener:(id<IPolicyListener>)policyListener;

- (void)unRegisterListenerOnResourceManagerWithIPolicyListener:(id<IPolicyListener>)policyListener;

- (void)startSurvey;

- (void)stopSurvey;

- (void)forcePolicyChangeWithPolicyMode:(PolicyMode *)forcedPolicy;

- (void)reApplyResourceManagerRequest;

/**
 @brief Initiates the rules of sensors - each is set to not required (0)
 */
- (void)initSensorRulesMapWithSDKPolicy:(SDKPolicy *)currentPolicy OBJC_METHOD_FAMILY_NONE;

/**
 @brief Used only on Simulation - stops all the sensors prior start replay
 */
- (void)stopSensors;

/**
 @brief Deprecated Once Survey mode is on
 */
- (void)addSingleSensorWithSensorType:(SensorType *)sensorType;

- (void)lockSensorsForStart;

- (void)unLockSensorsForStart;

- (void)copyAllFieldsTo:(SensorsEngine *)other;

@end

FOUNDATION_EXPORT BOOL SensorsEngine_initialized;
J2OBJC_STATIC_INIT(SensorsEngine)

//J2OBJC_FIELD_SETTER(SensorsEngine, m_sensorsEnginePlatformAPI_, ASensorsEnginePlatformAPI *)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_sensorStateManager_, SensorStateManager *)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_locationProvider_, id<ILocationProvider>)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_resourceManager_, ResourceManager *)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_receiversToRequestMap_, HashMap*)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_alwaysOnSensors_, ArrayList*)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_sensorsRules_, HashMap*)
//J2OBJC_FIELD_SETTER(SensorsEngine, m_buildPrefs_, id<IBuildPrefs>)

FOUNDATION_EXPORT NSString *SensorsEngine_TAG_;
J2OBJC_STATIC_FIELD_GETTER(SensorsEngine, TAG_, NSString *)

FOUNDATION_EXPORT SensorsEngine *SensorsEngine_s_instance_;
J2OBJC_STATIC_FIELD_GETTER(SensorsEngine, s_instance_, SensorsEngine *)
//J2OBJC_STATIC_FIELD_SETTER(SensorsEngine, s_instance_, SensorsEngine *)

typedef SensorsEngine ComIntelWearablePlatformTimeiqSensorsEngineSensorsEngine;

@interface SensorStatusInfo : NSObject {
 @public
  boolean alwaysOn_;
  boolean runningOnCurrentPolicy_;
  SensorStateType *m_sensorStateType_;
  int receiversCount_;
  long64 sampleInterval_;
}

- (instancetype)initWithBoolean:(boolean)alwaysOn
        withSensorStateType:(SensorStateType *)sensorStateType
                    withBoolean:(boolean)runningOnCurrentPolicy
                        withInt:(int)receiversCount
                       withLong:(long64)sampleInterval;

- (boolean)isAlwaysOn;

- (boolean)isRunningOnCurrentPolicy;

- (SensorStateType *)getSensorStateType;

- (int)getReceiversCount;

- (long64)getSampleInterval;

- (void)setRunningOnCurrentPolicyWithBoolean:(boolean)runningOnCurrentPolicy;

- (void)setSensorStateTypeWithSensorStateType:(SensorStateType *)sensorStateType;

- (void)setSampleIntervalWithLong:(long64)sampleInterval;

- (void)addReceiver;

- (void)removeReceiver;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(SensorStatusInfo *)other;

@end

__attribute__((always_inline)) inline void SensorStatusInfo_init() {}

//J2OBJC_FIELD_SETTER(SensorStatusInfo, m_sensorStateType_, SensorStateType *)

typedef SensorStatusInfo ComIntelWearablePlatformTimeiqSensorsEngineSensorStatusInfo;

#endif // _SensorsEngine_H_
