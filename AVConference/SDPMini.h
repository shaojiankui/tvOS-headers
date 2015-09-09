//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, VCImageAttributeRules;

__attribute__((visibility("hidden")))
@interface SDPMini : NSObject
{
    NSMutableArray *_videoAttributes;
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSString *origin;
    NSMutableArray *audioPayloads;
    NSMutableArray *secondaryAudioPayloads;
    NSMutableArray *videoPayloads;
    VCImageAttributeRules *imageAttributeRules;
    NSString *sessionIP;
    NSNumber *audioRTPPort;
    NSNumber *audioRTCPPort;
    NSNumber *audioRTPID;
    NSNumber *videoRTPPort;
    NSNumber *videoRTCPPort;
    NSNumber *videoRTPID;
    _Bool allowRTCPFB;
    NSNumber *answerBandwidth;
    NSNumber *maxBandwidth;
    _Bool allowsDynamicMaxBitrate;
    _Bool allowsContentsChangeWithAspectPreservation;
    NSDictionary *featuresListDict;
    NSNumber *aacBlockSize;
    NSNumber *audioUnitModel;
    _Bool allowAudioRecording;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
}

@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording;
@property(nonatomic) _Bool allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation;
@property(retain, nonatomic) NSNumber *audioUnitModel; // @synthesize audioUnitModel;
@property(retain, nonatomic) NSNumber *aacBlockSize; // @synthesize aacBlockSize;
@property(retain, nonatomic) NSDictionary *featuresListDict; // @synthesize featuresListDict;
@property(nonatomic) _Bool allowsDynamicMaxBitrate; // @synthesize allowsDynamicMaxBitrate;
@property(retain, nonatomic) NSNumber *maxBandwidth; // @synthesize maxBandwidth;
@property(retain, nonatomic) NSNumber *answerBandwidth; // @synthesize answerBandwidth;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB;
@property(retain, nonatomic) NSNumber *videoRTPID; // @synthesize videoRTPID;
@property(retain, nonatomic) NSNumber *videoRTCPPort; // @synthesize videoRTCPPort;
@property(retain, nonatomic) NSNumber *videoRTPPort; // @synthesize videoRTPPort;
@property(retain, nonatomic) NSNumber *audioRTPID; // @synthesize audioRTPID;
@property(retain, nonatomic) NSNumber *audioRTCPPort; // @synthesize audioRTCPPort;
@property(retain, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort;
@property(retain, nonatomic) NSString *sessionIP; // @synthesize sessionIP;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property(readonly, nonatomic) NSMutableArray *videoPayloads; // @synthesize videoPayloads;
@property(readonly, nonatomic) NSMutableArray *secondaryAudioPayloads; // @synthesize secondaryAudioPayloads;
@property(readonly, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads;
@property(retain, nonatomic) NSString *origin; // @synthesize origin;
- (_Bool)getBasebandCodecType:(id *)arg1 sampleRate:(id *)arg2;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (id)toStringWithVideoEnabled:(_Bool)arg1;
- (_Bool)setVideoPayloads:(int *)arg1 count:(int)arg2;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)init;
- (id)SDPUsername;
- (id)composeVideoString;
- (id)composeAudioString;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (id)composeFLSString;
- (id)composeSessionString;
- (id)composeBandwidthString;
- (void)parseVideoMediaAttributes:(id)arg1;
- (void)parseAudioMediaAttributes:(id)arg1;
- (void)parseAudioFormatAttribute:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (void)parseSDPFromString:(id)arg1;
- (void)parseMedia:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)setVideoRTCPFB:(_Bool)arg1 useNACK:(_Bool)arg2;
- (_Bool)getUseSbr:(_Bool *)arg1 blockSize:(int *)arg2 forAACFormat:(int)arg3;
- (void)setUseSbr:(_Bool)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (void)rulesImageSize:(int)arg1 pWidth:(int *)arg2 pHeight:(int *)arg3;
- (int)rulesFramerate:(int)arg1;
- (void)parseImageAttributeRules:(id)arg1;
- (_Bool)videoDisplayAttribute:(int *)arg1 withHeight:(int *)arg2;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag *)arg5 remoteSupportsHD:(_Bool)arg6;
- (_Bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;
- (void)fillImageArray:(id)arg1 imageArray:(struct imageTag *)arg2;
- (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag *)arg2;
- (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag *)arg3;
- (id)getVideoRecvImages:(id)arg1;
- (id)getVideoSendImages:(id)arg1;
- (id)videoImageAttributes:(int)arg1;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;

@end
