//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTTapAuthorizedAPI-Protocol.h>

@class DTTapServiceGuarded, NSRecursiveLock, NSString;

@interface DTTapService : DTXService <DTTapAuthorizedAPI>
{
    NSRecursiveLock *_lock;
    DTTapServiceGuarded *_lockedObj;
}

- (void).cxx_destruct;
- (id)_didStop:(id)arg1;
- (id)_willStart:(id)arg1;
- (_Bool)_validateConfig:(id)arg1;
- (void)fetchDataNow;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)setConfig:(id)arg1;
- (id)_createConfigWithPlist:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (Class)_guardedClass;
- (void)_Access:(CDUnknownBlockType)arg1;
- (void)_SendMsg:(id)arg1 toChannel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

