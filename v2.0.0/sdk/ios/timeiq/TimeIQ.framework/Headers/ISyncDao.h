//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/persistence/syncdb/daoimpls/modules/ISyncDao.java
//

#ifndef _ISyncDao_H_
#define _ISyncDao_H_

@class DaoType;
#import "JBClass.h"
#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by aeirew on 16/09/2015.
 */
@protocol ISyncDao < NSObject >

- (Set*)getAllObjectsBySourceTypeWithNSString:(NSString *)userId
                                                   withIOSClass:(Class )tClass;

- (Set*)getFirstXObjectsBySourceTypeWithDaoType:(DaoType *)daoType
                                                              withInt:(int)x;

@end

__attribute__((always_inline)) inline void ISyncDao_init() {}

#define ComIntelWearablePlatformTimeiqPlacesModulesPersistenceSyncdbDaoimplsModulesISyncDao ISyncDao

#endif // _ISyncDao_H_
