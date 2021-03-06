/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAnimation.h>

@class TabController;

@interface WAAnimation : UIAnimation {

	double _w0;
	double _zeta;
	double _wd;
	double _A;
	double _B;
	TabController* _tabController;
	double _animationDuration;

}

@property (nonatomic,retain) TabController * tabController;              //@synthesize tabController=_tabController - In the implementation block
@property (assign,nonatomic) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
-(id)tabController;
-(void)setTabController:(id)arg1 ;
-(void)dealloc;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(double)animationDuration;
-(float)eval:(float)arg1 ;
@end

