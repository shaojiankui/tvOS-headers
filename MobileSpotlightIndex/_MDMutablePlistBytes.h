//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileSpotlightIndex/_MDPlistBytes.h>

__attribute__((visibility("hidden")))
@interface _MDMutablePlistBytes : _MDPlistBytes
{
    int _containerUID;
    int _currentUID;
    struct __CFArray *_parentUIDStack;
    struct __CFDictionary *_ptrUIDMap;
    unsigned long long *_fillPtr;
    unsigned long long *_limitPtr;
    unsigned long long *_rleTagPtr;
}

+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(_Bool)arg2;

@end
