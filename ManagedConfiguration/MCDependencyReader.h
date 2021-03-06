//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueDomainsDict;
}

+ (id)sharedReader;
+ (void)setStoragePath:(id)arg1;
+ (id)storagePath;
@property(retain, nonatomic) NSMutableDictionary *memberQueueDomainsDict; // @synthesize memberQueueDomainsDict=_memberQueueDomainsDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)memberQueueRereadDomainsDict;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)parentsInDomain:(id)arg1;
- (id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)memberQueueParentsInDomain:(id)arg1;
@property(readonly, nonatomic) NSDictionary *domainsDict;
- (id)_init;
- (id)init;

@end

