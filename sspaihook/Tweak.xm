#import <WebKit/WKWebView.h>
#import <WebKit/WKWebViewConfiguration.h>
#import <WebKit/WKPreferences.h>

@interface ArticleModel : NSObject
-(NSString *)ID;
@end

@interface ArticleViewController: UIViewController
@property (nonatomic, strong) WKWebView *wkView;
@property (nonatomic, strong) UIWebView *webView;
-(id)view;
-(void)loadUIWebView;
-(ArticleModel *)article;
-(void)loadHTMLString:(NSString *)agr1 baseURL:(id)arg2;
-(void)stopLoading;
@end

%hook HomeTableViewController

%end

%hook ArticleViewController
- (void)loadWkWebView {
  HBLogInfo(@"%s", __func__);
  
  // fix method 1 {
  //  [self loadUIWebView];
  // }
  
//  fix method 2 {
  WKWebViewConfiguration *conf = [[%c(WKWebViewConfiguration) alloc] init];
  WKPreferences *preferences = [[%c(WKPreferences) alloc] init];
  [conf setPreferences: preferences];
  [preferences setJavaScriptEnabled: YES];
  [preferences setJavaScriptCanOpenWindowsAutomatically: NO];
  
  //  WKUserContentController *userCC = [[%c(WKUserContentController) alloc] init];
  WKWebView *webView = [[%c(WKWebView) alloc] initWithFrame: [UIScreen mainScreen].bounds configuration: conf];
  [webView setBackgroundColor: [UIColor whiteColor]];
  [webView setOpaque: NO];
  [webView setUIDelegate: (id)self];
  [webView setNavigationDelegate: (id)self];
  
  [webView.scrollView setDelegate: nil];
  
  [self.view addSubview: webView];
  self.wkView = webView;
  [webView addObserver: self forKeyPath: @"estimatedProgress" options: 3 context: nil];
  NSString *idStr = [self.article ID];
  NSString *urlStr = [NSString stringWithFormat: @"https://ios.sspai.com/api/v1/index/article/detail/get/%@", idStr];
  NSURL *url = [NSURL URLWithString: urlStr];
  NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL: url];
  
  UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc] initWithTarget: self action: @selector(handleLongPress:)];
  [webView addGestureRecognizer: tapGes];
  [self.wkView loadRequest: request];
//  }
}

//   fix method 2 [===>
//-(void)dealloc {
//
//    %orig;
//    [[self.wkView scrollView] setDelegate: nil];
//    return;

//   %orig;
//}
//   ===>]
%end
