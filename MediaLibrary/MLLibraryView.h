//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLLibrary;

@interface MLLibraryView : NSObject
{
    struct shared_ptr<mlcore::LibraryView> _coreView;
    MLLibrary *_library;
}

@property(readonly, nonatomic) MLLibrary *library; // @synthesize library=_library;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)performChangeRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performQuery:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setFilterPredicate:(id)arg1 forEntityClass:(Class)arg2;
- (id)filterPredicateForEntityClass:(Class)arg1;
- (id)initWithLibrary:(id)arg1;

@end

