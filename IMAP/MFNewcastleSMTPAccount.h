//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/SMTPAccount.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount
{
    CastleIMAPAccount *_castleAccount;
}

+ (id)accountTypeIdentifier;
@property(retain, nonatomic) CastleIMAPAccount *castleAccount; // @synthesize castleAccount=_castleAccount;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (_Bool)shouldUseAuthentication;
- (id)displayHostname;
- (id)mailAccountIfAvailable;
- (id)accountForRenewingCredentials;
- (void)dealloc;

@end
