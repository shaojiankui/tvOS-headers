//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isMatchShifted) _Bool matchShifted;
@property(readonly, nonatomic) int matchRoadClass;
@property(readonly, nonatomic) int matchFormOfWay;
@property(readonly, nonatomic) double matchCourse;
@property(readonly, nonatomic) CDStruct_c3b9c2ee matchCoordinate;
@property(readonly, nonatomic) long long matchQuality;
- (id)shortDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CDStruct_c3b9c2ee)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6;

@end

