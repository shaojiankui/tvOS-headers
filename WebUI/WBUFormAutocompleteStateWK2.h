//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBUFormAutoCompleteState.h>

@class NSDictionary, NSString, WBUFormAutoFillController, WBUFormAutoFillFrameHandle;
@protocol _WKFormInputSession;

@interface WBUFormAutocompleteStateWK2 : WBUFormAutoCompleteState
{
    WBUFormAutoFillFrameHandle *_frame;
    NSDictionary *_formMetadata;
    NSDictionary *_textFieldMetadata;
    NSString *_textFieldValue;
    WBUFormAutoFillController *_autoFillController;
    id <_WKFormInputSession> _inputSession;
}

- (void).cxx_destruct;
- (id)frame;
- (id)webView;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 clearField:(id)arg3;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (void)annotateForm:(id)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2 andFocusField:(id)arg3;
- (void)fetchFormMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (id)textFieldValue;
- (void)_updateTextFieldValue;
- (void)getTextFieldMetadata:(id *)arg1 formMetadata:(id *)arg2;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;

@end
