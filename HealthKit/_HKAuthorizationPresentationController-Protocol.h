//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord;

@protocol _HKAuthorizationPresentationController <NSObject>
- (void)presentWithRequestRecord:(HKAuthorizationRequestRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
