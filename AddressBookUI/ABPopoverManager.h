//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/UIActionSheetDelegate-Protocol.h>
#import <AddressBookUI/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIActionSheet, UIBarButtonItem, UIPopoverController, UIResponder, UIView, UIWindow;
@protocol ABPopoverRepresentDelegate;

@interface ABPopoverManager : NSObject <UIPopoverControllerDelegate, UIActionSheetDelegate>
{
    UIView *_autorotateView;
    UIResponder *_autorotateResponder;
    UIBarButtonItem *_autorotateBarButtonItem;
    unsigned long long _autorotateDirections;
    UIPopoverController *_autorotatePopoverController;
    UIActionSheet *_autorotateActionSheet;
    id <ABPopoverRepresentDelegate> _representDelegate;
    id _realDelegate;
    _Bool _rotating;
}

+ (void)stopAutorotatePresenter:(id)arg1;
+ (void)popoverController:(id)arg1 dismissPopoverAnimated:(_Bool)arg2;
+ (void)popoverController:(id)arg1 presentPopoverFromView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4 representDelegate:(id)arg5;
+ (void)popoverController:(id)arg1 presentPopoverFromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5;
+ (void)dismissPopoverForActionSheet:(id)arg1;
+ (void)actionSheet:(id)arg1 dismissWithClickedButtonIndex:(long long)arg2 animated:(_Bool)arg3;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(_Bool)arg3 autorotate:(_Bool)arg4;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(_Bool)arg3 autorotate:(_Bool)arg4;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4 autorotate:(_Bool)arg5;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(_Bool)arg4 direction:(unsigned long long)arg5 autorotate:(_Bool)arg6;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(_Bool)arg3;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(_Bool)arg4;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect)arg2 inView:(id)arg3 direction:(unsigned long long)arg4 animated:(_Bool)arg5;
+ (_Bool)resignFirstResponderIfNeeded;
+ (void)removeManagerForPresenter:(id)arg1;
+ (id)managerForPresenter:(id)arg1;
@property(retain, nonatomic) id <ABPopoverRepresentDelegate> representDelegate; // @synthesize representDelegate=_representDelegate;
@property(retain, nonatomic) id realDelegate; // @synthesize realDelegate=_realDelegate;
@property(retain, nonatomic) UIActionSheet *autorotateActionSheet; // @synthesize autorotateActionSheet=_autorotateActionSheet;
@property(retain, nonatomic) UIPopoverController *autorotatePopoverController; // @synthesize autorotatePopoverController=_autorotatePopoverController;
@property(nonatomic) unsigned long long autorotateDirrections; // @synthesize autorotateDirrections=_autorotateDirections;
@property(retain, nonatomic) UIBarButtonItem *autorotateBarButtonItem; // @synthesize autorotateBarButtonItem=_autorotateBarButtonItem;
@property(retain, nonatomic) UIResponder *autorotateResponder; // @synthesize autorotateResponder=_autorotateResponder;
@property(retain, nonatomic) UIView *autorotateView; // @synthesize autorotateView=_autorotateView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)startAutorotateActionSheet:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)startAutorotateActionSheet:(id)arg1 fromView:(id)arg2;
- (void)stopAutorotate;
- (void)revertDelegate;
- (void)startAutorotatePopoverController:(id)arg1 showFromView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 representDelegate:(id)arg4;
- (_Bool)autorotates;
- (id)delegateOwner;
@property(readonly, nonatomic) UIWindow *observedWindow;
- (void)stopObservingRotation;
- (void)startObservingRotationOfWindow:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)windowWillRotate:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
