//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject
{
}

@property(nonatomic) int identifier;
@property(copy, nonatomic) NSString *data;
@property(nonatomic) long long type;
- (id)initWithType:(long long)arg1;

@end
