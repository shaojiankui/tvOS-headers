//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSUUID;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fNumberOfSteps;
    NSNumber *fDistance;
    NSNumber *fFloorsAscended;
    NSNumber *fFloorsDescended;
    NSNumber *fRecordId;
    NSNumber *fCurrentPace;
    NSNumber *fCurrentCadence;
    NSNumber *fActiveTime;
    NSUUID *fSourceId;
    NSNumber *fIsOdometerDistance;
    NSNumber *fIsOdometerPace;
}

+ (id)maxPedometerEntries;
+ (_Bool)supportsSecureCoding;
- (_Bool)isOdometerPace;
- (_Bool)isOdometerDistance;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) long long recordId;
- (id)activeTime;
@property(readonly, nonatomic) NSNumber *averageActivePace;
@property(readonly, nonatomic) NSNumber *currentCadence;
@property(readonly, nonatomic) NSNumber *currentPace;
@property(readonly, nonatomic) NSNumber *pace;
@property(readonly, nonatomic) NSNumber *floorsDescended;
@property(readonly, nonatomic) NSNumber *floorsAscended;
@property(readonly, nonatomic) NSNumber *distance;
@property(readonly, nonatomic) NSNumber *numberOfSteps;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13;

@end
