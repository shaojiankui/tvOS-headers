//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class QLScrubView, QLThumbnailOperation;

@protocol QLScrubViewDataSource
- (struct CGSize)scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (QLThumbnailOperation *)scrubView:(QLScrubView *)arg1 thumbnailOperationForPageAtIndex:(unsigned long long)arg2;
- (long long)numberOfPagesInScrubView:(QLScrubView *)arg1;
@end

