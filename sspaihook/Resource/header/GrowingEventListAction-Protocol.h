//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingChildContentPanel, GrowingEventListItem, UIImage;

@protocol GrowingEventListAction <NSObject>
- (void)eventlist_addElementFromItem:(GrowingEventListItem *)arg1 chartStyle:(long long)arg2 forPanel:(GrowingChildContentPanel *)arg3;
- (_Bool)eventlist_item:(GrowingEventListItem *)arg1 canShowWithStyle:(long long)arg2;
- (UIImage *)eventlist_screenShotWithTriggerNode:(id <GrowingNode>)arg1 thisNode:(id <GrowingNode>)arg2 item:(GrowingEventListItem *)arg3;
- (UIImage *)replay_screenShotWithTriggerNode:(id <GrowingNode>)arg1 thisNode:(id <GrowingNode>)arg2 item:(GrowingEventListItem *)arg3;
@end

