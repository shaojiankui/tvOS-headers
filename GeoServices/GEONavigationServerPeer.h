//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

@class GEONavigationServer;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer
{
    GEONavigationServer *_delegate;
}

@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)requestUpdates;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;

@end

