//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, PLManagedAsset;
@protocol PLAlbumProtocol, PLSlideshowPluginDelegate;

@interface PLSlideshowPlugin : NSObject
{
    id <PLSlideshowPluginDelegate> _delegate;
    struct NSObject *_album;
    NSArray *_albumAssets;
    double _secondsPerSlide;
    _Bool _shuffleAlbum;
    _Bool _shouldRepeat;
}

@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) _Bool shuffleAlbum; // @synthesize shuffleAlbum=_shuffleAlbum;
@property(nonatomic) double secondsPerSlide; // @synthesize secondsPerSlide=_secondsPerSlide;
@property(nonatomic) id <PLSlideshowPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *albumAssets; // @synthesize albumAssets=_albumAssets;
- (void)stopSlideshow;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewDidAppear;
- (void)slideshowViewWillAppear;
- (id)newSlideshowView;
@property(readonly, nonatomic) NSArray *displayedPhotos;
@property(readonly, nonatomic) PLManagedAsset *currentPhoto;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album;
- (void)dealloc;

@end

