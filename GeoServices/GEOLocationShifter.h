//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOLocationShiftFunctionRequest, NSCache, NSLock, NSMutableArray, NSString;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _isRequestingShiftFunction;
    GEOLocationShiftFunctionRequest *_shiftRequest;
    NSLock *_lock;
    NSMutableArray *_locationsToShift;
    NSCache *_shiftFunctionCache;
}

+ (_Bool)isLocationShiftEnabled;
+ (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (unsigned int)locationShiftFunctionVersion;
@property(retain, nonatomic) GEOLocationShiftFunctionRequest *shiftRequest; // @synthesize shiftRequest=_shiftRequest;
- (_Bool)_shiftLocation:(id)arg1;
- (_Bool)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_requestNextShiftFunctionIfNecessary;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_reset;
@property(readonly, nonatomic) _Bool locationShiftEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
