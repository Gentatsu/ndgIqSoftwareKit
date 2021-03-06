//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/persistence/syncdb/daoimpls/GenericClientUserIDDaoDecorator.java
//

#ifndef _GenericClientUserIDDaoDecorator_H_
#define _GenericClientUserIDDaoDecorator_H_

@class DataBaseControl;
#import "JBClass.h"
@protocol ITSOSyncDbObject;
#import "JBFuture.h"
#import "JBArrayList.h"

#import "JB.h"
#import "IDaoDecorator.h"
#import "IGenericDaoImpl.h"
#import "ISyncMethods.h"

/**
 @brief Created by aeirew on 09/08/2015.
 */
@interface GenericClientUserIDDaoDecorator : NSObject < IGenericDaoImpl, ISyncMethods, IDaoDecorator > {
 @public
  id<IGenericDaoImpl> m_daoImpl_;
}

- (instancetype)initWithIGenericDaoImpl:(id<IGenericDaoImpl>)daoImpl;

- (ArrayList*)getAllObjectsByUserIdWithNSString:(NSString *)userId;

- (id)getObjectByIdWithNSString:(NSString *)userId
                   withNSString:(NSString *)s1;

- (id<Future>)updateObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)t;

- (id<Future>)addObjectsWithJavaUtilList:(ArrayList*)list;

- (id<Future>)addObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)t;

- (id<Future>)deleteObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)t;

- (id<Future>)deleteObjectsWithJavaUtilList:(ArrayList*)list;

- (id<Future>)multiTransactionWithJavaUtilList:(ArrayList*)list;

- (id<Future>)deleteAllObjectsByUserIdWithNSString:(NSString *)userId;

- (ArrayList*)getAllAfterTimeStampWithNSString:(NSString *)userId
                                            withLong:(long64)l;

- (ArrayList*)getObjectsByIdsWithNSString:(NSString *)userId
                               withJavaUtilList:(ArrayList*)list;

- (DataBaseControl *)getDBControl;

- (Class )getDeserializeClass;

- (void)validateAndSetUserIdsWithJavaUtilList:(ArrayList*)list;

- (void)validateAndSetUserIdWithITSOSyncDbObject:(id<ITSOSyncDbObject>)obj;

- (NSString *)getUserId;

- (ArrayList*)getAllAfterTimeStampFromRemoteMasterWithNSString:(NSString *)userId
                                                            withLong:(long64)l;

- (ArrayList*)getAllAfterTimeStampFromRemoteSlaveWithNSString:(NSString *)userId
                                                           withLong:(long64)l;

- (id<Future>)syncFromRemoteMasterToLocalSlaveWithNSString:(NSString *)userId
                                                                    withLong:(long64)l;

- (void)syncFromLocalMasterToRemoteSlave;

- (id<IGenericDaoImpl>)getDecoratedDao;

- (void)copyAllFieldsTo:(GenericClientUserIDDaoDecorator *)other;

@end

__attribute__((always_inline)) inline void GenericClientUserIDDaoDecorator_init() {}

//J2OBJC_FIELD_SETTER(GenericClientUserIDDaoDecorator, m_daoImpl_, id<IGenericDaoImpl>)

typedef GenericClientUserIDDaoDecorator ComIntelWearablePlatformTimeiqPlacesModulesPersistenceSyncdbDaoimplsGenericClientUserIDDaoDecorator;

#endif // _GenericClientUserIDDaoDecorator_H_
