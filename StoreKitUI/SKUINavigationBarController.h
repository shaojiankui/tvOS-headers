//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIButtonViewElement, SKUIClientContext, SKUINavigationBarButtonsController, SKUINavigationBarContext, SKUINavigationBarViewElement, SKUINavigationPaletteController, UIView, UIViewController;
@protocol SKUINavigationBarControllerDelegate;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate>
{
    SKUINavigationBarButtonsController *_buttonsController;
    SKUIClientContext *_clientContext;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUINavigationBarViewElement *_viewElement;
    SKUIButtonViewElement *_titleButtonViewElement;
    id <SKUINavigationBarControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUINavigationBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_viewElement;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_titleButtonAction:(id)arg1;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)_navigationBarContext;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (id)_buttonWithElement:(id)arg1 width:(double)arg2;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (double)_availableWidth;
- (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3;
- (id)_attributedStringForButton:(id)arg1;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (void)_viewElementEventNotification:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (id)titleViewWithViewElement:(id)arg1;
- (void)setReusableSearchBarControllers:(id)arg1;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (id)fallbackTitleView;
@property(readonly, nonatomic) NSArray *existingSearchBarControllers;
- (void)detachFromNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)attachToNavigationItem:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationBarViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

