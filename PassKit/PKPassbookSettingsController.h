//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPaymentPassTableCellDelegate-Protocol.h>
#import <PassKit/PKPaymentServiceDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentSetupAboutViewController, PSSpecifier;
@protocol PKPassLibraryDataProvider, PKPassbookSettingsDataSource, PKPassbookSettingsDelegate, PKPassbookSettingsOptionsDelegate, PKPaymentDataProvider;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPaymentPassTableCellDelegate>
{
    id <PKPassbookSettingsDelegate> _delegate;
    id <PKPassbookSettingsDataSource> _dataSource;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    id <PKPaymentDataProvider> _paymentDataProvider;
    id <PKPassbookSettingsOptionsDelegate> _optionsDelegate;
    long long _context;
    PKPaymentSetupAboutViewController *_privacyController;
    NSString *_defaultCardIdentifier;
    NSString *_provisioningPassIdentifier;
    NSArray *_passes;
    NSArray *_passSpecifiers;
    NSArray *_companionPasses;
    NSArray *_companionPassSpecifiers;
    NSArray *_lockscreenSwitchSpecifiers;
    PSSpecifier *_addCardButtonSpecifier;
    PSSpecifier *_cardsGroupSpecifier;
    PSSpecifier *_companionCardsGroupSpecifier;
    PSSpecifier *_defaultPaymentSpecifier;
    PSSpecifier *_defaultShippingAddressSpecifier;
    PSSpecifier *_defaultContactEmailSpecifier;
    PSSpecifier *_defaultContactPhoneSpecifier;
}

@property(nonatomic) id <PKPassbookSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addButtonPressedForPaymentPass:(id)arg1;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (id)_getDefaultContactPhone;
- (id)_getDefaultContactEmail;
- (id)_getDefaultShippingAddress;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_getDefaultPaymentCard;
- (id)_defaultPaymentSpecifier;
- (void)_openPrivacyLink;
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(_Bool)arg4;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (id)_currentDefaultPaymentPass;
- (id)_defaultsGroupSpecifiers;
- (void)_showCardDetails:(id)arg1;
- (id)_lockscreenSwitchSettingForSpecifier:(id)arg1;
- (void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (id)_lockscreenSwitchGroupSpecifiers;
- (id)_specifierForPassUniqueID:(id)arg1;
- (id)_companionPassSpecifiers;
- (id)_passSpecifiers;
- (void)_addPaymentCard;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;
- (void)addCardTapped;
- (void)removeFooterForSpecifier:(id)arg1;
- (void)refreshDefaultCard;
- (void)refreshPasses;
- (void)_reloadPassData;
- (id)specifiers;
- (id)_restrictedModeSpecifier;
- (id)_settingsSpecifiers;
- (id)_bridgeSpecifiers;
- (void)_updateCompanionGroupSpecifier;
- (void)_updateCardsGroupSpecifier;
- (void)_updateAddButtonSpecifier;
- (void)_updateCompanionPassesAddButton;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

