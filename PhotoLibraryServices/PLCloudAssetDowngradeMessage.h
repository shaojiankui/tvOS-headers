//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLManagedAsset;

@interface PLCloudAssetDowngradeMessage : NSObject
{
    unsigned short _current;
    unsigned short _desired;
    PLManagedAsset *_asset;
}

@property(readonly, nonatomic) unsigned short desired; // @synthesize desired=_desired;
@property(readonly, nonatomic) unsigned short current; // @synthesize current=_current;
@property(readonly, retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 fromQuality:(unsigned short)arg2 toQuality:(unsigned short)arg3;

@end
