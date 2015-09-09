//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileAccessNode;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSObject<OS_xpc_object> *_client;
    id _reactorID;
    CDUnknownBlockType _messageSender;
    NSFileAccessNode *_itemLocation;
}

- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1;
- (void)sendMessageKind:(id)arg1 parameters:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
- (CDUnknownBlockType)messageSender;
- (id)reactorID;
- (id)client;
- (void)finalize;
- (void)dealloc;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(CDUnknownBlockType)arg3;

@end
