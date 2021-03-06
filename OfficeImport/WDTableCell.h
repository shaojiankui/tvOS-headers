//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject
{
    unsigned long long mIndex;
    WDTableRow *mRow;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    _Bool mUseTrackedProperties;
}

- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)text;
- (void)clearProperties;
- (id)properties;
- (id)row;
- (long long)compareIndex:(id)arg1;
- (unsigned long long)index;
- (void)setUseTrackedProperties:(_Bool)arg1;
- (_Bool)useTrackedProperties;
- (void)dealloc;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;
- (double)cellWidth;

@end

