//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CITagWithColorSpace : CIFilter
{
    CIImage *inputImage;
    id inputColorSpace;
}

- (id)outputImage;

@end

