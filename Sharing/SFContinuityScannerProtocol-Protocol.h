//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SFContinuityScannerProtocol <NSObject>
- (void)activityPayloadFromDeviceUniqueID:(NSString *)arg1 forAdvertisementPayload:(NSData *)arg2 withCompletionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)setForceScanningEnabled:(_Bool)arg1;
@end

