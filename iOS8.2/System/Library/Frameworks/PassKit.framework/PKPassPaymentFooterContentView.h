/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PKPaymentPass, UIButton, UIView;

@interface PKPassPaymentFooterContentView : UIView {

	char _isVisibleAsFooter;
	PKPaymentPass* _pass;
	UIButton* _infoButton;
	UIView* _bottomRule;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;               //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                 //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,readonly) char isVisibleAsFooter;              //@synthesize isVisibleAsFooter=_isVisibleAsFooter - In the implementation block
-(void)willBecomeVisibleAnimated:(char)arg1 ;
-(void)willBecomeHiddenAnimated:(char)arg1 ;
-(void)didBecomeVisibleAnimated:(char)arg1 ;
-(void)didBecomeHiddenAnimated:(char)arg1 ;
-(UIView *)bottomRule;
-(void)_infoButtonPressed:(id)arg1 ;
-(char)isVisibleAsFooter;
-(void)dealloc;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(id)initWithPass:(id)arg1 ;
-(PKPaymentPass *)pass;
@end

