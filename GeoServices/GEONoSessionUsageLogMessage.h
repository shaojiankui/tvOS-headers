//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsFeedbackLogMessage;

@interface GEONoSessionUsageLogMessage : PBCodable <NSCopying>
{
    GEODirectionsFeedbackLogMessage *_directionsFeedbackLogMessage;
}

@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *directionsFeedbackLogMessage; // @synthesize directionsFeedbackLogMessage=_directionsFeedbackLogMessage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDirectionsFeedbackLogMessage;
- (void)dealloc;

@end
