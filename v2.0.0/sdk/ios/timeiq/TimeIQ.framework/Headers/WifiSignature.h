//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitsmodule/visit/WifiSignature.java
//

#ifndef _WifiSignature_H_
#define _WifiSignature_H_

#import "NSNumber+JavaAPI.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "IWifiSignature.h"

@interface WifiSignature : NSObject < IMappable, IWifiSignature > {
 @public
  HashMap* bssidToAverageLevel_;
  HashMap* bssidMatchCount_;
  int maximumMatchCount_;
}

- (JBDouble *)getAverageSourceLevelWithNSString:(NSString *)bssid;

- (int)size;

- (HashMap*)getBssidToAverageLevel;

- (HashMap*)getBssidMatchCount;

- (int)getMaximumMatchCount;

- (boolean)containsKeyWithNSString:(NSString *)bssid;

- (double)getLevelWithNSString:(NSString *)bssid;

- (int)getCountWithNSString:(NSString *)bssid;

- (void)updateWithNSString:(NSString *)bssid
                withDouble:(double)level;

- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (instancetype)init;

- (void)copyAllFieldsTo:(WifiSignature *)other;

@end

__attribute__((always_inline)) inline void WifiSignature_init() {}

//J2OBJC_FIELD_SETTER(WifiSignature, bssidToAverageLevel_, HashMap*)
//J2OBJC_FIELD_SETTER(WifiSignature, bssidMatchCount_, HashMap*)

FOUNDATION_EXPORT int WifiSignature_TOLERANCE_;
J2OBJC_STATIC_FIELD_GETTER(WifiSignature, TOLERANCE_, int)
//J2OBJC_STATIC_FIELD_REF_GETTER(WifiSignature, TOLERANCE_, int)

typedef WifiSignature ComIntelWearablePlatformTimeiqPlacesModulesVisitsmoduleVisitWifiSignature;

#endif // _WifiSignature_H_
