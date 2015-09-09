//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    int _lifetimeMinutes;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
    long long _diffieHellmanGroup;
}

+ (_Bool)supportsSecureCoding;
@property int lifetimeMinutes; // @synthesize lifetimeMinutes=_lifetimeMinutes;
@property long long diffieHellmanGroup; // @synthesize diffieHellmanGroup=_diffieHellmanGroup;
@property long long integrityAlgorithm; // @synthesize integrityAlgorithm=_integrityAlgorithm;
@property long long encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)copyDictionary;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
