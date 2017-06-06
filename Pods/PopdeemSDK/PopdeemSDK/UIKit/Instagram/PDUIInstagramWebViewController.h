//
//  PDUIInstagramWebViewController.h
//  PopdeemSDK
//
//  Created by Niall Quinn on 17/06/2016.
//  Copyright © 2016 Popdeem. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDUIModalLoadingView.h"
#import <WebKit/WKWebView.h>

@interface PDUIInstagramWebViewController : UIViewController
@property (unsafe_unretained, nonatomic) IBOutlet UINavigationBar *navigationBar;
@property (unsafe_unretained, nonatomic) IBOutlet UIWebView *webView;
@property (unsafe_unretained, nonatomic) IBOutlet WKWebView *wkWebView;
@property (nonatomic, retain) PDUIModalLoadingView *loadingView;
- (instancetype) initFromNib;
@end
