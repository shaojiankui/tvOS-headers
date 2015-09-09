//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUISettingDescriptionView, SKUISettingsDescriptionUpdate, SKUISettingsGroupsDescription, UIViewController;

@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>
- (void)settingsGroupsDescriptionDidUpdateValidity:(SKUISettingsGroupsDescription *)arg1;
- (SKUISettingDescriptionView *)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 viewForSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 dismissViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 didUpdateSettingsDescription:(SKUISettingsDescriptionUpdate *)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingAtIndexPath:(NSIndexPath *)arg2;
- (UIViewController *)owningViewControllerForSettingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1;
@end
