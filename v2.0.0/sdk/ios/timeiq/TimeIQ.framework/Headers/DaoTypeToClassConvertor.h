//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/DaoTypeToClassConvertor.java
//

#ifndef _DaoTypeToClassConvertor_H_
#define _DaoTypeToClassConvertor_H_

@class DaoType;
#import "JBClass.h"

#import "JB.h"

@interface DaoTypeToClassConvertor : NSObject {
}

+ (Class )getDaoClassByDaoTypeWithDaoType:(DaoType *)type;

+ (DaoType *)getDaoTypeByDaoClassWithClass :(Class )deserializeClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void DaoTypeToClassConvertor_init() {}

typedef DaoTypeToClassConvertor ComIntelWearablePlatformTimeiqDbobjectsDaoTypeToClassConvertor;

#endif // _DaoTypeToClassConvertor_H_
