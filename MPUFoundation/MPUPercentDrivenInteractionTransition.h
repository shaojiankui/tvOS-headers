//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class CADisplayLink, NSArray, NSUUID;

@interface MPUPercentDrivenInteractionTransition : UIPercentDrivenInteractiveTransition
{
    CADisplayLink *_displayLink;
    NSUUID *_transitionUUID;
    NSArray *_persistentAnimationLayers;
}

@property(retain, nonatomic) NSArray *persistentAnimationLayers; // @synthesize persistentAnimationLayers=_persistentAnimationLayers;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)tick:(id)arg1;
- (void)stopInteractiveTransition;
- (void)startInteractiveTransition:(id)arg1;
- (void)finishInteractiveTransition;
- (void)finalizeInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)dealloc;

@end

