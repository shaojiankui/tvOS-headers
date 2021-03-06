//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIFont, UIFontDescriptor;

@interface PLCommentsFontCache : NSObject
{
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}

+ (id)sharedCache;
@property(readonly, nonatomic) UIFont *commentSendButtonFont;
@property(readonly, nonatomic) UIFont *commentEntryFont;
@property(readonly, nonatomic) UIFont *commentAttributionNameFont;
@property(readonly, nonatomic) UIFont *commentAttributionDateFont;
@property(readonly, nonatomic) UIFont *commentTextFont;
@property(readonly, nonatomic) UIFont *likeFont;
@property(readonly, nonatomic) UIFont *youLikeFont;
- (id)_shortBodyFontDescriptor;
- (id)_emphasizedBodyFontDescriptor;
- (id)_bodyFontDescriptor;
- (id)_shortSubheadlineFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (id)_shortCaptionFontDescriptor;
- (void)_invalidateCache;
- (void)_contentSizesDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

