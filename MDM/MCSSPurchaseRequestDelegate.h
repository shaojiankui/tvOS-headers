//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSPurchaseRequestDelegate-Protocol.h>

@class NSString, SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>
{
}

+ (id)instanceWithPurchases:(id)arg1;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) SSPurchaseRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end
