//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKCorrelation.h>

@interface HKCorrelation (HDDataEntity)
- (void)hd_cleanupBeforeJournalInsertion;
- (id)hd_relatedJournalEntries;
- (_Bool)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entityPersistentID:(id)arg3 error:(id *)arg4;
@end
