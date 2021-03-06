//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/db/DBSourceDefinition.java
//

#ifndef _DBSourceDefinition_H_
#define _DBSourceDefinition_H_

@class DataBaseControl;
#import "JBClass.h"
#import "JBHashSet.h"

#import "JB.h"
#import "IDBSourceDefinition.h"

/**
 @brief Created by aeirew on 15/07/2015.
 */
@interface DBSourceDefinition : NSObject < IDBSourceDefinition > {
 @public
  Set* m_classes_;
}

- (instancetype)init;

- (NSString *)getDbCollectionNameWithClass :(Class )deserializeClass;

- (DataBaseControl *)getDbControlWithClass :(Class )deserializeClass;

- (Set*)getDaoClasses;

- (void)copyAllFieldsTo:(DBSourceDefinition *)other;

@end

__attribute__((always_inline)) inline void DBSourceDefinition_init() {}

//J2OBJC_FIELD_SETTER(DBSourceDefinition, m_classes_, Set*)

typedef DBSourceDefinition ComIntelWearablePlatformTimeiqPlatformJavaDbDBSourceDefinition;

#endif // _DBSourceDefinition_H_
