//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/tso/sdk/common/ioc/AObjectFactory.java
//

#ifndef _AObjectFactory_H_
#define _AObjectFactory_H_

#import "JBClass.h"

#import "JB.h"

/**
 @brief Created by gilsharo on 6/16/2015.
 */
@interface AObjectFactory : NSObject {
}

- (id)getObject;

- (id)constructObjectWithClass :(Class )impType;

- (AObjectFactory *)asSingleton;

- (AObjectFactory *)asMultiInstance;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void AObjectFactory_init() {}

typedef AObjectFactory ComIntelTsoSdkCommonIocAObjectFactory;

#endif // _AObjectFactory_H_

