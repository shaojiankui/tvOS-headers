//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;
@protocol OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
@property(copy) NSDictionary *nowPlayingInfo;
- (void)_pushNowPlayingInfoAndRetry:(_Bool)arg1;
- (id)init;
- (id)_init;

@end
