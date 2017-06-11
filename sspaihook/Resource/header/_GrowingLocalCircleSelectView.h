//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingMenuPageView.h"

#import "UITextFieldDelegate.h"
#import "UIWebViewDelegate.h"

@class NSDictionary, NSString, UIWebView;

@interface _GrowingLocalCircleSelectView : GrowingMenuPageView <UITextFieldDelegate, UIWebViewDelegate>
{
    UIWebView *_theOnlyWebview;
    NSDictionary *_dataDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
- (void)dealloc;
- (void)hide;
- (void)inflatViews;
- (id)initWithType:(unsigned long long)arg1;
- (void)reportError:(id)arg1;
@property(retain, nonatomic) UIWebView *theOnlyWebview; // @synthesize theOnlyWebview=_theOnlyWebview;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
