//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import <CoreHAP/HAPTimerDelegate-Protocol.h>

@class HAPTimer, NSMutableSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPTimerDelegate>
{
    struct BonjourBrowser *_bonjourBrowser;
    NSMutableSet *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_pendingBonjourEvents;
    HAPTimer *_bonjourEventTimer;
}

@property(retain, nonatomic) HAPTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property(retain, nonatomic) NSMutableSet *pendingBonjourEvents; // @synthesize pendingBonjourEvents=_pendingBonjourEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
- (void).cxx_destruct;
- (void)_timerDidExpire:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(_Bool)arg2;
- (void)_processPendingBonjourEvent:(id)arg1;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_setReachability:(_Bool)arg1 forServer:(id)arg2;
- (void)_invalidateUnpairedAccessoryServers;
- (int)_server:(id *)arg1 forBonjourDevice:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (int)_initializeAndStartBonjourBrowser;
- (long long)linkType;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

