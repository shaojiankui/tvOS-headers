//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPlace, GEORPMapLocation, GEORPPlaceInfo, GEORPTransitLineTileInfo, NSMutableArray, NSString;

@interface GEORPProblemContext : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    double _creationDate;
    unsigned long long _originatingAuxiliaryControlIndex;
    NSMutableArray *_auxiliaryControls;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    int _pinType;
    GEOPDPlace *_place;
    GEORPPlaceInfo *_placeInfo;
    NSString *_tileStateLog;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    NSMutableArray *_visibleTileSets;
    struct {
        unsigned int sessionId:1;
        unsigned int creationDate:1;
        unsigned int originatingAuxiliaryControlIndex:1;
        unsigned int pinType:1;
    } _has;
}

@property(retain, nonatomic) NSString *lastUserTypedSearchString; // @synthesize lastUserTypedSearchString=_lastUserTypedSearchString;
@property(retain, nonatomic) GEORPPlaceInfo *placeInfo; // @synthesize placeInfo=_placeInfo;
@property(retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo; // @synthesize transitLineTileInfo=_transitLineTileInfo;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *lastSearchString; // @synthesize lastSearchString=_lastSearchString;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) NSString *tileStateLog; // @synthesize tileStateLog=_tileStateLog;
@property(retain, nonatomic) NSMutableArray *visibleTileSets; // @synthesize visibleTileSets=_visibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
@property(retain, nonatomic) GEOPlace *originalPlace; // @synthesize originalPlace=_originalPlace;
@property(nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLastUserTypedSearchString;
@property(readonly, nonatomic) _Bool hasPlaceInfo;
@property(readonly, nonatomic) _Bool hasTransitLineTileInfo;
@property(nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryControlsCount;
- (void)addAuxiliaryControl:(id)arg1;
- (void)clearAuxiliaryControls;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasLastSearchString;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(readonly, nonatomic) _Bool hasPlace;
@property(readonly, nonatomic) _Bool hasTileStateLog;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleTileSetsCount;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(readonly, nonatomic) _Bool hasMapLocation;
@property(readonly, nonatomic) _Bool hasOriginalPlace;
@property(nonatomic) _Bool hasPinType;
@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(nonatomic) _Bool hasSessionId;
- (void)dealloc;

@end

