//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion
{
    _Bool _parked;
}

@property(readonly, nonatomic, getter=isParked) _Bool parked; // @synthesize parked=_parked;
- (void)unpark;
- (void)park;
- (void)dealloc;
- (id)init;

@end
