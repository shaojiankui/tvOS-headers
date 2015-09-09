//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPaymentServiceExportedInterface-Protocol.h>
#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSString, PKFieldProperties, PKPaymentWebServiceContext, PKXPCService;
@protocol PKPaymentServiceDelegate;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    id <PKPaymentServiceDelegate> _delegate;
}

+ (_Bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
@property(nonatomic) id <PKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sharedPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_defaultPaymentPassUniqueIdentifier:(CDUnknownBlockType)arg1;
- (void)_paymentDeviceFieldPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property(retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property(readonly, nonatomic) PKFieldProperties *paymentDeviceFieldProperties;
- (void)passbookUIServiceDidLaunch;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)scheduleSetupReminders;
- (void)consistencyCheck;
- (void)downloadAllPaymentPasses;
- (void)simulatePaymentPush;
- (void)markAllPaymentApplicationsForDelete;
- (void)initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteMessageWithIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
