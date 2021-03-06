//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSThread;

@interface CPLEngineStoreTransaction : NSObject
{
    NSThread *_currentThread;
    _Bool _forWrite;
    NSError *_error;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (_Bool)canRead;
- (_Bool)canWrite;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (_Bool)do:(CDUnknownBlockType)arg1;
- (_Bool)_forWrite;
- (id)initForWrite:(_Bool)arg1;

@end

