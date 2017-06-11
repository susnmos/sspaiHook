//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPTrackModel, NSMutableArray;

@interface MQPTrackManager : NSObject
{
    MQPTrackModel *_currentLog;
    NSMutableArray *_uploadTasks;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) MQPTrackModel *currentLog; // @synthesize currentLog=_currentLog;
- (id)init;
- (void)onErrorTrack:(id)arg1;
- (void)onTrackBizError:(id)arg1 error:(id)arg2;
- (void)onTrackCraError:(id)arg1 error:(id)arg2;
- (void)onTrackNetError:(id)arg1 error:(id)arg2;
- (void)removeLogFile:(id)arg1;
- (void)removeUploadedFiles:(id)arg1 succ:(_Bool)arg2;
@property(retain, nonatomic) NSMutableArray *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
- (id)storeToLocal;
- (void)transactionDidFinish;
- (void)transactionWillStart:(id)arg1;
- (void)uploadLogAll;
- (void)uploadLogFile:(id)arg1;
- (_Bool)uploadTrack:(id)arg1;

@end
