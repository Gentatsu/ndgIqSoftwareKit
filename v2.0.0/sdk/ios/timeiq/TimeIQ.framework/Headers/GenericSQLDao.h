//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/persistence/syncdb/daoimpls/sql/GenericSQLDao.java
//

#ifndef _GenericSQLDao_H_
#define _GenericSQLDao_H_

@class DataBaseControl;
#import "JBClass.h"
@protocol ICreateUpdateStrategy;
@protocol IDBSourceDefinition;
@protocol IDbManager;
@protocol IDbPlatformImpl;
@protocol IGenericDaoQuery;
@protocol IJSONUtils;
@protocol ITSOBaseDBObject;
@protocol ITSOLogger;
#import "JBFuture.h"
#import "JBArrayList.h"

#import "JB.h"
#import "IDaoCreateUpdateConsumer.h"
#import "IGenericDaoImpl.h"

#define GenericSQLDao_OBJ_AS_JSON_COL_NAME_IDX 1

/**
 @brief GenericSQLDao - implementation of the SQL lower layer of the DB, contains all method for read/write access. each instance of this class handle one type of ITSOBaseDBObject implementor Created by yaronabr on 19-Jul-15.
 */
@interface GenericSQLDao : NSObject < IGenericDaoImpl, IDaoCreateUpdateConsumer > {
 @public
  Class m_deserializeClass_;
  DataBaseControl *m_DBControl_;
  NSString *m_tableName_;
  id<IJSONUtils> s_JSONUtils_;
  id<IDbManager> m_dbManager_;
  id<ITSOLogger> m_logger_;
  id<ICreateUpdateStrategy> m_createUpdateStrategy_;
  id m_lock_;
}

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)idbSourceDefinition
                               withIOSClass:(Class )tClass;

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)idbSourceDefinition
                               withIOSClass:(Class )tClass
                  withICreateUpdateStrategy:(id<ICreateUpdateStrategy>)createUpdateStrategy;

- (DataBaseControl *)getDBControl;

- (Class )getDeserializeClass;

- (ArrayList*)getAllObjectsByUserIdWithNSString:(NSString *)s;

- (id)getObjectByIdWithNSString:(NSString *)userId
                   withNSString:(NSString *)objectId;

- (id<Future>)updateObjectWithITSOBaseDBObject:(id<ITSOBaseDBObject>)t;

- (id<Future>)addObjectsWithJavaUtilList:(ArrayList*)ts;

- (id<Future>)multiTransactionWithJavaUtilList:(ArrayList*)list;

- (id<Future>)createSuccessRetVal;

- (id<Future>)addObjectWithITSOBaseDBObject:(id<ITSOBaseDBObject>)t;

- (id<Future>)deleteAllObjectsByUserIdWithNSString:(NSString *)s;

- (id<Future>)deleteObjectWithITSOBaseDBObject:(id<ITSOBaseDBObject>)t;

- (id<Future>)deleteObjectsWithJavaUtilList:(ArrayList*)ts;

- (id<Future>)runQueryByCommandWithNSString:(NSString *)command;

- (ArrayList*)getAllAfterTimeStampWithNSString:(NSString *)s
                                            withLong:(long64)l;

- (ArrayList*)getObjectsByIdsWithNSString:(NSString *)userId
                               withJavaUtilList:(ArrayList*)strings;

- (void)onCreateCommandWithIDbPlatformImpl:(id<IDbPlatformImpl>)idb;

- (void)onUpgradeCommandWithIDbPlatformImpl:(id<IDbPlatformImpl>)idb
                                    withInt:(int)oldVersion
                                    withInt:(int)newVersion;

- (void)runCommandWithIDbPlatformImpl:(id<IDbPlatformImpl>)database
                 withIGenericDaoQuery:(id<IGenericDaoQuery>)iGenericDaoQuery;

- (void)copyAllFieldsTo:(GenericSQLDao *)other;

@end

__attribute__((always_inline)) inline void GenericSQLDao_init() {}

//J2OBJC_FIELD_SETTER(GenericSQLDao, m_deserializeClass_, Class )
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_DBControl_, DataBaseControl *)
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_tableName_, NSString *)
//J2OBJC_FIELD_SETTER(GenericSQLDao, s_JSONUtils_, id<IJSONUtils>)
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_dbManager_, id<IDbManager>)
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_createUpdateStrategy_, id<ICreateUpdateStrategy>)
//J2OBJC_FIELD_SETTER(GenericSQLDao, m_lock_, id)

FOUNDATION_EXPORT NSString *GenericSQLDao_ID_COL_NAME_;
J2OBJC_STATIC_FIELD_GETTER(GenericSQLDao, ID_COL_NAME_, NSString *)

FOUNDATION_EXPORT NSString *GenericSQLDao_OBJ_AS_JSON_COL_NAME_;
J2OBJC_STATIC_FIELD_GETTER(GenericSQLDao, OBJ_AS_JSON_COL_NAME_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(GenericSQLDao, OBJ_AS_JSON_COL_NAME_IDX, int)

typedef GenericSQLDao ComIntelWearablePlatformTimeiqPlacesModulesPersistenceSyncdbDaoimplsSqlGenericSQLDao;

#endif // _GenericSQLDao_H_