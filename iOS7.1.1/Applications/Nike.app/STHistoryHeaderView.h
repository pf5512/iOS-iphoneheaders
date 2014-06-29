/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class STHistoryController, UIView, UILabel, STHistoryDistanceView, UITouch;

@interface STHistoryHeaderView : UIView {

	STHistoryController* _historyController;
	UIView* _leftView;
	UIView* _rightView;
	UILabel* _bestTimeLabel;
	UILabel* _bestTimeTitleLabel;
	STHistoryDistanceView* _totalDistanceLabel;
	UITouch* _trackingTouch;
	unsigned _touchInsideBestView : 1;
	unsigned _touchInsideTotalsView : 1;

}

@property (assign,nonatomic) STHistoryController * historyController;                   //@synthesize historyController=_historyController - In the implementation block
@property (nonatomic,readonly) UILabel * bestTimeLabel;                                 //@synthesize bestTimeLabel=_bestTimeLabel - In the implementation block
@property (nonatomic,readonly) STHistoryDistanceView * totalDistanceLabel;              //@synthesize totalDistanceLabel=_totalDistanceLabel - In the implementation block
-(void)setHistoryController:(id)arg1 ;
-(id)bestTimeLabel;
-(id)totalDistanceLabel;
-(id)historyController;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
