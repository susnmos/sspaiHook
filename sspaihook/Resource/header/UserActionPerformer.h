//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UserActionPerformer : NSObject
{
    _Bool _enabled;
    NSMutableArray *_actions;
    CDUnknownBlockType _completionBlock;
}

+ (id)sharedUserActionPerformer;
- (void).cxx_destruct;
@property(retain) NSMutableArray *actions; // @synthesize actions=_actions;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void)pushNewAction:(id)arg1;
- (void)pushNewActionWithBlock:(CDUnknownBlockType)arg1;
- (void)pushNewClickActionOnControl:(id)arg1;
- (void)runOnce;
- (void)startWithPerfRecorder:(CDUnknownBlockType)arg1 andCompletion:(CDUnknownBlockType)arg2;

@end
