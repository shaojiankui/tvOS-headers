//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TVSDocumentLoader, TVSStoreEnvironment, TVSStoreFrontLocale;

@interface TVSStoreFront : NSObject
{
    TVSDocumentLoader *_availableSFDocument;
    _Bool _changingStoreFront;
    _Bool _loadAvailableStoreFrontsChangedLocale;
    NSDictionary *_availableStoreFronts;
    NSDictionary *_storeFrontDictionary;
    TVSStoreFrontLocale *_locale;
    TVSStoreEnvironment *_environment;
    unsigned long long _loadStoreFrontRetryAttempt;
    unsigned long long _loadAvailableStoreFrontRetryAttempt;
}

+ (_Bool)_switchToStoreFrontWithLocale:(id)arg1 force:(_Bool)arg2;
+ (_Bool)switchToStoreFrontWithLocale:(id)arg1;
+ (id)allLanguages;
+ (id)availableLocales;
+ (id)sharedInstance;
+ (void)connect;
@property unsigned long long loadAvailableStoreFrontRetryAttempt; // @synthesize loadAvailableStoreFrontRetryAttempt=_loadAvailableStoreFrontRetryAttempt;
@property unsigned long long loadStoreFrontRetryAttempt; // @synthesize loadStoreFrontRetryAttempt=_loadStoreFrontRetryAttempt;
@property _Bool loadAvailableStoreFrontsChangedLocale; // @synthesize loadAvailableStoreFrontsChangedLocale=_loadAvailableStoreFrontsChangedLocale;
@property(retain) TVSStoreEnvironment *environment; // @synthesize environment=_environment;
@property(retain) TVSStoreFrontLocale *locale; // @synthesize locale=_locale;
@property(getter=isChangingStoreFront) _Bool changingStoreFront; // @synthesize changingStoreFront=_changingStoreFront;
@property(retain) NSDictionary *availableStoreFronts; // @synthesize availableStoreFronts=_availableStoreFronts;
- (void).cxx_destruct;
- (id)allLanguages;
- (id)availableLocales;
- (void)_updateDateAndTimeFromURLResponse:(id)arg1;
- (_Bool)_extractDate:(id *)arg1 fromString:(id)arg2;
- (_Bool)_extractDateString:(id *)arg1 fromStoreResponse:(id)arg2;
- (_Bool)_validateCoreTimeEntitlement;
- (void)_inspectCurrentStoreFront;
- (void)_retry:(unsigned long long)arg1 withSelector:(SEL)arg2;
- (void)_loadStoreFront;
- (void)_loadAvailableStoreFronts;
- (void)_handleSystemLanguageUpdated;
- (void)_urlBagLoaded:(id)arg1;
- (id)valueForStoreFrontKey:(id)arg1;
@property(readonly, retain) NSArray *vendorBags;
- (id)menuDefinitionForMediaType:(id)arg1;
@property(readonly, retain) NSArray *menuDefinitions;
@property(retain) NSDictionary *storeFrontDictionary; // @synthesize storeFrontDictionary=_storeFrontDictionary;
- (void)dealloc;
- (id)initInstance;

@end

