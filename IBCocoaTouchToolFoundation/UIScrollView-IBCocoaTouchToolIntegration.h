//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (IBCocoaTouchToolIntegration)
- (id)ibEffectiveContentHeightVariable;
- (id)ibEffectiveContentWidthVariable;
- (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)_ibShouldIgnoreScrollableContentAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (id)ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
- (id)ibExplicitCandidateConstraintGenerationMaskForChildView:(id)arg1;
- (void)awakeAfterMarshallerDidEstablishAttributesWithContext:(id)arg1;
@property struct UIEdgeInsets ibInsetAdjustments;
@property struct CGPoint ibContentOffsetAdjustment;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 marshallerClassNames:(id)arg4 andMarshallerInstantiationContexts:(id)arg5 globalMarshallingContext:(id)arg6;
@end
