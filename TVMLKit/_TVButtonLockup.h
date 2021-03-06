//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, IKViewElement, TVImageView, UILabel, _TVVibrantLabel, _UIBackdropView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVButtonLockup : UIView
{
    _UIFloatingContentView *_floatingView;
    _UIBackdropView *_backdropView;
    UIView *_overlayView;
    UILabel *_textView;
    UILabel *_textMask;
    CALayer *_imageMask;
    _TVVibrantLabel *_vibrantLabel;
    long long _backdropStyle;
    long long _textVibrancyStyle;
    TVImageView *_imageView;
    UILabel *_titleView;
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TVImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) long long textVibrancyStyle; // @synthesize textVibrancyStyle=_textVibrancyStyle;
@property(readonly, nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
- (void).cxx_destruct;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)_updateImageMask;
- (void)_imageDidLoad:(id)arg1;
- (long long)_focusedSound;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setText:(id)arg1 minimumScale:(double)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 backdropStyle:(long long)arg2 textVibrancyStyle:(long long)arg3;

@end

