//
//  PDUIFBLoginWithWritePermsViewModel.m
//  PopdeemSDK
//
//  Created by Niall Quinn on 26/07/2016.
//  Copyright © 2016 Popdeem. All rights reserved.
//

#import "PDUIFBLoginWithWritePermsViewModel.h"
#import "PDUtils.h"
#import "PDTheme.h"

@implementation PDUIFBLoginWithWritePermsViewModel

- (instancetype) initForParent:(UIViewController*)parent loginType:(PDFacebookLoginType)loginType {
	if (self = [super init]) {
		self.loginType = loginType;
		return self;
	}
	return nil;
}

- (void) setup {
	switch (_loginType) {
  case PDFacebookLoginTypeRead:
			[self setupForReadLogin];
			break;
		case PDFacebookLoginTypePublish:
			[self setupForPublishLogin];
			break;
  default:
			[self setupForReadLogin];
			break;
	}
}

- (void) setupForReadLogin {
	self.labelText = translationForKey(@"popdeem.facebook.connect.read.labelText",@"You must log in using Facebook to claim this reward. We will never post to Facebook without your explicit permission.");
	self.labelColor = PopdeemColor(PDThemeColorPrimaryFont);
	self.labelFont = PopdeemFont(PDThemeFontPrimary, 14);
	
	self.logoImage = PopdeemImage(@"pduikit_fb_hi");
	
	self.buttonColor = PopdeemColor(PDThemeColorPrimaryApp);
	self.buttonTextColor = PopdeemColor(PDThemeColorPrimaryInverse);
	self.buttonLabelFont = PopdeemFont(PDThemeFontBold, 16);
	self.buttonText = translationForKey(@"popdeem.facebook.connect.read.actionButtonTitle", @"Continue");
}

- (void) setupForPublishLogin {
	self.labelText = translationForKey(@"popdeem.facebook.connect.publish.labelText",@"You must grant Publish Permissions to claim this reward. We will never post to Facebook without your explicit permission.");
	self.labelColor = PopdeemColor(PDThemeColorPrimaryFont);
	self.labelFont = PopdeemFont(PDThemeFontPrimary, 14);
	
	self.logoImage = PopdeemImage(@"pduikit_fb_hi");
	
	self.buttonColor = PopdeemColor(PDThemeColorPrimaryApp);
	self.buttonTextColor = PopdeemColor(PDThemeColorPrimaryInverse);
	self.buttonLabelFont = PopdeemFont(PDThemeFontBold, 16);
	self.buttonText = translationForKey(@"popdeem.facebook.connect.publish.actionButtonTitle", @"Continue");
}

@end
