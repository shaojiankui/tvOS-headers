//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class NSString;

@protocol BKSAlternateSystemAppServerProtocol <NSObject>
- (void)unblockSystemAppForAlternateSystemApp;
- (void)terminateAlternateSystemAppWithBundleID:(NSString *)arg1;
- (void)openAlternateSystemAppWithBundleID:(NSString *)arg1;
- (void)blockSystemAppForAlternateSystemApp;
@end

