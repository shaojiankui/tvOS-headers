//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSDictionary;

@protocol UIFoundationGlobalUserDefaultsHelper <NSObject>
- (void)__synchronizeUserDefaultsDictionaryRepresentation:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)__loadUserDefaultsDictionaryRepresentationWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end
