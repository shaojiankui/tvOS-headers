//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CUIKUserActivity : NSObject
{
    unsigned long long _type;
    NSString *_activityTitle;
    NSString *_activitySubtitle;
    NSSet *_activityKeywords;
    unsigned long long _version;
}

+ (unsigned long long)_typeFromDictionary:(id)arg1;
+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (unsigned long long)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(_Bool *)arg3;
+ (id)activityForActivity:(id)arg1;
+ (id)activityForDictionary:(id)arg1;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSSet *activityKeywords; // @synthesize activityKeywords=_activityKeywords;
@property(retain, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateActivity:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end
