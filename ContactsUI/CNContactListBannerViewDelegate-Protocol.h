//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactListBannerView;

@protocol CNContactListBannerViewDelegate <NSObject>
- (void)bannerViewWasSelectedToPresentPeoplePicker:(CNContactListBannerView *)arg1;
- (void)bannerView:(CNContactListBannerView *)arg1 wasSelectedToPresentMeContact:(CNContact *)arg2;
@end

