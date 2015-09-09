//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOMapItemPrivate-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemAttribution, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, GEOPlaceResult, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;
@protocol GEOMapItemTransitAttribution, GEOMapItemTransitInfo;

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying>
{
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    GEOPDPlace *_placeData;
    GEOPlaceResult *_placeResult;
}

+ (id)mapItemStorageForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)mapItemStorageForPlaceData:(id)arg1;
+ (id)mapItemStorageForPlaceResult:(id)arg1;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForPlace:(id)arg1;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1;
+ (id)mapItemStorageForSerializedMapItemStorage:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForGEOMapItemPrivate:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1;
@property(retain, nonatomic) GEOPlaceResult *placeResult; // @synthesize placeResult=_placeResult;
@property(retain, nonatomic) GEOMapItemClientAttributes *clientAttributes; // @synthesize clientAttributes=_clientAttributes;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) GEOPDPlace *placeData; // @synthesize placeData=_placeData;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasPlaceResult;
@property(readonly, nonatomic) _Bool hasClientAttributes;
@property(readonly, nonatomic) _Bool hasPlace;
@property(readonly, nonatomic) _Bool hasPlaceData;
- (void)dealloc;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (id)_asPlaceInfo;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_encyclopedicAttribution) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_factoids) NSArray *factoids;
@property(readonly, nonatomic, getter=_hasPairOfFactoids) _Bool hasPairOfFactoids;
@property(readonly, nonatomic, getter=_textBlockText) NSString *textBlockText;
@property(readonly, nonatomic, getter=_textBlockTitle) NSString *textBlockTitle;
@property(readonly, nonatomic, getter=_hasTextBlock) _Bool hasTextBlock;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_acceptsApplePay) _Bool acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) _Bool hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOMapItemTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (_Bool)_hasTravelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)_geoMapItem;
- (id)_geoMapItemCreatingAndAssociatingIfNeeded;
- (id)initWithPlaceData:(id)arg1 clientAttributes:(id)arg2;
- (id)initWithPlaceResult:(id)arg1;
- (id)initWithPlace:(id)arg1 clientAttributes:(id)arg2;
- (id)_mapItemByStrippingOptionalData;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
