//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVSPreferences;

@interface TSKPreferencesFacade : NSObject
{
    TVSPreferences *_prefs;
    NSString *_domain;
}

@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDomain:(id)arg1 notifyChanges:(_Bool)arg2;

@end
