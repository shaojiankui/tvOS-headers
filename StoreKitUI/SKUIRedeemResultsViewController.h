//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIRedeemResultsViewDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIGiftItemView, SKUIItemStateCenter, SKUIRedeem, SKUIRedeemITunesPassLockup, SKUIRedeemResultMessageView, SKUITextBoxView, SKUITextLayout, UIButton, UIImage, UIImageView;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>
{
    UIButton *_anotherButton;
    _Bool _extendedMessageIsExpanded;
    SKUITextLayout *_extendedMessageTextLayout;
    SKUITextBoxView *_extendedMessageView;
    UIImageView *_headerImageView;
    UIImage *_itemImage;
    SKUIItemStateCenter *_itemStateCenter;
    SKUIGiftItemView *_itemView;
    SKUIRedeemResultMessageView *_messageView;
    NSOperationQueue *_operationQueue;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    SKUIRedeem *_redeem;
    long long _redeemCategory;
}

@property(readonly, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
- (void).cxx_destruct;
- (void)_setHeaderImage:(id)arg1;
- (void)_setItemImage:(id)arg1;
- (void)_reloadSections;
- (double)_tableWidth;
- (void)_reloadResultViewMessage;
- (id)_passbookLearnMoreSection;
- (id)_itemView;
- (id)_item;
- (id)_linksSection;
- (id)_resultImageViewSection;
- (id)_messageViewSection;
- (id)_itemViewSection;
- (id)_headerImageViewSection;
- (id)_extendedMessageViewSection;
- (id)_emptySection;
- (id)_anotherButtonSection;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_openAction:(id)arg1;
- (void)_extendedMessageAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
