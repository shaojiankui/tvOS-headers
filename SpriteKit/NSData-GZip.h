//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GZip)
+ (id)makeArchive:(const void *)arg1 length:(unsigned long long)arg2 level:(float)arg3;
- (id)gzipInflate;
- (id)gzipDeflate:(float)arg1;
@end

