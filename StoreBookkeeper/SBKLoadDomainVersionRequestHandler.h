//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/SBKSyncRequestHandler.h>

#import <StoreBookkeeper/SBKSyncTransactionProcessing-Protocol.h>

@class NSString, SBKSyncTransaction;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing>
{
    _Bool _loadsRemoteItemCount;
    unsigned long long _responseItemCount;
    unsigned long long _itemCount;
    SBKSyncTransaction *_transaction;
}

+ (long long)conflictDetectionType;
@property(retain) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
@property unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly) unsigned long long responseItemCount; // @synthesize responseItemCount=_responseItemCount;
@property _Bool loadsRemoteItemCount; // @synthesize loadsRemoteItemCount=_loadsRemoteItemCount;
- (void).cxx_destruct;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *responseDomainVersion; // @dynamic responseDomainVersion;
@property(readonly) Class superclass;

@end

