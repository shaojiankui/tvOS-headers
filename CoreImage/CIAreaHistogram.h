//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaHistogram : CIFilter
{
    CIImage *inputImage;
    CIVector *inputExtent;
    NSNumber *inputScale;
    NSNumber *inputCount;
    CIContext *_context;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)outputData;
- (id)_outputData:(_Bool)arg1;
- (_Bool)_inputsAreOK;
- (struct IRect)_netExtent;
- (void)dealloc;

@end

