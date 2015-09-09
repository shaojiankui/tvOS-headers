//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, HDDatabaseValueCache, NSNumber;
@protocol OS_dispatch_queue;

@interface HDDeviceManager : NSObject
{
    HDDaemon *_daemon;
    NSNumber *_deviceForNoneID;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
}

@property(retain, nonatomic) HDDatabaseValueCache *deviceEntitiesByDevice; // @synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice;
@property(retain, nonatomic) HDDatabaseValueCache *devicesByPersistentID; // @synthesize devicesByPersistentID=_devicesByPersistentID;
- (void).cxx_destruct;
- (id)dataTypesForDevice:(id)arg1 error:(id *)arg2;
- (id)allDeviceEntitiesWithError:(id *)arg1;
- (id)_noneDevice;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceEntityForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)currentDeviceEntityWithError:(id *)arg1;
- (id)deviceEntityForNoDeviceWithError:(id *)arg1;
- (id)init;
- (id)initWithDaemon:(id)arg1;

@end
