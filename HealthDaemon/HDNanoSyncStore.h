//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>

@class HDNanoPairingEntity, NRDevice, NSString, NSUUID;
@protocol HDHealthDaemon, HDNanoSyncStoreDelegate;

@interface HDNanoSyncStore : NSObject <HDSyncStore>
{
    _Bool _isMaster;
    int _protocolVersion;
    id <HDNanoSyncStoreDelegate> _delegate;
    NRDevice *_nanoRegistryDevice;
    NSString *_remoteSystemBuildVersion;
    NSString *_remoteProductType;
    NSString *_sourceBundleIdentifier;
    NSString *_storagePath;
    id <HDHealthDaemon> _healthDaemon;
    HDNanoPairingEntity *_pairingEntity;
}

+ (id)_version3SyncEntityClassesForCompanion:(_Bool)arg1;
+ (id)_version2SyncEntityClassesForCompanion:(_Bool)arg1;
+ (id)nanoSyncStoreWithRegistryDevice:(id)arg1 delegate:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(retain, nonatomic) HDNanoPairingEntity *pairingEntity; // @synthesize pairingEntity=_pairingEntity;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, copy, nonatomic) NSString *storagePath; // @synthesize storagePath=_storagePath;
@property(readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *remoteProductType; // @synthesize remoteProductType=_remoteProductType;
@property(readonly, copy, nonatomic) NSString *remoteSystemBuildVersion; // @synthesize remoteSystemBuildVersion=_remoteSystemBuildVersion;
@property(readonly, nonatomic) NRDevice *nanoRegistryDevice; // @synthesize nanoRegistryDevice=_nanoRegistryDevice;
@property(readonly, nonatomic) __weak id <HDNanoSyncStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool shouldSynthesizeProvenance;
- (id)restoreSyncEntities;
- (id)_syncEntitiesForCompanion:(_Bool)arg1;
- (id)syncEntities;
- (unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;
- (void)syncDidFinishWithSuccess:(_Bool)arg1 error:(id)arg2 context:(id)arg3;
- (void)sendChange:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
@property(readonly, nonatomic) NSString *syncStoreDefaultSourceBundleIdentifier;
@property(readonly, nonatomic) NSUUID *syncStoreDefaultSourceUUID;
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
@property(readonly, nonatomic) long long syncProvenance;
- (_Bool)validatePairingUUIDsWithIncomingMessage:(id)arg1;
- (_Bool)validateVersionWithIncomingMessage:(id)arg1;
- (_Bool)_savePairingEntity;
@property(nonatomic, getter=isActivated) _Bool activated;
@property(retain, nonatomic) NSUUID *persistentUUID;
@property(retain, nonatomic) NSUUID *healthUUID;
@property(readonly, nonatomic) NSUUID *nanoRegistryUUID;
- (id)_initWithNanoRegistryDevice:(id)arg1 pairingEntity:(id)arg2 sourceIdentifier:(id)arg3 delegate:(id)arg4 healthDaemon:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
