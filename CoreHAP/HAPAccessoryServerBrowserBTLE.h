//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import <CoreHAP/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate>
{
    _Bool _performingGeneralScan;
    id <HAPAccessoryServerBrowserBTLEDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CBCentralManager *_centralManager;
    NSMapTable *_discoveredPeripheralsWithAccessories;
    NSMapTable *_recentlySeenPairedPeripherals;
    NSObject<OS_dispatch_source> *_lostAccessoryServerTimer;
    NSMutableArray *_powerOnCentralManagerCompletions;
    CDUnknownBlockType _reachabilityCompletion;
    NSMapTable *_peripheralsWithConnectionRequestTuples;
    NSObject<OS_dispatch_source> *_targetedScanTimer;
    NSMutableArray *_targetedScanAccessoryIdentifiers;
    NSMapTable *_identifersWithReachabilityScanTuples;
}

@property(retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples; // @synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples;
@property(retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers; // @synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer; // @synthesize targetedScanTimer=_targetedScanTimer;
@property(retain, nonatomic) NSMapTable *peripheralsWithConnectionRequestTuples; // @synthesize peripheralsWithConnectionRequestTuples=_peripheralsWithConnectionRequestTuples;
@property(copy, nonatomic) CDUnknownBlockType reachabilityCompletion; // @synthesize reachabilityCompletion=_reachabilityCompletion;
@property(retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions; // @synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions;
@property(nonatomic, getter=isPerformingGeneralScan) _Bool performingGeneralScan; // @synthesize performingGeneralScan=_performingGeneralScan;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *lostAccessoryServerTimer; // @synthesize lostAccessoryServerTimer=_lostAccessoryServerTimer;
@property(retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals; // @synthesize recentlySeenPairedPeripherals=_recentlySeenPairedPeripherals;
@property(retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories; // @synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserBTLEDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeLostAccessoryServers;
- (void)_cancelLostAccessoryServerTimer;
- (void)_setupLostAccessoryServerTimer;
- (void)_handleTargetedScanTimeout;
- (void)_updateTargetedScanTimer;
- (_Bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 forPeripheral:(id)arg6;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;
- (void)_handleConnectionRequestCompletionForPeripheral:(id)arg1;
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 version:(unsigned long long)arg7;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1;
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_removeIdentifiersForReachabilityScan;
- (void)_forgetPairedAccesoryWithIdentifier:(id)arg1;
- (void)forgetPairedAccesoryWithIdentifier:(id)arg1;
- (void)_clearCachedDescriptorsForIdentifier:(id)arg1;
- (void)updateCacheWithDescriptor:(id)arg1;
- (id)cachedDescriptorsForCharacteristic:(id)arg1;
- (void)markNotifyingCharacteristicUpdatedOnPeripheral:(id)arg1;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setReachabilityCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_callPowerOnCompletionsWithError:(id)arg1;
- (void)_powerOnCentralManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startScanningForPairingPeers;
- (void)_stopActiveScan;
- (void)stopDiscoveringAccessoryServers;
- (void)_startDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id *)arg3 pairingUsername:(id *)arg4 statusFlags:(id *)arg5 stateNumber:(id *)arg6 category:(id *)arg7 configNumber:(id *)arg8;
- (unsigned long long)_parseManufacturerSpecificData:(id)arg1 reservedByte:(id *)arg2 configNumber:(id *)arg3 pairingStatusFlag:(id *)arg4 stateNumber:(id *)arg5 uniqueIdentifier:(id *)arg6 category:(id *)arg7;
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;
- (void)connectToBTLEAccessoryServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
