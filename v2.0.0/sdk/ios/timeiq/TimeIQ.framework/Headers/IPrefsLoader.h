//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/preferences/IPrefsLoader.java
//

#ifndef _IPrefsLoader_H_
#define _IPrefsLoader_H_

@class PrefsFileType;

#import "JB.h"

/**
 @brief Created by mleib on 02/08/2015.
 */
@protocol IPrefsLoader < NSObject >

- (NSString *)getPrefsResourceFileAsStringWithPrefsFileType:(PrefsFileType *)prefsFileType;

@end

__attribute__((always_inline)) inline void IPrefsLoader_init() {}

#define ComIntelWearablePlatformTimeiqCommonPreferencesIPrefsLoader IPrefsLoader

#endif // _IPrefsLoader_H_
