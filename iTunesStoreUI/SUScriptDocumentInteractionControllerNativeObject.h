//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import <iTunesStoreUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate>
{
    _Bool _didPickApplication;
    _Bool _isVisible;
    CDUnknownBlockType _presentationBlock;
    _Bool _redisplayAfterRotation;
}

- (_Bool)_isAffectedByWindowNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (void)presentUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

