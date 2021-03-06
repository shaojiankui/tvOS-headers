//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

#import <MapKit/UIActivityViewControllerDelegate-Protocol.h>

@class MKMapItem, NSString;
@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate>
{
    MKMapItem *_mapItem;
    id <MKActivityViewControllerDelegate> _activityControllerDelegate;
}

@property(nonatomic) __weak id <MKActivityViewControllerDelegate> activityControllerDelegate; // @synthesize activityControllerDelegate=_activityControllerDelegate;
- (void).cxx_destruct;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (CDUnknownBlockType)_activityHandler;
- (CDUnknownBlockType)_completionHandler;
- (id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;
- (id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

