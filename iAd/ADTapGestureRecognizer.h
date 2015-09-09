//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface ADTapGestureRecognizer : UIGestureRecognizer
{
    long long _finalTrackingID;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchMovedHandler;
    CDUnknownBlockType _touchUpHandler;
}

@property(copy, nonatomic) CDUnknownBlockType touchUpHandler; // @synthesize touchUpHandler=_touchUpHandler;
@property(copy, nonatomic) CDUnknownBlockType touchMovedHandler; // @synthesize touchMovedHandler=_touchMovedHandler;
@property(copy, nonatomic) CDUnknownBlockType touchDownHandler; // @synthesize touchDownHandler=_touchDownHandler;
@property(nonatomic) long long finalTrackingID; // @synthesize finalTrackingID=_finalTrackingID;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
