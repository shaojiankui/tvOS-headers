//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TVSPlayback;

@interface TVMusicPlayerManager : NSObject
{
    id <TVSPlayback> _player;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <TVSPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dataClientDidDisconnect:(id)arg1;

@end
