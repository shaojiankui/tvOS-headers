//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NEFilterFlow;

@protocol NEFilterControlExtensionProviderProtocol <NEFilterExtensionProviderProtocol>
- (void)handleNewFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
@end

