//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/userstate/UserStateManagerModuleDebug.java
//

#ifndef _UserStateManagerModuleDebug_H_
#define _UserStateManagerModuleDebug_H_

@class UserState;

#import "JB.h"
#import "UserStateManagerModule.h"

/**
 @brief Created by gilsharo on 5/13/2015.
 */
@interface UserStateManagerModuleDebug : UserStateManagerModule {
}

- (instancetype)init;

- (void)debugSetStateWithUserState:(UserState *)newState;

@end

__attribute__((always_inline)) inline void UserStateManagerModuleDebug_init() {}

typedef UserStateManagerModuleDebug ComIntelWearablePlatformTimeiqUserstateUserStateManagerModuleDebug;

#endif // _UserStateManagerModuleDebug_H_
