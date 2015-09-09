//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface CacheDeleteRecentVolumeInfo : NSObject <NSSecureCoding>
{
    NSString *_volume;
    NSDate *_timestamp;
    NSNumber *_freespace;
    NSMutableDictionary *_services;
}

+ (id)cacheDeleteRecentVolumeInfo:(id)arg1 freespace:(id)arg2 timestamp:(id)arg3 volumeName:(id)arg4;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSNumber *freespace; // @synthesize freespace=_freespace;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (int)validate:(double)arg1 threshold:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServices:(id)arg1 freespace:(id)arg2 timestamp:(id)arg3 volumeName:(id)arg4;

@end
