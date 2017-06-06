//
//  PDUIInstagramShareViewModel.h
//  PopdeemSDK
//
//  Created by Niall Quinn on 04/07/2016.
//  Copyright © 2016 Popdeem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PDUIInstagramShareViewModel : NSObject

@property (nonatomic, retain) NSString *viewOneLabelOneText;
@property (nonatomic, retain) NSString *viewOneLabelTwoText;
@property (nonatomic, retain) NSString *viewTwoLabelOneText;
@property (nonatomic, retain) NSString *viewTwoLabelTwoText;
@property (nonatomic, retain) NSString *viewOneActionButtonText;
@property (nonatomic, retain) NSString *viewTwoActionButtonText;

@property (nonatomic, retain) UIFont *viewOneLabelOneFont;
@property (nonatomic, retain) UIFont *viewOneLabelTwoFont;
@property (nonatomic, retain) UIFont *viewTwoLabelOneFont;
@property (nonatomic, retain) UIFont *viewTwoLabelTwoFont;
@property (nonatomic, retain) UIFont *viewOneActionButtonFont;
@property (nonatomic, retain) UIFont *viewTwoActionButtonFont;

@property (nonatomic, retain) UIColor *viewOneLabelOneColor;
@property (nonatomic, retain) UIColor *viewOneLabelTwoColor;
@property (nonatomic, retain) UIColor *viewTwoLabelOneColor;
@property (nonatomic, retain) UIColor *viewTwoLabelTwoColor;
@property (nonatomic, retain) UIColor *viewOneActionButtonColor;
@property (nonatomic, retain) UIColor *viewOneActionButtonTextColor;
@property (nonatomic, retain) UIColor *viewOneActionButtonBorderColor;
@property (nonatomic, retain) UIColor *viewTwoActionButtonColor;
@property (nonatomic, retain) UIColor *viewTwoActionButtonTextColor;

@property (nonatomic, retain) UIImage *viewOneImage;
@property (nonatomic, retain) UIImage *viewTwoImage;

- (void) setup;

@end
