//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/internalApi/ttlAlerts/IllegalNumberException.java
//

#ifndef _IllegalNumberException_H_
#define _IllegalNumberException_H_

#import "JB.h"
#import "NSException+JavaAPI.h"

/**
 @brief Building an alert using TSOAlert.TSOAlertBuilder can throw this exception.
 */
@interface IllegalNumberException : Exception {
}

- (instancetype)initWithNSString:(NSString *)message;

@end

__attribute__((always_inline)) inline void IllegalNumberException_init() {}

typedef IllegalNumberException ComIntelWearablePlatformTimeiqInternalApiTtlAlertsIllegalNumberException;

#endif // _IllegalNumberException_H_
