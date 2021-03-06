//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUMediaPlayerItem;

@interface SUScriptMediaPlayerItem : SUScriptObject
{
    SUMediaPlayerItem *_mediaItem;
}

+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(copy) NSString *URL;
@property(copy) NSString *title;
@property(copy) NSString *subtitle;
@property(retain) NSNumber *playableDuration;
@property(copy) NSString *itemType;
@property(retain) NSNumber *itemIdentifier;
@property(copy) NSString *initialOrientation;
@property(copy) NSString *bookmarkIdentifier;
@property(copy) NSString *backgroundImageURL;
- (id)_className;
- (id)copyNativeMediaPlayerItem;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

