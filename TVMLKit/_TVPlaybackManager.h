//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TVPlayer;

__attribute__((visibility("hidden")))
@interface _TVPlaybackManager : NSObject
{
    _TVPlayer *_presentedPlayer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_viewControllerForPlayer:(id)arg1 remove:(_Bool)arg2;
- (void)_playbackStateDidChange:(id)arg1;
- (id)viewControllerForPlayer:(id)arg1;
- (void)presentWithPlayer:(id)arg1;

@end

