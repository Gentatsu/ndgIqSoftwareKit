//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/tso/sdk/common/ioc/MultiInstanceFactory.java
//

#ifndef _MultiInstanceFactory_H_
#define _MultiInstanceFactory_H_

#import "JBClass.h"

#import "JB.h"
#include "AObjectFactory.h"

/**
 @brief Created by gilsharo on 6/17/2015.
 */
@interface MultiInstanceFactory : AObjectFactory {
 @public
  Class m_impType_;
}

- (instancetype)initWithClass :(Class )m_impType;

- (id)getObject;

- (AObjectFactory *)asSingleton;

- (AObjectFactory *)asMultiInstance;

- (void)copyAllFieldsTo:(MultiInstanceFactory *)other;

@end

__attribute__((always_inline)) inline void MultiInstanceFactory_init() {}

//J2OBJC_FIELD_SETTER(MultiInstanceFactory, m_impType_, Class )

typedef MultiInstanceFactory ComIntelTsoSdkCommonIocMultiInstanceFactory;

#endif // _MultiInstanceFactory_H_

