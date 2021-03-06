/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <EventKitUI/EKCurrentTimeMarkerViewUpdating.h>

@class UIScrollView, EKDayTimeView, UIView, UILabel, NSString;

@interface WeekTimeView : UIView <UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating> {

	UIScrollView* _timeScroller;
	EKDayTimeView* _timeView;
	UIView* _rightBorderView;
	UILabel* _monthLabel;
	UILabel* _allDayLabel;
	UIView* _allDayBackgroundColorView;
	UIView* _topAllDaySeparatorView;
	UIView* _bottomAllDaySeparatorView;
	UIView* _headerBackground;
	float _headerHeight;
	int _orientation;

}

@property (assign,nonatomic) float headerHeight;                       //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) BOOL usesLightText; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL allDayHighlighted; 
@property (assign,nonatomic) BOOL allDayVisible; 
@property (nonatomic,retain) NSString * monthText; 
@property (assign,nonatomic) int orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize timeScroller=_timeScroller - In the implementation block
@property (nonatomic,readonly) EKDayTimeView * timeView;               //@synthesize timeView=_timeView - In the implementation block
+(float)widthForOrientation:(int)arg1 ;
-(float)allDayBackgroundColorOriginY;
-(BOOL)allDayVisible;
-(void)_adjustAllDayLabelToFit;
-(void)setAllDayHighlighted:(BOOL)arg1 ;
-(BOOL)allDayHighlighted;
-(void)setDayTimeViewDelegate:(id)arg1 ;
-(void)setAllDayVisible:(BOOL)arg1 ;
-(void)setMonthText:(id)arg1 ;
-(id)monthText;
-(id)timeView;
-(void)setUsesLightText:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)updateMarkerPosition;
-(BOOL)showsTimeMarker;
-(BOOL)usesLightText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)orientation;
-(void)sizeToFit;
-(void)setOrientation:(int)arg1 ;
-(id)scrollView;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void).cxx_destruct;
@end

