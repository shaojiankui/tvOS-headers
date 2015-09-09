//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDAccountStoreDelegate-Protocol.h>
#import <AccountsDaemon/NSXPCListenerDelegate-Protocol.h>

@class ACDAccessPluginManager, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDDataclassOwnersManager, ACRemoteDeviceProxy, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate>
{
    NSXPCListener *_accountStoreListener;
    NSXPCListener *_oauthSignerListener;
    NSXPCListener *_authenticationDialogListener;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_entitlementsByConnection;
    NSMutableDictionary *_clientsByConnection;
    NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
}

+ (id)sharedServer;
@property(retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property(retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLaunchNotifications;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (void)accountStoreDidSaveAccounts:(id)arg1;
- (void)_stopObservingLanguageChangeNotification;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (id)_newOAuthSignerForClient:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)createClientForConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_enumerateAllEntitlementForConnection:(id)arg1;
- (id)_keyForConnection:(id)arg1;
- (id)entitlementsForConnection:(id)arg1;
- (id)clientForConnection:(id)arg1;
- (void)shutdown;
- (void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2 authenticationDialogConnectionListener:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
