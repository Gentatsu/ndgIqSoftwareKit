//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/resolver/ResolverEngine.java
//

#ifndef _ResolverEngine_H_
#define _ResolverEngine_H_

@protocol IResolverModule;

#import "JB.h"

/**
 @brief TODO: Remove this class - it should not be used this way ResolverEngine is a singleton class that provides a way to resolve a search term to a location or a phone number to a relevant business place
 */
@interface ResolverEngine : NSObject {
}

+ (id<IResolverModule>)getInstance;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ResolverEngine_init() {}

typedef ResolverEngine ComIntelWearablePlatformTimeiqResolverResolverEngine;

#endif // _ResolverEngine_H_