//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPProxyObject.h>

#import <Search/PRSActionButton-Protocol.h>

@class NSArray, NSString;
@protocol PRSApp;

@interface SPActionButton : SPProxyObject <PRSActionButton>
{
    NSString *_contactIdentifier;
}

@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSArray *adam_ids; // @dynamic adam_ids;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool is_overlay; // @dynamic is_overlay;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSString *label_itunes; // @dynamic label_itunes;
@property(retain, nonatomic) NSString *provider; // @dynamic provider;
@property(retain, nonatomic) id <PRSApp> punchout;
@property(nonatomic) _Bool streaming; // @dynamic streaming;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end
