//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@protocol ACUIAccountViewsProviderProtocol <NSObject>
- (NSDictionary *)configurationInfoForCreatingAccountWithType:(NSString *)arg1;
- (NSDictionary *)configurationInfoForViewingAccount:(ACAccount *)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(NSString *)arg1;
- (Class)viewControllerClassForViewingAccount:(ACAccount *)arg1;
- (NSArray *)supportedAccountTypeIdentifiers;

@optional
- (Class)controllerClassForCreatingAccountWithType:(NSString *)arg1;
@end

