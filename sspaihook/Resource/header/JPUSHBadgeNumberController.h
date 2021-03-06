//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JPUSHBadgeNumberReportRequest, NSNumber, NSTimer;

@interface JPUSHBadgeNumberController : NSObject
{
    _Bool _isSendingLock;
    _Bool _isClearOut;
    NSTimer *_delaySendTimer;
    unsigned long long _delaySendIntervalIndex;
    _Bool _needAutoSend;
    NSNumber *_badgeValue;
    JPUSHBadgeNumberReportRequest *_badgeReport;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JPUSHBadgeNumberReportRequest *badgeReport; // @synthesize badgeReport=_badgeReport;
@property(retain, nonatomic) NSNumber *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void)becomeActive;
- (void)checkAutoSend;
- (void)clearBadgeInUserDefault;
- (void)doSendReport:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isSendingLock; // @dynamic isSendingLock;
- (void)requestTimeout;
- (void)setBadge:(id)arg1;
- (void)setBadgeInUserDefault:(id)arg1;
- (void)startDelaySendBadge:(id)arg1;
- (void)startSendSelfToSpaceAddress:(id)arg1;
- (void)stopDelayTimer:(_Bool)arg1;
- (void)stopDelayTimer:(_Bool)arg1 commandSource:(id)arg2;
- (void)willInactive;

@end

