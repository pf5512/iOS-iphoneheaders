/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class PKPaymentPass, PKPaymentApplication, UILabel, UIImageView, UIActivityIndicatorView, UIColor;

@interface PKPaymentPassTableCell : UITableViewCell {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	UILabel* _mainLabel;
	UILabel* _secondaryLabel;
	UILabel* _passStateLabel;
	UIImageView* _snapshotView;
	UIActivityIndicatorView* _activityIndicator;
	char _showState;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _highlightColor;

}

@property (assign,nonatomic) UIColor * mainLabelColor;                 //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (assign,nonatomic) UIColor * subTextLabelColor;              //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightColor;                 //@synthesize highlightColor=_highlightColor - In the implementation block
-(id)initWithPass:(id)arg1 secureElementIdentifier:(id)arg2 ;
-(void)setShowPassState:(char)arg1 ;
-(id)_stringForPassState:(unsigned)arg1 ;
-(id)_textColorForPassState:(unsigned)arg1 ;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end

