//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString;

@protocol GEOSearchAttributionServerProxy <NSObject>
- (void)loadAttributionInfoForIdentifier:(NSString *)arg1 version:(unsigned int)arg2 completionHandler:(void (^)(GEOSearchAttributionInfo *, _Bool))arg3 errorHandler:(void (^)(NSError *))arg4;
@end

