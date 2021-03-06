//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSFetchedResultsSectionInfo-Protocol.h>

@class NSArray, NSFetchedResultsController, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo>
{
    NSFetchedResultsController *_controller;
    NSString *_name;
    NSString *_indexTitle;
    unsigned long long _sectionOffset;
    unsigned long long _numberOfObjects;
    unsigned long long _oldSectionNumber;
    id _sectionObjects;
}

@property(nonatomic) unsigned long long oldSectionNumber; // @synthesize oldSectionNumber=_oldSectionNumber;
@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) unsigned long long sectionOffset; // @synthesize sectionOffset=_sectionOffset;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)indexOfObject:(id)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (void)clearSectionObjectsCache;
- (void)setController:(id)arg1;
@property(readonly, nonatomic) unsigned long long sectionNumber;
- (void)setSectionOffset:(unsigned long long)arg1;
- (void)setNumberOfObjects:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned long long)arg4;

@end

