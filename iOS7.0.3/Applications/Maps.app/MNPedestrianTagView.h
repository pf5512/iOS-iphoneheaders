/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, VerticalShadowView;

@interface MNPedestrianTagView : UIView {

	BOOL _isDimmed;
	UILabel* _titleLabel;
	UILabel* _detailsLabel;
	VerticalShadowView* _shadowView;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                       //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (assign,nonatomic) BOOL isDimmed;                                //@synthesize isDimmed=_isDimmed - In the implementation block
@property (nonatomic,retain) VerticalShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
-(void)updateStyleForTheme;
-(void)setIsDimmed:(BOOL)arg1 ;
-(void)setDetailsLabel:(id)arg1 ;
-(void)updateStyleThemeDimmed:(BOOL)arg1 animation:(id)arg2 ;
-(id)detailsLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)titleLabel;
-(id)shadowView;
-(void)setShadowView:(id)arg1 ;
-(void)setTitleLabel:(id)arg1 ;
-(BOOL)isDimmed;
@end
