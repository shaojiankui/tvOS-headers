//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVItem;

@interface MPAVControllerToAggregateDCommunicator : NSObject
{
    MPAVItem *_item;
    unsigned long long _lastMediaType;
    double _playbackStartTime;
    _Bool _playbackStartTimeIsValid;
}

- (void).cxx_destruct;
- (void)_handleItemTypeAvailableNotification:(id)arg1;
- (void)_handleItemChangedNotification:(id)arg1;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_updateLastMediaTypeForItem;
- (void)_stopPlaybackTimer;
- (void)_startPlaybackTimer;
- (void)dealloc;
- (id)init;

@end

