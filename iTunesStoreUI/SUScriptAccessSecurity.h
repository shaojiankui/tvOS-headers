//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUScriptAccessSecurity : NSObject
{
}

- (_Bool)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (_Bool)_url:(id)arg1 matchesExpressions:(id)arg2;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (id)_accessDictionaryForType:(id)arg1;
- (_Bool)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (_Bool)canAccessFacebookInFrame:(id)arg1 error:(id *)arg2;

@end

