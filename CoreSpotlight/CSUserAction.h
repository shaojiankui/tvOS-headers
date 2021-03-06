//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>
{
    NSString *_itemIdentifier;
    NSString *_contentAction;
    NSDictionary *_userInfo;
    NSSet *_keywords;
    unsigned long long _eligibility;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;
@property unsigned long long eligibility; // @synthesize eligibility=_eligibility;
@property(retain) NSSet *keywords; // @synthesize keywords=_keywords;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *contentAction; // @synthesize contentAction=_contentAction;
@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_propertiesDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1;

@end

