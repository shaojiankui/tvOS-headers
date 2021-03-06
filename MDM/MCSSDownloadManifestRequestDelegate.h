//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSDownloadManifestRequestDelegate-Protocol.h>

@class NSString, SSDownloadManifestRequest, SSDownloadManifestResponse;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate>
{
    SSDownloadManifestResponse *_response;
}

+ (id)instanceWithURLRequest:(id)arg1;
- (void).cxx_destruct;
- (void)downloadManifestRequest:(id)arg1 didReceiveResponse:(id)arg2;
@property(nonatomic) _Bool shouldHideUserPrompts;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) SSDownloadManifestRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end

