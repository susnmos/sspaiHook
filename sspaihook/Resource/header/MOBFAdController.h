//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIWindow;

@interface MOBFAdController : NSObject
{
    MOBFAdController *_selfRetain;
    NSDictionary *_adInfo;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
- (void)dismiss;
- (id)initWithAdInfo:(id)arg1;
- (void)openWebView:(id)arg1;
@property(retain, nonatomic) MOBFAdController *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)show;

@end

