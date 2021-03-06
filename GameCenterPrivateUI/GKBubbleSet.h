//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKBubbleFlowBubbleControl, NSArray, NSString;

@interface GKBubbleSet : NSObject
{
    GKBubbleFlowBubbleControl *_bubbleControls[12];
    long long _supportedBubbles;
    NSString *_debuggingTag;
}

+ (id)setWithBubbleControls:(id)arg1;
+ (id)setWithBubbleTypes:(long long)arg1;
@property(retain, nonatomic) NSString *debuggingTag; // @synthesize debuggingTag=_debuggingTag;
@property(nonatomic) long long supportedBubbles; // @synthesize supportedBubbles=_supportedBubbles;
- (void)animateOutWithFocus:(long long)arg1 viewsToFadeOut:(id)arg2 effectiveView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAllContentAlpha:(double)arg1;
- (void)hideAllBubbleControls;
- (void)updateBubbleVisibilityAccordingToSupportedBubblesMask;
- (void)syncBubbleMeshAnimationStateFromSet:(id)arg1;
@property(readonly, nonatomic) NSArray *bubbleControls;
- (id)bubbleForType:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)subsetWithBubbleTypes:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

