//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/XRExpiredPidCacheServiceProtected.h>

@interface DTExpiredPidCacheService : XRExpiredPidCacheServiceProtected
{
}

+ (id)defaultCache;
+ (void)disableExpiredPidCaching;
- (void)enableCaching:(_Bool)arg1;
- (id)allExpiredSignatures;
- (id)signatureForExpiredPid:(id)arg1;
- (void)dealloc;
- (id)init;

@end

