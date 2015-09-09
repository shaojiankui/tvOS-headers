//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject
{
    NSObject<OS_xpc_object> *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    _Bool _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    _Bool _didWait;
    _Bool _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSMutableSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;
    _Bool _hasInvokedClaimer;
    id _claimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
}

+ (_Bool)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3;
+ (_Bool)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3;
+ (_Bool)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (_Bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
@property(readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;
- (id)allURLs;
- (void)finished;
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (_Bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (_Bool)isRevoked;
- (_Bool)isGranted;
- (void)devalueOldClaim:(id)arg1;
- (void)cancelled;
- (void)devalueSelf;
- (void)revoked;
- (void)invokeClaimer;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (_Bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)canAccessLocations:(id)arg1 forReading:(_Bool)arg2 error:(id *)arg3;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(_Bool)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)granted;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)removePendingClaims:(id)arg1;
- (id)pendingClaims;
- (void)addPendingClaim:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (void)scheduleBlockedClaim:(id)arg1;
- (_Bool)isBlockedByClaimWithPurposeID:(id)arg1;
- (_Bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (id)claimerError;
- (void)setClaimerError:(id)arg1;
- (void)unblockClaimerForReason:(id)arg1;
- (void)blockClaimerForReason:(id)arg1;
- (_Bool)didWait;
- (void)unblock;
- (void)block;
- (void)startObservingClientState;
- (_Bool)cameFromSuperarbiter;
- (void)setCameFromSuperarbiter;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (int)clientProcessIdentifier;
- (id)purposeID;
- (id)claimID;
- (id)client;
- (void)finalize;
- (void)dealloc;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(CDUnknownBlockType)arg4;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 arbiterQueue:(id)arg4;
- (_Bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;

@end
