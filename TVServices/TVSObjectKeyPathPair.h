//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSObjectKeyPathPair : NSObject
{
    NSObject *_observedObject;
    NSString *_keyPath;
}

+ (id)pairWithObject:(id)arg1 keyPath:(id)arg2;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) NSObject *observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;

@end

