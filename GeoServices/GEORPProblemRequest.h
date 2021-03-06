//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPProblem, GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSData *_devicePushToken;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
}

@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(retain, nonatomic) GEORPProblem *problem; // @synthesize problem=_problem;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(readonly, nonatomic) _Bool hasClientMetadata;
@property(readonly, nonatomic) _Bool hasAnalyticMetadata;
@property(readonly, nonatomic) _Bool hasUserCredentials;
@property(readonly, nonatomic) _Bool hasProblem;
- (void)dealloc;
- (id)initWithProblem:(id)arg1 pushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;

@end

