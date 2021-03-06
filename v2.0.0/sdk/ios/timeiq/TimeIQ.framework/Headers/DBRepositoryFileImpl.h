//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/db/DBRepositoryFileImpl.java
//

#ifndef _DBRepositoryFileImpl_H_
#define _DBRepositoryFileImpl_H_

@class ClassFactory;
#import "JBClass.h"
#import "JBFile.h"
@class ReentrantLock;
#import "JBHashtable.h"
@class RetCode;
@protocol IFileUtils;
@protocol IJSONUtils;
@protocol ITSOBaseDBObject;
#import "JBArrayList.h"

#import "JB.h"
#import "IDBRepositoryImpl.h"

/**
 @brief Created by orencoh2 on 8/12/14.
 */
@interface DBRepositoryFileImpl : NSObject < IDBRepositoryImpl > {
 @public
  id<IJSONUtils> m_JSONUtils_;
  boolean isChanged_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithIFileUtils:(id<IFileUtils>)fileUtils
                    withIJSONUtils:(id<IJSONUtils>)JSONUtils;

+ (DBRepositoryFileImpl *)getInstance;

/**
 @brief This is where the reset & version handling should take place
 */
- (void)manageVersionChangeAndClearDB;

- (boolean)upgradeOccurred;

- (void)updateVersionFile;

- (void)clearDB;

- (ArrayList*)getAllWithClass :(Class )clazz;

- (RetCode *)persistAllWithJavaUtilList:(ArrayList*)entries
                               withIOSClass:(Class )clazz;

/**
 @brief Appends a single row of data to the end of the file,
 @param data the data to save, if the data already exists in the db it will be replaced with new data
 @param clazz - the representing data class
 @throws TSODBException
 */
- (RetCode *)appendSingleRowDataWithITSOBaseDBObject:(id<ITSOBaseDBObject>)data
                                            withIOSClass:(Class )clazz;

- (void)generateIdWithITSOBaseDBObject:(id<ITSOBaseDBObject>)data;

- (void)dropTableWithClass :(Class )clazz;

- (void)dropTableWithNSString:(NSString *)tableName;

- (RetCode *)updateTableRowWithITSOBaseDBObject:(id<ITSOBaseDBObject>)data
                                       withIOSClass:(Class )clazz;

- (RetCode *)deleteTableRowWithITSOBaseDBObject:(id<ITSOBaseDBObject>)data
                                       withIOSClass:(Class )clazz;

- (RetCode *)deleteAllWithJavaUtilList:(ArrayList*)data
                              withIOSClass:(Class )clazz;

- (boolean)isObjectKeyInKeyMapWithNSString:(NSString *)keyName
                               withNSString:(NSString *)id_;

- (boolean)isObjectsKeysInKeyMapWithNSString:(NSString *)keyName
                             withJavaUtilList:(ArrayList*)objs;

- (void)addObjectKeyToMapWithNSString:(NSString *)keyName
                 withITSOBaseDBObject:(id<ITSOBaseDBObject>)element;

- (void)removeObjectKeyFromMapWithNSString:(NSString *)keyName
                      withITSOBaseDBObject:(id<ITSOBaseDBObject>)element;

- (void)removeObjectsKeysFromMapWithNSString:(NSString *)keyName
                            withJavaUtilList:(ArrayList*)elements;

- (NSString *)getMapKeyFromFileWithFile:(File *)repoFile;

/**
 @brief Validate that list doesn't contains the same Id twice
 @param entries
 @return boolean
 */
- (boolean)isValidListWithJavaUtilList:(ArrayList*)entries;

- (int)getListDataIdWithJavaUtilList:(ArrayList*)allAsListLineByLine
                 withITSOBaseDBObject:(id<ITSOBaseDBObject>)data;

- (File *)getRepoFileForClassWithClass :(Class )clazz;

- (File *)getRepoFileForTableNameWithNSString:(NSString *)tableName;

- (boolean)appendDataToFileWithNSString:(NSString *)dataAsString
                          withFile:(File *)repoFile;

- (NSString *)getSingleLineAsStringWithITSOBaseDBObject:(id<ITSOBaseDBObject>)data;

- (void)copyAllFieldsTo:(DBRepositoryFileImpl *)other;

@end

FOUNDATION_EXPORT BOOL DBRepositoryFileImpl_initialized;
J2OBJC_STATIC_INIT(DBRepositoryFileImpl)

//J2OBJC_FIELD_SETTER(DBRepositoryFileImpl, m_JSONUtils_, id<IJSONUtils>)

FOUNDATION_EXPORT NSString *DBRepositoryFileImpl_TAG_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, TAG_, NSString *)

FOUNDATION_EXPORT NSString *DBRepositoryFileImpl_ENCODING_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, ENCODING_, NSString *)

FOUNDATION_EXPORT Hashtable *DBRepositoryFileImpl_s_dbKeys_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, s_dbKeys_, Hashtable *)
//J2OBJC_STATIC_FIELD_SETTER(DBRepositoryFileImpl, s_dbKeys_, Hashtable *)

FOUNDATION_EXPORT ReentrantLock *DBRepositoryFileImpl_s_lock_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, s_lock_, ReentrantLock *)

FOUNDATION_EXPORT id<IFileUtils> DBRepositoryFileImpl_s_fileUtils_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, s_fileUtils_, id<IFileUtils>)
//J2OBJC_STATIC_FIELD_SETTER(DBRepositoryFileImpl, s_fileUtils_, id<IFileUtils>)

FOUNDATION_EXPORT DBRepositoryFileImpl *DBRepositoryFileImpl_s_instance_;
J2OBJC_STATIC_FIELD_GETTER(DBRepositoryFileImpl, s_instance_, DBRepositoryFileImpl *)

typedef DBRepositoryFileImpl ComIntelWearablePlatformTimeiqCommonDbDBRepositoryFileImpl;

#endif // _DBRepositoryFileImpl_H_
