//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKModelObject;

__attribute__((visibility("hidden")))
@interface VKModelObject_DrawPass : NSObject
{
    unsigned char _pass;
    VKModelObject *_submodel;
}

@property(nonatomic) unsigned char pass; // @synthesize pass=_pass;
@property(retain, nonatomic) VKModelObject *submodel; // @synthesize submodel=_submodel;
- (void)dealloc;
- (id)description;

@end
