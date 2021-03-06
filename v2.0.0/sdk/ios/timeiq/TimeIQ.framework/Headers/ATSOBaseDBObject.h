//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/abstracts/ATSOBaseDBObject.java
//

#ifndef _ATSOBaseDBObject_H_
#define _ATSOBaseDBObject_H_

#import "JBHashtable.h"

#import "JB.h"
#import "ITSOBaseDBObject.h"

@interface ATSOBaseDBObject : NSObject < ITSOBaseDBObject > {
 @public
  NSString *objectId_;
  long64 creationTime_;
  long64 lastUserInteractionTime_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)objectId;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSString *)getObjectId;

- (void)setObjectIdWithNSString:(NSString *)newId;

- (long64)getCreationTime;

- (long64)getLastUserInteractionTime;

- (void)setLastUserInteractionTimeWithLong:(long64)lastUserInteractionTime;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (long64)getLongValueFromMapWithJavaUtilMap:(HashMap*)map
                               withNSString:(NSString *)key
                                   withLong:(long64)defaultValue;

- (int)getIntValueFromMapWithJavaUtilMap:(HashMap*)map
                             withNSString:(NSString *)key
                                  withInt:(int)defaultValue;

- (void)copyAllFieldsTo:(ATSOBaseDBObject *)other;

@end

__attribute__((always_inline)) inline void ATSOBaseDBObject_init() {}

//J2OBJC_FIELD_SETTER(ATSOBaseDBObject, objectId_, NSString *)

FOUNDATION_EXPORT NSString *ATSOBaseDBObject_OBJECT_ID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(ATSOBaseDBObject, OBJECT_ID_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *ATSOBaseDBObject_CREATION_TIME_;
J2OBJC_STATIC_FIELD_GETTER(ATSOBaseDBObject, CREATION_TIME_, NSString *)

FOUNDATION_EXPORT NSString *ATSOBaseDBObject_LAST_USER_INTERACTION_TIME_;
J2OBJC_STATIC_FIELD_GETTER(ATSOBaseDBObject, LAST_USER_INTERACTION_TIME_, NSString *)

typedef ATSOBaseDBObject ComIntelWearablePlatformTimeiqDbobjectsAbstractsATSOBaseDBObject;

#endif // _ATSOBaseDBObject_H_
