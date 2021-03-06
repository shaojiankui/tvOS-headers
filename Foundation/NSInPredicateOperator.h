//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator
{
    unsigned long long _flags;
    NSSubstringPredicateOperator *_stringVersion;
}

+ (_Bool)supportsSecureCoding;
- (unsigned long long)options;
- (void)_setOptions:(unsigned long long)arg1;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)flags;
- (id)symbol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)stringVersion;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end

