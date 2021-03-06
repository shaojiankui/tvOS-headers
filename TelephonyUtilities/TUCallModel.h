//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TUCallModel : NSObject
{
    _Bool _ambiguous;
    _Bool _swappable;
    _Bool _mergeable;
    _Bool _holdAllowed;
    _Bool _addCallAllowed;
    _Bool _takingCallsPrivateAllowed;
    _Bool _hardPauseAvailable;
    _Bool _endAndAnswerAllowed;
    _Bool _holdAndAnswerAllowed;
    _Bool _sendToVoicemailAllowed;
    int _ambiguityState;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isSendToVoicemailAllowed) _Bool sendToVoicemailAllowed; // @synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed;
@property(readonly, nonatomic, getter=isHoldAndAnswerAllowed) _Bool holdAndAnswerAllowed; // @synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed;
@property(readonly, nonatomic, getter=isEndAndAnswerAllowed) _Bool endAndAnswerAllowed; // @synthesize endAndAnswerAllowed=_endAndAnswerAllowed;
@property(readonly, nonatomic, getter=isHardPauseAvailable) _Bool hardPauseAvailable; // @synthesize hardPauseAvailable=_hardPauseAvailable;
@property(readonly, nonatomic, getter=isTakingCallsPrivateAllowed) _Bool takingCallsPrivateAllowed; // @synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed;
@property(readonly, nonatomic, getter=isAddCallAllowed) _Bool addCallAllowed; // @synthesize addCallAllowed=_addCallAllowed;
@property(readonly, nonatomic, getter=isHoldAllowed) _Bool holdAllowed; // @synthesize holdAllowed=_holdAllowed;
@property(readonly, nonatomic, getter=isMergeable) _Bool mergeable; // @synthesize mergeable=_mergeable;
@property(readonly, nonatomic, getter=isSwappable) _Bool swappable; // @synthesize swappable=_swappable;
@property(readonly, nonatomic) int ambiguityState; // @synthesize ambiguityState=_ambiguityState;
@property(readonly, nonatomic, getter=isAmbiguous) _Bool ambiguous; // @synthesize ambiguous=_ambiguous;
- (_Bool)shouldPlayDTMFToneForCall:(id)arg1;
- (id)audioModeForCall:(id)arg1;
- (id)audioCategoryForCall:(id)arg1;
- (id)description;

@end

