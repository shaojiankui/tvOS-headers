//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TVSCSemanticObject : NSObject
{
    NSString *_type;
    NSMutableDictionary *_metadata;
}

@property(copy, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)linkedDataDictionary;
- (void)removeMetadataForProperty:(id)arg1;
- (void)setMetadata:(id)arg1 forProperty:(id)arg2;
- (id)metadataForProperty:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1;

@end

