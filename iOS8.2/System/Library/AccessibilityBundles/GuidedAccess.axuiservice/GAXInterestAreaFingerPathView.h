/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXInterestAreaFingerPathViewDataSource;
@class GAXStyleProvider;

@interface GAXInterestAreaFingerPathView : UIView {

	id<GAXInterestAreaFingerPathViewDataSource> _dataSource;
	GAXStyleProvider* _styleProvider;

}

@property (assign,nonatomic) id<GAXInterestAreaFingerPathViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                    //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)reloadAllInterestAreaPaths;
-(void)_enumerateInterestAreaPathsUsingBlock:(/*^block*/id)arg1 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<GAXInterestAreaFingerPathViewDataSource>)arg1 ;
-(id<GAXInterestAreaFingerPathViewDataSource>)dataSource;
-(void)_commonInit;
@end
