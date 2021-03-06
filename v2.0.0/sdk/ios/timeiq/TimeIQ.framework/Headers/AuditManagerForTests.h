//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/audit/AuditManagerForTests.java
//

#ifndef _AuditManagerForTests_H_
#define _AuditManagerForTests_H_

@class eAuditLabels;
@protocol IMappable;

#import "JB.h"
#import "IAuditManager.h"

/**
 @brief Created by asamouch on 19/07/2015.
 */
@interface AuditManagerForTests : NSObject < IAuditManager > {
}

- (void)auditWithIMappable:(id<IMappable>)object
      withEAuditLabelsEnum:(eAuditLabels *)label;

- (void)flush;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void AuditManagerForTests_init() {}

typedef AuditManagerForTests ComIntelWearablePlatformTimeiqCommonAuditAuditManagerForTests;

#endif // _AuditManagerForTests_H_
