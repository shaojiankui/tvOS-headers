//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEORouteMapMatcher.h>

__attribute__((visibility("hidden")))
@interface GEORouteWalkMapMatcher : GEORouteMapMatcher
{
}

- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousMatchGood:(_Bool)arg3;
- (CDStruct_7233881d)_determineBestMatch:(const CDStruct_7233881d *)arg1 trackedLocation:(id)arg2 rawLocation:(id)arg3;
- (CDStruct_7233881d)_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4;

@end

