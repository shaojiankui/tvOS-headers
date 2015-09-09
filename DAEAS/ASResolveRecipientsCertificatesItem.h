//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsCertificatesItem : ASItem
{
    NSNumber *_certCount;
    NSNumber *_recipientCount;
    NSNumber *_easStatus;
    NSMutableArray *_mCertificates;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mCertificates; // @synthesize mCertificates=_mCertificates;
- (void)setEASStatus:(id)arg1;
@property(retain, nonatomic) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property(retain, nonatomic) NSNumber *recipientCount; // @synthesize recipientCount=_recipientCount;
@property(retain, nonatomic) NSNumber *certCount; // @synthesize certCount=_certCount;
- (void).cxx_destruct;
- (id)description;
- (void)addCertificateString:(id)arg1;
@property(readonly, nonatomic) NSArray *certificates;

@end
