//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
    NSString *_inputCode;
}

@property(readonly, nonatomic) NSDictionary *redeemCodeDictionary; // @synthesize redeemCodeDictionary=_dictionary;
@property(copy, nonatomic) NSString *inputCode; // @synthesize inputCode=_inputCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSString *codeType;
@property(readonly, nonatomic) NSString *code;
- (id)initWithRedeemCodeDictionary:(id)arg1;

@end
