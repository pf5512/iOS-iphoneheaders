/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/StarkTopBarView.h>

@class UIView, StarkButton, NSString;

@interface StarkToolbarView : UIView <StarkTopBarView> {

	UIView* _backdrop;
	StarkButton* _leftButton;
	StarkButton* _rightButton;
	id _rightButtonTarget;
	SEL _rightButtonAction;
	id _leftButtonTarget;
	SEL _leftButtonAction;
	int _displayedLightLevel;
	int _buttonsSize;
	NSString* _leftButtonTitle;
	UIView* _leftAlternateView;
	NSString* _rightButtonTitle;
	int _rightButtonStyle;
	float _rightButtonMinimumWidth;
	UIView* _rightAccessoryView;
	UIView* _titleView;
	float _leftInset;

}

@property (assign,nonatomic) int displayedLightLevel;                    //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
@property (assign,nonatomic) int buttonsSize;                            //@synthesize buttonsSize=_buttonsSize - In the implementation block
@property (nonatomic,copy) NSString * leftButtonTitle;                   //@synthesize leftButtonTitle=_leftButtonTitle - In the implementation block
@property (nonatomic,retain) UIView * leftAlternateView;                 //@synthesize leftAlternateView=_leftAlternateView - In the implementation block
@property (nonatomic,copy) NSString * rightButtonTitle;                  //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (assign,nonatomic) int rightButtonStyle;                       //@synthesize rightButtonStyle=_rightButtonStyle - In the implementation block
@property (assign,nonatomic) float rightButtonMinimumWidth;              //@synthesize rightButtonMinimumWidth=_rightButtonMinimumWidth - In the implementation block
@property (nonatomic,retain) UIView * rightAccessoryView;                //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * titleView;                         //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) float leftInset;                            //@synthesize leftInset=_leftInset - In the implementation block
-(int)displayedLightLevel;
-(void)setDisplayedLightLevel:(int)arg1 ;
-(id)_newBackdrop;
-(void)_updateRightButton;
-(id)leftButtonTitle;
-(void)_leftButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(int)buttonsSize;
-(void)_setTitleView:(id)arg1 removingPreviousViewFromSuperview:(BOOL)arg2 ;
-(id)rightButtonTitle;
-(void)_rightButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(int)rightButtonStyle;
-(id)leftAlternateView;
-(float)rightButtonMinimumWidth;
-(id)rightAccessoryView;
-(void)_layoutOwnedSubviews;
-(void)setLeftInset:(float)arg1 animation:(id)arg2 ;
-(void)setButtonsSize:(int)arg1 ;
-(void)setLeftButtonTitle:(id)arg1 ;
-(void)setLeftAlternateView:(id)arg1 ;
-(void)setRightAccessoryView:(id)arg1 ;
-(void)setTitleView:(id)arg1 animation:(id)arg2 ;
-(void)setRightButtonTitle:(id)arg1 ;
-(void)setRightButtonStyle:(int)arg1 ;
-(void)setRightButtonMinimumWidth:(float)arg1 ;
-(void)setRightButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setLeftButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)titleView;
-(void)setTitleView:(id)arg1 ;
-(void)_updateLeftButton;
-(float)leftInset;
-(void)setLeftInset:(float)arg1 ;
@end

