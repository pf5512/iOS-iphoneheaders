/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, NSString;

@interface BuddyLabelAndLinkFooterView : UIView {

	UILabel* _label;
	UIButton* _linkButton;
	UIButton* _secondLinkButton;
	BOOL _wantsSideBySideLayout;
	float _flexibleHeight;
	float _backgroundInset;

}

@property (assign,nonatomic) float flexibleHeight;                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (assign,nonatomic) float backgroundInset;                   //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,retain) NSString * linkText; 
@property (nonatomic,retain) NSString * secondLinkText; 
@property (assign,nonatomic) BOOL wantsSideBySideLayout;              //@synthesize wantsSideBySideLayout=_wantsSideBySideLayout - In the implementation block
+(void)initialize;
-(float)flexibleHeight;
-(void)setFlexibleHeight:(float)arg1 ;
-(void)setBackgroundInset:(float)arg1 ;
-(void)addTargetForLink:(id)arg1 action:(SEL)arg2 ;
-(void)setSecondLinkText:(id)arg1 ;
-(void)addTargetForSecondLink:(id)arg1 action:(SEL)arg2 ;
-(void)setWantsSideBySideLayout:(BOOL)arg1 ;
-(id)secondLinkText;
-(float)backgroundInset;
-(BOOL)wantsSideBySideLayout;
-(void)removeTargetForLink:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForSecondLink:(id)arg1 action:(SEL)arg2 ;
-(id)labelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(void)setLabelText:(id)arg1 ;
-(id)linkText;
-(void)setLinkText:(id)arg1 ;
@end

