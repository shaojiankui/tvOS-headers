//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaylist.h>

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

- (void).cxx_destruct;
- (void)endGeneratingGeniusClusterItems;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeFirstItem;
- (void)removeAllItems;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)multiverseIdentifier;
- (unsigned long long)mediaTypes;
- (unsigned long long)count;
- (id)representativeItem;
- (id)items;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)existsInLibrary;
- (id)mediaLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)itemsQuery;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;

@end

