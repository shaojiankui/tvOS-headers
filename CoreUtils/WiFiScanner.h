//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WiFiScanner : NSObject
{
    _Bool _started;
    NSMutableSet *_devices;
    _Bool _autoPoweredOn;
    NSObject<OS_dispatch_source> *_scanTimer;
    int _stopErr;
    unsigned int _scanFlags;
    NSObject<OS_dispatch_queue> *_queue;
    struct LogCategory *_ucat;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property(nonatomic) struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (_Bool)_isUnconfiguredIE:(id)arg1;
- (void)_stop2;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)start;
@property(readonly, copy) NSSet *devices;
- (void)dealloc;
- (id)init;

@end
