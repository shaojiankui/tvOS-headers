//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SUSplitView : UIView
{
    UIView *_firstView;
    long long _layoutType;
    double _minimumPaneSize;
    UIView *_secondView;
    double _splitPosition;
    _Bool _vertical;
}

@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double splitPosition; // @synthesize splitPosition=_splitPosition;
@property(retain, nonatomic) UIView *secondView; // @synthesize secondView=_secondView;
@property(nonatomic) double minimumPaneSize; // @synthesize minimumPaneSize=_minimumPaneSize;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) UIView *firstView; // @synthesize firstView=_firstView;
- (double)_minimumPaneSizeForLayout;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

