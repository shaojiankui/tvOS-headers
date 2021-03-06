//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertClient : FBSSystemServiceFacilityClient
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_handleObserverQueue;
    NSMapTable *_portToHandleMap;
    NSMapTable *_portToDeathWatcherMap;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handleObserverQueue; // @synthesize handleObserverQueue=_handleObserverQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_queue_removeHandleForTokenStore:(CDUnion_be1a21fc)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (id)_queue_addHandleForToken:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)queue_invalidateRemoteAlertForHandle:(id)arg1;
- (void)queue_activateRemoteAlertForHandle:(id)arg1 withOptions:(id)arg2;
- (id)queue_newHandleForRemoteAlertWithConfiguration:(id)arg1;
- (void)queue_lookupHandlesForRemoteAlertWithConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end

