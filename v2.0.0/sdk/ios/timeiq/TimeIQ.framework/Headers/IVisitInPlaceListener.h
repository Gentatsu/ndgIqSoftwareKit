//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/IVisitInPlaceListener.java
//

#ifndef _IVisitInPlaceListener_H_
#define _IVisitInPlaceListener_H_

#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by ylempert on 14-May-15.
 */
@protocol IVisitInPlaceListener < NSObject >

- (void)onVisitInPlaceStartWithJavaUtilCollection:(Set*)visits;

- (void)onVisitInPlaceEndWithJavaUtilCollection:(Set*)visits;

@end

__attribute__((always_inline)) inline void IVisitInPlaceListener_init() {}

#define ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleIVisitInPlaceListener IVisitInPlaceListener

#endif // _IVisitInPlaceListener_H_