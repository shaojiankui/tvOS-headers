//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSString;

@interface HDCodableQuantitySample : PBCodable <NSCopying>
{
    double _valueInCanonicalUnit;
    double _valueInOriginalUnit;
    NSString *_originalUnitString;
    HDCodableSample *_sample;
    struct {
        unsigned int valueInCanonicalUnit:1;
        unsigned int valueInOriginalUnit:1;
    } _has;
}

@property(retain, nonatomic) NSString *originalUnitString; // @synthesize originalUnitString=_originalUnitString;
@property(nonatomic) double valueInOriginalUnit; // @synthesize valueInOriginalUnit=_valueInOriginalUnit;
@property(nonatomic) double valueInCanonicalUnit; // @synthesize valueInCanonicalUnit=_valueInCanonicalUnit;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOriginalUnitString;
@property(nonatomic) _Bool hasValueInOriginalUnit;
@property(nonatomic) _Bool hasValueInCanonicalUnit;
@property(readonly, nonatomic) _Bool hasSample;

@end

