//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, NSURL;

@interface SAStockAdd : SABaseClientBoundCommand
{
    NSURL *_targetAppId;
    NSString *_companyName;
    NSArray *_stockReferences;
    NSString *_tickerSymbol;
}

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;
+ (id)add;
@property(copy, nonatomic) NSString *tickerSymbol; // @synthesize tickerSymbol=_tickerSymbol;
@property(copy, nonatomic) NSArray *stockReferences; // @synthesize stockReferences=_stockReferences;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSURL *targetAppId; // @synthesize targetAppId=_targetAppId;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *stocks;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

