//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class SUMenuViewController, SUProtocolButton;

@protocol SUMenuViewControllerDelegate <NSObject>

@optional
- (void)menuViewControllerDidCancel:(SUMenuViewController *)arg1;
- (void)menuViewController:(SUMenuViewController *)arg1 didTapButton:(SUProtocolButton *)arg2;
- (void)menuViewController:(SUMenuViewController *)arg1 didSelectItemAtIndex:(long long)arg2;
@end

