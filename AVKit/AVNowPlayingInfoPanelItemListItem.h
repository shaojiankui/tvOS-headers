//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVNowPlayingInfoPanelItemListItemProtocol-Protocol.h>

@class AVMediaSelectionOption, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoPanelItemListItem : NSObject <AVNowPlayingInfoPanelItemListItemProtocol>
{
    NSString *_displayName;
    NSString *_languageCode;
    NSDictionary *_userInfo;
}

+ (id)standardAutoItem;
+ (id)standardOffItem;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_hasMediaCharacteristic:(id)arg1;
- (id)_mediaType;
- (id)_localizedDisplayNameFromLanguageCode;
@property(readonly, nonatomic) AVMediaSelectionOption *mediaSelectionOption;
- (id)initWithDisplayName:(id)arg1 userInfo:(id)arg2;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithMediaSelectionOption:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 displayName:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (long long)speakerIconType;
- (long long)infoCellIconKind;
- (id)audioRoute;
- (id)initWithAudioRoute:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

