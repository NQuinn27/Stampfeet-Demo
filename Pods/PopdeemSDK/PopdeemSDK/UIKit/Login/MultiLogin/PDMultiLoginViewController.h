//
//  PDMultiLoginViewController.h
//  PopdeemSDK
//
//  Created by Niall Quinn on 10/01/2017.
//  Copyright © 2017 Popdeem. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import "PDUIModalLoadingView.h"
#import "InstagramResponseModel.h"
#import "InstagramLoginDelegate.h"

@interface PDMultiLoginViewController : UIViewController <InstagramLoginDelegate>

@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *imageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *titleLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *bodyLabel;
@property (unsafe_unretained, nonatomic) IBOutlet FBSDKLoginButton *facebookLoginButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *twitterLoginButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *instagramLoginButton;
@property (nonatomic, retain) PDUIModalLoadingView *loadingView;

- (instancetype) initFromNib;
- (void) registerWithModel:(InstagramResponseModel*)model;

@end
