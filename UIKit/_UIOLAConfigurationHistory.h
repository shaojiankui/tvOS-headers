//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UILAConfigurationHistory.h>

#import <UIKit/_UIOLAPropertySource-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource>
{
    _Bool _baselineRelativeArrangement;
    _Bool _itemOrderingChanged;
    _Bool _itemFittingSizeChanged;
    _Bool _hasEstablishedOrderingValues;
    _Bool _inOrderedArrangementUpdateSection;
    double _spacing;
    long long _distribution;
    double _proportionalFillDenominator;
}

@property(nonatomic) double proportionalFillDenominator; // @synthesize proportionalFillDenominator=_proportionalFillDenominator;
@property(nonatomic, getter=isInOrderedArrangementUpdateSection) _Bool inOrderedArrangementUpdateSection; // @synthesize inOrderedArrangementUpdateSection=_inOrderedArrangementUpdateSection;
@property(nonatomic) _Bool hasEstablishedOrderingValues; // @synthesize hasEstablishedOrderingValues=_hasEstablishedOrderingValues;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged; // @synthesize _itemOrderingChanged;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(nonatomic) long long axis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(readonly) Class superclass;

@end

