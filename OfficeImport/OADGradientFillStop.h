//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <NSCopying>
{
    OADColor *mColor;
    float mPosition;
}

+ (void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)usesPlaceholderColor;
- (void)setStyleColor:(id)arg1;
- (float)position;
- (id)color;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 position:(float)arg2;

@end

