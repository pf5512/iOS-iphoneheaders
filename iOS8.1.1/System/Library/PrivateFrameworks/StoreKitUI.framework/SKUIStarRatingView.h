/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView {

	double _elementSpacing;
	UIImageView* _ratingStarsImageView;
	UILabel* _textLabel;

}

@property (assign,nonatomic) double elementSpacing;                   //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (nonatomic,retain) UIImage * ratingStarsImage; 
@property (nonatomic,readonly) UILabel * textLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setElementSpacing:(double)arg1 ;
-(UIImage *)ratingStarsImage;
-(void)setRatingStarsImage:(UIImage *)arg1 ;
-(double)elementSpacing;
@end

