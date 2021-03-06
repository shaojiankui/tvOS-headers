//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSString, RUIObjectModel, UIAlertController;
@protocol RUIAlertViewDelegate;

@interface RUIAlertView : RUIElement
{
    UIAlertController *_alertController;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
    NSString *_message;
    long long _buttonIndex;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak RUIObjectModel<RUIAlertViewDelegate> *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)runAlertInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)alertController;
- (void)setCancelButtonTitle:(id)arg1;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 destructive:(_Bool)arg3 attributes:(id)arg4;
- (void)dealloc;
- (id)init;

@end

