//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dblayer/interfaces/IPlaceDao.java
//

#ifndef _IPlaceDao_H_
#define _IPlaceDao_H_

@protocol ITSOSemanticPlace;

#import "JB.h"

@protocol IPlaceDao < NSObject >

- (id)getUserPlaceByNameWithNSString:(NSString *)placeName
                        withNSString:(NSString *)userID;

- (id)getUserHomeWithNSString:(NSString *)userID;

- (id)getUserWorkWithNSString:(NSString *)userID;

@end

__attribute__((always_inline)) inline void IPlaceDao_init() {}

#define ComIntelWearablePlatformTimeiqDblayerInterfacesIPlaceDao IPlaceDao

#endif // _IPlaceDao_H_
