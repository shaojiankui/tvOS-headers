//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, _UIBackdropView;

@interface TVVolumeHUDView : UIView
{
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
    UIImageView *_volumeImageView;
    UIView *_blocksContainer;
    NSMutableArray *_blockViews;
    double _alpha;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

