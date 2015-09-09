//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIPSDLayerRef;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;
    _Bool _isVectorMask;
}

- (struct CGImage *)createCGImageMask;
- (struct CGPath *)newBezierPathAtScale:(double)arg1;
- (struct CGPath *)newBezierPath;
- (struct CGRect)bounds;
- (_Bool)isInvertedWhenBlending;
- (_Bool)isEnabled;
- (_Bool)isLinked;
- (id)layerRef;
- (void)dealloc;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;

@end
