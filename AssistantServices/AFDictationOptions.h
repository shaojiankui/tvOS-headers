//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, STSiriContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_applicationName;
    NSString *_applicationVersion;
    STSiriContext *_context;
    NSString *_fieldLabel;
    NSString *_fieldIdentifier;
    NSString *_interactionIdentifier;
    NSString *_requestIdentifier;
    long long _keyboardType;
    NSString *_prefixText;
    NSString *_postfixText;
    NSString *_selectedText;
    long long _returnKeyType;
    long long _transcriptionMode;
    NSArray *_inlineItemList;
    NSString *_languageCodeOverride;
    long long _voiceSearchTypeOptions;
    NSDictionary *_voiceSearchHeaderFields;
    NSDictionary *_voiceSearchQueryParameters;
    NSDictionary *_voiceTriggerEventInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(copy, nonatomic) NSDictionary *voiceSearchQueryParameters; // @synthesize voiceSearchQueryParameters=_voiceSearchQueryParameters;
@property(copy, nonatomic) NSDictionary *voiceSearchHeaderFields; // @synthesize voiceSearchHeaderFields=_voiceSearchHeaderFields;
@property(nonatomic) long long voiceSearchTypeOptions; // @synthesize voiceSearchTypeOptions=_voiceSearchTypeOptions;
@property(copy, nonatomic) NSString *languageCodeOverride; // @synthesize languageCodeOverride=_languageCodeOverride;
@property(copy, nonatomic) NSArray *inlineItemList; // @synthesize inlineItemList=_inlineItemList;
@property(nonatomic) long long transcriptionMode; // @synthesize transcriptionMode=_transcriptionMode;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(retain, nonatomic) STSiriContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (void).cxx_destruct;
- (id)dictationOptionsWithoutTextContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

