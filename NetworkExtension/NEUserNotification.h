//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject
{
    _Bool _isBanner;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)shouldPromptForLocalAuthentication;
+ (Class)getUIDeviceClass;
+ (id)createLAContext;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) id notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain) id notification; // @synthesize notification=_notification;
@property _Bool isBanner; // @synthesize isBanner=_isBanner;
- (void).cxx_destruct;
- (id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3;
- (void)cancel;
- (_Bool)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4;

@end

