//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CPImageObjectData : NSObject
{
    struct CGImage *_image;
    struct CGRect _boundsOnPage;
}

+ (id)imageObjectDataWithCGImage:(struct CGImage *)arg1 andBounds:(struct CGRect)arg2;
@property struct CGRect boundsOnPage; // @synthesize boundsOnPage=_boundsOnPage;
@property(retain) struct CGImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 andBoundsOnPage:(struct CGRect)arg2;

@end

