//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class NSString;

@interface FBSSceneOcclusion : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    struct CGRect _rect;
}

+ (id)occlusionWithRect:(struct CGRect)arg1;
+ (id)fullOcclusion;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToOcclusion:(id)arg1;
- (struct CGRect)CGRect;
- (id)init;
- (id)_initWithCGRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

