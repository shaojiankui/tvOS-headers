//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse
{
    NSString *_deviceIdentifier;
    NSNumber *_cardsOnFile;
    NSNumber *_maxCards;
    NSString *_primaryRegion;
    NSDictionary *_regions;
    NSURL *_brokerURL;
    NSURL *_trustedServiceManagerURL;
    NSURL *_paymentServicesURL;
    NSArray *_certificates;
}

@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(retain, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(retain, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(retain, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) NSString *primaryRegion; // @synthesize primaryRegion=_primaryRegion;
@property(retain, nonatomic) NSNumber *maxCards; // @synthesize maxCards=_maxCards;
@property(retain, nonatomic) NSNumber *cardsOnFile; // @synthesize cardsOnFile=_cardsOnFile;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

