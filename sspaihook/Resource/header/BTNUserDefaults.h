//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSUserDefaults;

@interface BTNUserDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_accessSynchronizationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessSynchronizationQueue; // @synthesize accessSynchronizationQueue=_accessSynchronizationQueue;
- (_Bool)boolForKey:(id)arg1;
- (id)buttonItems;
- (void)clear;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithNSUserDefaults:(id)arg1;
- (void)migrateUserDefaultsItems;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setButtonItems:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

@end
