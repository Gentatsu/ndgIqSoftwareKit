//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/modulesapi/IDetectionModule.java
//

#ifndef _IDetectionModule_H_
#define _IDetectionModule_H_

@class ModuleState;
@protocol ISensorDataReceiver;

#import "JB.h"
#import "IModule.h"

/**
 @brief Created by orencoh2 on 23/11/14.
 */
@protocol IDetectionModule < IModule, NSObject >
- (id)getCurrent;

- (id)getPrevious;

- (id<ISensorDataReceiver>)getDataReceiverListener;

- (ModuleState *)getModuleState;

@end

__attribute__((always_inline)) inline void IDetectionModule_init() {}

#define ComIntelWearablePlatformTimeiqPlacesModulesModulesapiIDetectionModule IDetectionModule

#endif // _IDetectionModule_H_
