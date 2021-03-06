//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSScene.h>

#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class CADisplay, FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, FBSSerialQueue, NSMutableArray, NSObject, NSString;
@protocol FBSSceneDelegate, FBSSceneUpdater, OS_dispatch_queue;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate>
{
    id <FBSSceneDelegate> _delegate;
    NSString *_identifier;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    id <FBSSceneUpdater> _updater;
    CADisplay *_display;
    FBSDisplay *_fbsDisplay;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_layers;
    _Bool _shouldObserveLayers;
}

- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (_Bool)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_queue_configureReceivedActions:(id)arg1;
- (void)_performDelegateCallOut:(CDUnknownBlockType)arg1;
- (void)_queue_invalidate;
- (void)_updateLayer:(id)arg1;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)fbsDisplay;
- (id)display;
- (id)contexts;
- (id)layers;
- (id)clientSettings;
- (id)settings;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)identifier;
- (void)dealloc;
- (id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 display:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7;
- (id)_initWithCallOutQueue:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (id)_initWithWorkspace:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

