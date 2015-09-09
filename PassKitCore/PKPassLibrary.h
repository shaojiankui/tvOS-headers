//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPassLibraryExportedInterface-Protocol.h>

@class PKAsyncCache, PKXPCService;
@protocol NSObject, PKPassLibraryDelegate;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface>
{
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id <NSObject> _remoteLibraryObserver;
    PKAsyncCache *_libraryCache;
    _Bool _usesExtendedInterface;
    id <PKPassLibraryDelegate> _delegate;
}

+ (_Bool)isSuppressingAutomaticPassPresentation;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
+ (_Bool)isPaymentPassActivationAvailable;
+ (_Bool)isPassLibraryAvailable;
@property(nonatomic) id <PKPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_errorHandlerWithSemaphore:(id)arg1;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)fetchCurrentRelevantPassInfo:(CDUnknownBlockType)arg1;
- (void)fetchHasCandidatePasses:(CDUnknownBlockType)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withRetries:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (void)noteAccountDeleted;
- (void)noteAccountChanged;
- (void)logDelayExitReasons;
- (void)shuffleGroups:(int)arg1;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (_Bool)migrateData;
- (_Bool)_hasRemoteLibrary;
- (_Bool)isPaymentPassActivationAvailable;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removePass:(id)arg1;
- (void)requestUpdateOfObjectWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)openPaymentSetup;
- (void)addPasses:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (_Bool)replacePassWithPass:(id)arg1;
- (_Bool)containsPass:(id)arg1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesAndCatalog:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enabledValueAddedServicePassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (_Bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (_Bool)canAddPassOfType:(unsigned long long)arg1;
- (_Bool)hasPassesOfType:(unsigned long long)arg1;
- (id)remotePaymentPasses;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passes;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 extendedInterface:(_Bool)arg3;
- (id)init;

@end
