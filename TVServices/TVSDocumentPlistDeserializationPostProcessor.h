//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/TVSDocumentPostprocessor-Protocol.h>

@class NSString;

@interface TVSDocumentPlistDeserializationPostProcessor : NSObject <TVSDocumentPostprocessor>
{
}

- (id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id *)arg3;
- (id)postprocessorName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

