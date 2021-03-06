//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AUAudioUnitProperty, AVAudioFormat, CAXPCObject, NSData, NSString;

@protocol AUAudioUnitXPCProtocol
- (void)removeRemoteParameterObserver:(unsigned long long)arg1 reply:(void (^)(void))arg2;
- (void)addRemoteParameterObserver:(_Bool)arg1 reply:(void (^)(unsigned long long))arg2;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(void (^)(NSArray *))arg2;
- (void)parameterNode:(NSString *)arg1 displayNameWithLength:(long long)arg2 reply:(void (^)(NSString *))arg3;
- (void)parameterValueFromString:(NSString *)arg1 address:(unsigned long long)arg2 reply:(void (^)(float))arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(void (^)(NSString *))arg4;
- (void)getParameter:(unsigned long long)arg1 reply:(void (^)(float))arg2;
- (void)setParameter:(unsigned long long)arg1 value:(float)arg2;
- (void)getParameterTree:(void (^)(AUParameterTree *))arg1;
- (void)removePropertyObserver:(AUAudioUnitProperty *)arg1;
- (void)addPropertyObserver:(AUAudioUnitProperty *)arg1;
- (void)setValue:(id)arg1 forProperty:(AUAudioUnitProperty *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)valueForProperty:(AUAudioUnitProperty *)arg1 reply:(void (^)(id))arg2;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(AVAudioFormat *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)reset;
- (void)uninitialize:(void (^)(void))arg1;
- (void)initialize2:(int)arg1 formats:(NSData *)arg2 maxFrames:(unsigned long long)arg3 buffer:(CAXPCObject *)arg4 bufferSize:(unsigned int)arg5 beginSem:(CAXPCObject *)arg6 endSem:(CAXPCObject *)arg7 reply:(void (^)(NSError *))arg8;
- (void)initialize:(unsigned long long)arg1 reply:(void (^)(unsigned long long, unsigned long long, unsigned long long, NSData *, _Bool, NSError *))arg2;
- (void)getBusses:(unsigned int)arg1 reply:(void (^)(NSArray *))arg2;
- (void)open:(void (^)(_Bool, _Bool, NSArray *, NSArray *, _Bool, _Bool, int, NSError *))arg1;
@end

