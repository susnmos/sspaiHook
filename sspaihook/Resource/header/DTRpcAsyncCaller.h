//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface DTRpcAsyncCaller : NSObject
{
    _Bool _cancelled;
    _Bool _finished;
    NSThread *_asyncThread;
}

+ (id)callAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)afterCompleteAction;
@property(nonatomic) __weak NSThread *asyncThread; // @synthesize asyncThread=_asyncThread;
- (void)beforeCompleteAction;
- (void)cancel;
- (void)handleException:(id)arg1;
- (id)init;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)startAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
