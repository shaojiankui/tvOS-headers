//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMWebKitNamedFlow : DOMObject
{
}

- (_Bool)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;
- (id)getContent;
- (id)getRegions;
- (id)getRegionsByContent:(id)arg1;
@property(readonly) int firstEmptyRegionIndex;
@property(readonly) _Bool overset;
@property(readonly, copy) NSString *name;
- (void)finalize;
- (void)dealloc;

@end

