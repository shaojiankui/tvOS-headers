//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TUCallSoundPlayerSoundDescriptor : NSObject
{
    id _sound;
    unsigned long long _iterations;
    double _pauseDuration;
}

@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(retain, nonatomic) id sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSound:(id)arg1 iterations:(unsigned long long)arg2 pauseDuration:(double)arg3;

@end

