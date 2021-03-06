//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUILoaderDelegate-Protocol.h>
#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class NSMutableArray, NSString, NSURL, RUILoader, RUIPage, UIActivityIndicatorView, UIBarButtonItem, UINavigationController, UINavigationItem, UIViewController;
@protocol AAUICredentialRecoveryPresentationDelegate;

@interface AAUICredentialRecoveryController : NSObject <RUIObjectModelDelegate, RUILoaderDelegate>
{
    NSURL *_remoteUIURL;
    RUILoader *_remoteUILoader;
    RUIPage *_loadingPage;
    NSMutableArray *_objectModels;
    UINavigationController *_navigationController;
    UIViewController *_presentationViewController;
    UIViewController *_navigationBaseViewController;
    _Bool _isModal;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    _Bool _isShowingSpinner;
    NSObject<AAUICredentialRecoveryPresentationDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<AAUICredentialRecoveryPresentationDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)_displayConnectionError;
- (void)_cleanupLoader;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_finishPresentationWithSuccess:(_Bool)arg1;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_createRemoteUIViewControllerFromURL:(id)arg1;
- (void)cancelPresentation;
- (void)startPresentation;
- (id)remoteUIURL;
- (id)initWithRemoteUIURL:(id)arg1 modalPresentation:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

