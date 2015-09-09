//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface TVApplicationControllerContext : NSObject <NSCopying>
{
    NSURL *_javaScriptApplicationURL;
    NSString *_storageIdentifier;
    NSDictionary *_launchOptions;
}

@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(copy, nonatomic) NSString *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
@property(copy, nonatomic) NSURL *javaScriptApplicationURL; // @synthesize javaScriptApplicationURL=_javaScriptApplicationURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
