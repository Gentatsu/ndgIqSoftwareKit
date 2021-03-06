//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dblayer/DaoFactory.java
//

#ifndef _DaoFactory_H_
#define _DaoFactory_H_

@class DaoType;
#import "JBClass.h"
@protocol IGenericDaoImpl;
#import "JBHashSet.h"
#import "JBHashtable.h"
#import "JBHashSet.h"

#import "JB.h"

@interface DaoFactory : NSObject {
}

+ (void)putDaoWithClass :(Class )deserializeClass
       withIGenericDaoImpl:(id<IGenericDaoImpl>)dao;

+ (id<IGenericDaoImpl>)getDaoBySourceTypeWithClass :(Class )deserializeClass;

+ (id<IGenericDaoImpl>)getDaoByDaoTypeWithDaoType:(DaoType *)daoType;

+ (boolean)isDaoRegisteredWithClass :(Class )deserializeClass;

+ (Set*)getSystemDoas;

+ (Set*)getSystemDoasDeserializeClasses;

+ (void)clearDaoFacroty;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL DaoFactory_initialized;
J2OBJC_STATIC_INIT(DaoFactory)

FOUNDATION_EXPORT HashMap* DaoFactory_m_daoMap_;
J2OBJC_STATIC_FIELD_GETTER(DaoFactory, m_daoMap_, HashMap*)
//J2OBJC_STATIC_FIELD_SETTER(DaoFactory, m_daoMap_, HashMap*)

typedef DaoFactory ComIntelWearablePlatformTimeiqDblayerDaoFactory;

#endif // _DaoFactory_H_
