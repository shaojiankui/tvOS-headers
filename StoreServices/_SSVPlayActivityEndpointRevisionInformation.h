//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_additionalPendingRevisionsIndexSet;
    unsigned long long _currentRevision;
    NSString *_revisionVersionToken;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *revisionVersionToken; // @synthesize revisionVersionToken=_revisionVersionToken;
@property(nonatomic) unsigned long long currentRevision; // @synthesize currentRevision=_currentRevision;
@property(copy, nonatomic) NSIndexSet *additionalPendingRevisionsIndexSet; // @synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

