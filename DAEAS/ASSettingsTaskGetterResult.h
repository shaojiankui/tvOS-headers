//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSettingsTaskGetterResult : NSObject
{
    int _key;
    long long _status;
    id _result;
}

@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) int key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3;

@end
