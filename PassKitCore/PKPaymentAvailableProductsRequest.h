//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest
{
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end

