//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JPUSHThread;

@interface JPUSHThreadBuilder : NSObject
{
    JPUSHThread *_resultThread;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (void)checkInitialized;
- (id)clear;
- (id)clearThreadName;
- (id)clone;
- (id)defaultInstance;
- (_Bool)hasThreadName;
- (_Bool)hasType;
- (id)initWithRunLoopMode:(unsigned long long)arg1;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
@property(retain) JPUSHThread *resultThread; // @synthesize resultThread=_resultThread;
- (id)setThreadName:(id)arg1;
- (id)threadName;
- (unsigned long long)type;

@end
