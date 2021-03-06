//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject
{
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    _Bool _isOutgoingTraffic;
    _Bool _didFlushLogs;
}

+ (id)_logQueue;
@property(nonatomic) _Bool isOutgoingTraffic; // @synthesize isOutgoingTraffic=_isOutgoingTraffic;
- (void).cxx_destruct;
- (void)logPlainTextData:(id)arg1;
- (void)logWBXMLData:(id)arg1;
- (void)dealloc;
- (void)flushLogs;
- (void)_moveLogFileContentsAtPath:(id)arg1;
- (void)_openLookasideFile;

@end

