//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/barilevi/development/4conversion/org/apache/commons/lang3/builder/ToStringStyle.java
//


#include "JB.h"
#import "JBEnum.h"
#include "NSArray+JavaAPI.h"

@class ToStringStyle;

ToStringStyle* ToStringStyle_get_SHORT_PREFIX_STYLE();

enum : NSUInteger
{
    SHORT_PREFIX_STYLE ,
} ;


ToStringStyle* SHORT_PREFIX_STYLE_;

@interface ToStringStyle : Enum

+ (Array*)values;

+ (ToStringStyle *)valueOf:(NSString*)name;
+ (ToStringStyle *)parseWithInt:(int)name;

+ (void)initialize;

+(ToStringStyle*) SHORT_PREFIX_STYLE;

@end
