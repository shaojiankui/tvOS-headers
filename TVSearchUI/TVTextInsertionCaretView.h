//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TVTextInsertionCaretView : UIView
{
    _Bool _shouldBlink;
    _Bool _blinking;
}

@property(nonatomic, getter=isBlinking) _Bool blinking; // @synthesize blinking=_blinking;
@property(nonatomic) _Bool shouldBlink; // @synthesize shouldBlink=_shouldBlink;
- (void)stopBlinking;
- (void)startBlinking;
- (void)_blink;
- (id)initWithFrame:(struct CGRect)arg1;

@end

