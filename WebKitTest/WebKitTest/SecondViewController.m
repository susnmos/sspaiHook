//
//  SecondViewController.m
//  WebKitTest
//
//  Created by susnm on 2017/6/11.
//  Copyright © 2017年 susnm. All rights reserved.
//

#import "SecondViewController.h"
#import <WebKit/WebKit.h>
#import <objc/message.h>

@interface SecondViewController ()<UIScrollViewDelegate>
@property (nonatomic, strong) WKWebView *wkView;

@end

@interface WKWebView (ScrollViewDelegate)<UIScrollViewDelegate>

@property (nonatomic, weak) id<UIScrollViewDelegate> scrollViewDelegate;

@end

@implementation WKWebView (ScrollViewDelegate)

+(void)load {
  Method scrollViewWillBeginDragging = class_getInstanceMethod(self, @selector(scrollViewWillBeginDragging:));
  Method hook_scrollViewWillBeginDragging = class_getInstanceMethod(self, @selector(hook_scrollViewWillBeginDragging:));
  
  Method scrollViewDidEndScrollingAnimation = class_getInstanceMethod(self, @selector(scrollViewDidEndScrollingAnimation:));
  Method hook_scrollViewDidEndScrollingAnimation = class_getInstanceMethod(self, @selector(hook_scrollViewDidEndScrollingAnimation:));
  
  method_exchangeImplementations(scrollViewWillBeginDragging, hook_scrollViewWillBeginDragging);
  method_exchangeImplementations(scrollViewDidEndScrollingAnimation, hook_scrollViewDidEndScrollingAnimation);
}

- (NSObject *)scrollViewDelegate {
  return objc_getAssociatedObject(self, @selector(scrollViewDelegate));
}

- (void)setScrollViewDelegate:(NSObject *)delegate {
  objc_setAssociatedObject(self, @selector(scrollViewDelegate), delegate, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (void)hook_scrollViewWillBeginDragging:(UIScrollView *)scrollView {
  NSLog(@"%s", __func__);
  [self hook_scrollViewWillBeginDragging:scrollView];
  [self.scrollViewDelegate scrollViewWillBeginDragging:scrollView];
}

- (void)hook_scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView {
  NSLog(@"%s", __func__);
  [self hook_scrollViewDidEndScrollingAnimation:scrollView];
  [self.scrollViewDelegate scrollViewDidEndScrollingAnimation:scrollView];
}

@end

@implementation SecondViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  WKWebViewConfiguration *conf = [[WKWebViewConfiguration alloc] init];
  WKPreferences *preferences = [[WKPreferences alloc] init];
  [conf setPreferences: preferences];
  [preferences setJavaScriptEnabled: YES];
  [preferences setJavaScriptCanOpenWindowsAutomatically: NO];
  
  //  WKUserContentController *userCC = [[%c(WKUserContentController) alloc] init];
  WKWebView *webView = [[WKWebView alloc] initWithFrame: [UIScreen mainScreen].bounds configuration: conf];
  [webView setBackgroundColor: [UIColor whiteColor]];
  [webView setOpaque: NO];
  [webView setUIDelegate: (id)self];
  [webView setNavigationDelegate: (id)self];
  
//  [webView.scrollView setDelegate: (id)self];
//  webView.scrollViewDelegate = self;
  
  [self.view addSubview: webView];
  self.wkView = webView;
  [webView addObserver: self forKeyPath: @"estimatedProgress" options: 3 context: nil];
  NSString *idStr = @"39580";
  NSString *urlStr = [NSString stringWithFormat: @"https://ios.sspai.com/api/v1/index/article/detail/get/%@", idStr];
  NSURL *url = [NSURL URLWithString: urlStr];
  NSURLRequest *request = [NSURLRequest requestWithURL: url];
  
  UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc] initWithTarget: self action: @selector(handleLongPress:)];
  [webView addGestureRecognizer: tapGes];
  [webView loadRequest: request];
  
  // nav
  self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Back" style:UIBarButtonSystemItemCancel target:self action:@selector(close)];
}

- (void)dealloc {
  [self.wkView removeObserver:self forKeyPath:@"estimatedProgress"];
//  [super dealloc];
}

- (void)close {
  [self dismissViewControllerAnimated:YES completion: nil];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context {
  NSLog(@"%s keyPath: %@ change: %@", __func__, keyPath, change);
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}

- (void)handleLongPress:(UIGestureRecognizer *)gesture {
  NSLog(@"%s", __func__);
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
  NSLog(@"%s", __func__);
}

- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView {
  NSLog(@"%s", __func__);
}
@end
