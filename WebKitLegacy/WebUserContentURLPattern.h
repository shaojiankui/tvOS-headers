//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject
{
    WebUserContentURLPatternPrivate *_private;
}

- (_Bool)matchesURL:(id)arg1;
- (_Bool)matchesSubdomains;
- (id)host;
- (id)scheme;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithPatternString:(id)arg1;

@end

