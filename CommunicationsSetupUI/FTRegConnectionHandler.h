//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FTRegConnectionHandler : NSObject
{
    long long _serviceType;
    unsigned int _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    CDStruct_34e8bc21 _handlerFlags;
}

@property(retain, nonatomic) NSString *_logName; // @synthesize _logName;
@property(copy, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) unsigned int caps; // @synthesize caps=_caps;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_disconnectFromDaemon;
- (_Bool)connectToDaemon;
- (_Bool)connectToDaemon:(_Bool)arg1;
- (_Bool)isConnectedToDaemon;
- (_Bool)_isServiceSupported;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
@property(readonly, retain, nonatomic) NSString *_serviceName;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;

@end
