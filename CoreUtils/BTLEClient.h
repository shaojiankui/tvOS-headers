//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheral, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BTLEClient : NSObject <CBCentralManagerDelegate>
{
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_accessoryInfo;
    CDUnknownBlockType _connectHandler;
    CDUnknownBlockType _disconnectHandler;
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    _Bool _connectPending;
    NSMutableArray *_transactionQueue;
}

@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType connectHandler; // @synthesize connectHandler=_connectHandler;
@property(copy, nonatomic) NSDictionary *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(nonatomic) struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_processTransactions;
- (void)writeData:(id)arg1 requestCharacteristic:(id)arg2 responseCharacteristic:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)writeData:(id)arg1 characteristic:(id)arg2 writeHandler:(CDUnknownBlockType)arg3;
- (void)readDataForCharacteristic:(id)arg1 readHandler:(CDUnknownBlockType)arg2;
- (void)_disconnect;
- (void)disconnect;
- (void)_connect2;
- (void)_connect;
- (void)connect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

