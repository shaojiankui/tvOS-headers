//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataImageCache.h>

@class NSMutableDictionary, NSMutableSet;

@interface WBSTouchIconCache : WBSSiteMetadataImageCache
{
    NSMutableDictionary *_touchIconsDataForHosts;
    NSMutableSet *_pendingTouchIconRequestHosts;
}

+ (const char *)diskAccessQueueName;
- (void).cxx_destruct;
- (void)willSaveTouchIcon:(id)arg1 withData:(id)arg2;
- (void)didLoadTouchIcon:(id)arg1 withData:(id)arg2;
- (void)didRemoveImageForKeyString:(id)arg1 type:(long long)arg2;
- (void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(long long)arg3;
- (void)didFinishLoadingSettings;
- (void)_upgradeCacheVersionIfNeeded;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(_Bool)arg3 isUserLoadedWebpageRequest:(_Bool)arg4;
- (_Bool)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(_Bool)arg2;
- (_Bool)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)retainTouchIconForHost:(id)arg1;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (void)saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(_Bool)arg3 isUserLoadedWebpageRequest:(_Bool)arg4;
- (id)touchIconForURL:(id)arg1;
- (id)initWithImageDirectoryURL:(id)arg1;

@end

