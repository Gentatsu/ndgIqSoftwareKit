//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/replay/SimulateInfoParams.java
//

#ifndef _SimulateInfoParams_H_
#define _SimulateInfoParams_H_

@class ReplayMode;
#import "JBArrayList.h"

#import "JB.h"

/**
 @brief Created by eleuchte on 12/23/2014.
 */
@interface SimulateInfoParams : NSObject {
 @public
  ArrayList* m_fileNames_;
  ReplayMode *m_replayMode_;
  boolean m_applyResourceManager_;
}

- (instancetype)init;

- (ArrayList*)getFileNames;

- (void)setFileNamesWithJavaUtilList:(ArrayList*)fileNames;

- (ReplayMode *)getReplayMode;

- (void)setReplayModeWithReplayMode:(ReplayMode *)replayMode;

- (boolean)isApplyResourceManager;

- (void)setApplyResourceManagerWithBoolean:(boolean)applyResourceManager;

- (void)copyAllFieldsTo:(SimulateInfoParams *)other;

@end

__attribute__((always_inline)) inline void SimulateInfoParams_init() {}

//J2OBJC_FIELD_SETTER(SimulateInfoParams, m_fileNames_, ArrayList*)
//J2OBJC_FIELD_SETTER(SimulateInfoParams, m_replayMode_, ReplayMode *)

typedef SimulateInfoParams ComIntelWearablePlatformTimeiqSensorsReplaySimulateInfoParams;

#endif // _SimulateInfoParams_H_