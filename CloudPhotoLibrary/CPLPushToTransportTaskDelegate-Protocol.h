//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLChangeBatch, CPLPushToTransportTask;
@protocol CPLEngineTransportUploadBatchTask;

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportUploadBatchTask>)task:(CPLPushToTransportTask *)arg1 wantsToPushBatch:(CPLChangeBatch *)arg2 progressBlock:(void (^)(NSString *, float))arg3 continuationBlock:(void (^)(NSError *))arg4;
@end
