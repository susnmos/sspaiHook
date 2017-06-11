//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface BTNConfiguration : NSObject <BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    NSMutableDictionary *_mutableLocalizedCopy;
    NSMutableDictionary *_mutableParameters;
    NSMutableDictionary *_mutableLinksConfiguration;
    NSMutableArray *_mutableFlags;
    double _minimumUpdateInterval;
    NSDate *_lastUpdateDate;
}

- (void).cxx_destruct;
- (void)applyConfigurationWithPayload:(id)arg1;
- (void)applyConfigurationWithPayload:(id)arg1 persist:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *flags;
- (id)init;
- (id)initWithResources:(id)arg1;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) NSDictionary *linksConfiguration;
@property(readonly, nonatomic) NSDictionary *localizedCopy;
@property(nonatomic) double minimumUpdateInterval; // @synthesize minimumUpdateInterval=_minimumUpdateInterval;
@property(retain, nonatomic) NSMutableArray *mutableFlags; // @synthesize mutableFlags=_mutableFlags;
@property(retain, nonatomic) NSMutableDictionary *mutableLinksConfiguration; // @synthesize mutableLinksConfiguration=_mutableLinksConfiguration;
@property(retain, nonatomic) NSMutableDictionary *mutableLocalizedCopy; // @synthesize mutableLocalizedCopy=_mutableLocalizedCopy;
@property(retain, nonatomic) NSMutableDictionary *mutableParameters; // @synthesize mutableParameters=_mutableParameters;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) NSDictionary *parameters;
- (void)persistConfiguration;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
- (id)retrievePersistedConfiguration;
- (_Bool)shouldUpdateFromRemoteConfiguration;
- (void)updateConfigurationWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
