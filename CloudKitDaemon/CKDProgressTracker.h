//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CKDProgressTracker : NSObject
{
    _Bool _hasCachedTotalBytes;
    _Bool _hasCachedCompletedBytes;
    double _lastItemPercentage;
    unsigned long long _cachedTotalBytes;
    unsigned long long _cachedCompletedBytes;
    NSMapTable *_completedBytesByItems;
    NSString *_trackingID;
}

+ (unsigned long long)_sizeForItem:(id)arg1;
@property(retain, nonatomic) NSString *trackingID; // @synthesize trackingID=_trackingID;
@property(retain, nonatomic) NSMapTable *completedBytesByItems; // @synthesize completedBytesByItems=_completedBytesByItems;
@property(nonatomic) unsigned long long cachedCompletedBytes; // @synthesize cachedCompletedBytes=_cachedCompletedBytes;
@property(nonatomic) unsigned long long cachedTotalBytes; // @synthesize cachedTotalBytes=_cachedTotalBytes;
@property(nonatomic) _Bool hasCachedCompletedBytes; // @synthesize hasCachedCompletedBytes=_hasCachedCompletedBytes;
@property(nonatomic) _Bool hasCachedTotalBytes; // @synthesize hasCachedTotalBytes=_hasCachedTotalBytes;
@property(nonatomic) double lastItemPercentage; // @synthesize lastItemPercentage=_lastItemPercentage;
- (void).cxx_destruct;
- (double)updateProgressWithItem:(id)arg1 progress:(double)arg2;
- (unsigned long long)_updateTotalCompletedBytes;
- (unsigned long long)_updateTotalBytes;
- (void)stopTrackingItems:(id)arg1;
- (void)startTrackingItems:(id)arg1;
- (id)initWithTrackingID:(id)arg1;
- (id)init;

@end
