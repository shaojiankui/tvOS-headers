//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/NSObject-Protocol.h>

@class NSString, TVPasscodeDigitView;

@protocol TVPasscodeDigitViewDelegate <NSObject>

@optional
- (void)passcodeDigitView:(TVPasscodeDigitView *)arg1 didChangeText:(NSString *)arg2;
- (void)passcodeDigitViewDidResignFocus:(TVPasscodeDigitView *)arg1;
- (void)passcodeDigitViewDidBecomeFocused:(TVPasscodeDigitView *)arg1;
@end
