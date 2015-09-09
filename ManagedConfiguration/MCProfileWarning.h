//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding>
{
    NSString *_localizedTitle;
    NSString *_localizedBody;
    _Bool _isLongForm;
}

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLongForm; // @synthesize isLongForm=_isLongForm;
@property(retain, nonatomic) NSString *localizedBody; // @synthesize localizedBody=_localizedBody;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToProfileWarning:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;

@end
