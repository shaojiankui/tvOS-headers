//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <StoreKitUI/SKUIShelfCollectionViewLayout-Protocol.h>

@class NSString, SKUIShelfLayoutData;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout>
{
    SKUIShelfLayoutData *_layoutData;
}

+ (Class)layoutAttributesClass;
+ (_Bool)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;
@property(retain, nonatomic) SKUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
- (void).cxx_destruct;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

