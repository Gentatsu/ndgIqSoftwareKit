//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/QueryResult.java
//

#ifndef _QueryResult_H_
#define _QueryResult_H_

#import "JB.h"

@interface QueryResult : NSObject {
 @public
  id m_result_;
}

- (instancetype)initWithId:(id)result;

- (id)getResult;

- (void)copyAllFieldsTo:(QueryResult *)other;

@end

__attribute__((always_inline)) inline void QueryResult_init() {}

//J2OBJC_FIELD_SETTER(QueryResult, m_result_, id)

typedef QueryResult ComIntelWearablePlatformTimeiqDbobjectsQueryResult;

#endif // _QueryResult_H_
