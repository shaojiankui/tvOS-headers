//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADAdRecipient-Protocol.h>
#import <iAd/ADDimmerViewDelegate-Protocol.h>

@class ADAdSpace, NSString, NSTimer, NSURL, UIViewController;
@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate>
{
    id <ADBannerViewDelegate> _weakDelegate;
    id <ADBannerViewInternalDelegate> _weakInternalDelegate;
    _Bool _bannerViewActionInProgress;
    _Bool _createdForIBInternal;
    _Bool _dimmed;
    _Bool _determiningConstraintBasedWidth;
    _Bool _inSecondConstraintsPass;
    int _internalAdType;
    long long _options;
    long long _adType;
    NSString *_advertisingSection;
    UIView *_highlightClippedView;
    UIView *_highlightHittableView;
    NSTimer *_highlightUpdateTimer;
    NSString *_authenticationUserName;
    NSURL *_serverURL;
    ADAdSpace *_adSpace;
    double _constraintBasedWidth;
}

+ (struct CGSize)_sizeThatFitsSize:(struct CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(_Bool)arg3;
+ (struct CGRect)_frameThatFits:(struct CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(_Bool)arg3;
+ (struct CGSize)_landscapeBannerSize;
+ (struct CGSize)_portraitBannerSize;
+ (struct CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1;
+ (void)setServerURL:(id)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool inSecondConstraintsPass; // @synthesize inSecondConstraintsPass=_inSecondConstraintsPass;
@property(nonatomic) double constraintBasedWidth; // @synthesize constraintBasedWidth=_constraintBasedWidth;
@property(nonatomic) _Bool determiningConstraintBasedWidth; // @synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property(readonly, nonatomic) _Bool createdForIBInternal; // @synthesize createdForIBInternal=_createdForIBInternal;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(retain, nonatomic) NSTimer *highlightUpdateTimer; // @synthesize highlightUpdateTimer=_highlightUpdateTimer;
@property(retain, nonatomic) UIView *highlightHittableView; // @synthesize highlightHittableView=_highlightHittableView;
@property(retain, nonatomic) UIView *highlightClippedView; // @synthesize highlightClippedView=_highlightClippedView;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(nonatomic, getter=isBannerViewActionInProgress) _Bool bannerViewActionInProgress; // @synthesize bannerViewActionInProgress=_bannerViewActionInProgress;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) int internalAdType; // @synthesize internalAdType=_internalAdType;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
- (void)userDidSkipPreroll;
- (id)context;
- (void)setContext:(id)arg1;
- (void)loadAd:(id)arg1;
- (id)publicImpressionAttributes;
- (void)scheduleAd;
- (void)cancelScheduledAd;
- (id)nativeMetadata;
- (void)bannerDidDisappear;
- (void)bannerDidAppear;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (void)playbackStarted;
- (id)descriptionForLCD;
- (id)headlineForLCD;
- (id)logoImageURL;
- (id)staticImageURL;
- (id)videoAssets;
- (id)audioURL;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (_Bool)hasAction;
- (int)action;
- (double)skipThreshold;
- (void)resumeImpressionCycling;
- (void)suspendImpressionCycling;
- (void)setInternalDelegate:(id)arg1;
- (id)internalDelegate;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)cancelBannerViewAction;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)currentContentSizeIdentifier;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (id)requiredContentSizeIdentifiers;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
@property(nonatomic) __weak id <ADBannerViewDelegate> delegate;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)_resetHighlightTimer;
- (void)_updateHighlight:(id)arg1;
- (void)layoutSubviews;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)beginAction;
- (_Bool)enableDimmerView:(id)arg1;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (void)didMoveToWindow;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)prerollDidStop;
- (void)prerollDidStart;
- (id)uniqueIdentifier;
@property(readonly, nonatomic, getter=isBannerLoaded) _Bool bannerLoaded;
- (void)cycleImpressionImmediately;
- (void)encodeWithCoder:(id)arg1;
- (id)_accessibilityUserTestingElementAttributes;
@property(readonly, nonatomic) UIView *adSpaceView;
- (void)_commonInit;
- (id)initFromIBWithFrame:(struct CGRect)arg1 adType:(long long)arg2;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithInternalAdType:(int)arg1 options:(long long)arg2;
- (id)initWithAdType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

