//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/QLPreviewItem-Protocol.h>

@class NSString, NSURL, QLPreviewItemProxy, QLServicePreviewContentController;

__attribute__((visibility("hidden")))
@interface QLPreviewRemoteItem : NSObject <QLPreviewItem>
{
    QLServicePreviewContentController *_contentController;
    long long _index;
    QLPreviewItemProxy *_proxy;
    _Bool _resolving;
    CDUnknownBlockType _completionBlock;
}

- (_Bool)wantsDefaultMediaPlayer;
- (id)backgroundColorOverride;
- (double)autoPlaybackPosition;
- (_Bool)isPromisedItem;
- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
@property(readonly, copy) NSString *description;
@property(readonly) QLPreviewItemProxy *proxy;
- (void)invalidate;
- (void)resolveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_clearCompletionBlock;
- (void)dealloc;
- (id)initWithContentController:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
