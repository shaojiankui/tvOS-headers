//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEONavdClientInfo, GEORouteHypothesis, NSArray, NSData, NSString;

@protocol GEONavdProxyObserver
- (void)navdProxyReceivedSuggestions:(NSArray *)arg1 forClient:(GEONavdClientInfo *)arg2;
- (void)navdProxyReceivedHypothesis:(GEORouteHypothesis *)arg1 forClient:(GEONavdClientInfo *)arg2;
- (void)navdProxyReceivedData:(NSData *)arg1 ofType:(NSString *)arg2;
@end
