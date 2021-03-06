//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLJSNode.h>

@class TVSXMLElement, TVSXMLSchema;

@interface TVLJSElement : TVLJSNode
{
    TVSXMLSchema *xmlSchema;
}

+ (id)elementFromValue:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2 exception:(const struct OpaqueJSValue **)arg3;
+ (id)elementInContext:(struct OpaqueJSContext *)arg1 withElement:(id)arg2 withSchema:(id)arg3;
+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
@property(retain, nonatomic) TVSXMLSchema *xmlSchema; // @synthesize xmlSchema;
@property(readonly, retain, nonatomic) TVSXMLElement *xmlElement;
- (void)dealloc;

@end

