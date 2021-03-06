//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNQuickPropertyAction.h>

@class CNQuickAction, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNQuickDisambiguateAction : CNQuickPropertyAction
{
    _Bool _ignoreMainAction;
    NSOrderedSet *_actions;
    CNQuickAction *_mainAction;
}

@property(nonatomic) _Bool ignoreMainAction; // @synthesize ignoreMainAction=_ignoreMainAction;
@property(nonatomic) __weak CNQuickAction *mainAction; // @synthesize mainAction=_mainAction;
@property(retain, nonatomic) NSOrderedSet *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)description;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithActions:(id)arg1;

@end

