/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface BuddyRoundedRectImageView : UIView {

	UIImageView* _imageView;
	char _usesMask;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) char usesMask;                //@synthesize usesMask=_usesMask - In the implementation block
-(void)setUsesMask:(char)arg1 ;
-(char)usesMask;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
@end

