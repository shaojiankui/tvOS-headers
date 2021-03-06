//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVVideoNowPlayingMetadataMenuMember-Protocol.h>
#import <TVKit/TVVideoNowPlayingMetadataMenuMemberDataSourceDelegate-Protocol.h>

@class NSObject, NSString, TVVideoNowPlayingMetadataAudioDataSource, TVVideoNowPlayingMetadataCollectionViewController, TVVideoNowPlayingMetadataSoundDataSource, TVVideoNowPlayingMetadataSpeakersDataSource, UIFocusContainerGuide, UIView;
@protocol TVSPlayback;

@interface TVVideoNowPlayingMetadataAudioViewController : UIViewController <TVVideoNowPlayingMetadataMenuMember, TVVideoNowPlayingMetadataMenuMemberDataSourceDelegate>
{
    TVVideoNowPlayingMetadataAudioDataSource *_audioOptionsDataSource;
    UIView *_audioOptionsHeaderView;
    TVVideoNowPlayingMetadataCollectionViewController *_audioOptionsViewController;
    UIFocusContainerGuide *_focusGuide;
    TVVideoNowPlayingMetadataSoundDataSource *_soundDataSource;
    UIView *_soundHeaderView;
    TVVideoNowPlayingMetadataCollectionViewController *_soundViewController;
    TVVideoNowPlayingMetadataSpeakersDataSource *_speakersDataSource;
    UIView *_speakersHeaderView;
    TVVideoNowPlayingMetadataCollectionViewController *_speakersViewController;
    NSObject<TVSPlayback> *_player;
}

@property(readonly, nonatomic) NSObject<TVSPlayback> *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updateViewControllersForPlayer;
- (id)_newHeaderViewWithTitle:(id)arg1;
- (void)_routesDidChangeNotification:(id)arg1;
- (void)_currentMediaItemDidChangeNotification:(id)arg1;
- (struct CGSize)metadataMenuBackdropSize;
- (_Bool)_tvTabBarShouldAutohide;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)preferredFocusedView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 audioRoutingController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

