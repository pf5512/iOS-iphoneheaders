/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBDefaultBannerViewSource, SBBulletinDateLabel;
@class UIColor, SBUIBannerContext, UIImageView, UILabel, SBDefaultBannerTextView, UIView;

@interface SBDefaultBannerView : UIView <SBDateLabelDelegate, SBUIBannerView> {

	SBUIBannerContext* _context;
	<SBDefaultBannerViewSource>* _viewSource;
	UIImageView* _iconImageView;
	UILabel<SBBulletinDateLabel>* _relevanceDateLabel;
	SBDefaultBannerTextView* _textView;
	UIImageView* _attachmentImageView;
	CGSize _grabberSize;
	UIView* _grabberView;

}

@property (nonatomic,copy) UIColor * grabberColor; 
+(id)defaultGrabberColor;
-(void)dateLabelDidChange:(id)arg1 ;
-(id)bannerContext;
-(id)grabberColor;
-(void)setGrabberColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end

