/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	UIImage* shadowImage;
	UIImage* topShadowImage;
	char hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * topShadowImage; 
@property (assign,nonatomic) char hidesShadow; 
+(int)typicalBarPosition;
-(void)dealloc;
-(UIImage *)backgroundImage;
-(UIImage *)miniBackgroundImage;
-(char)hidesShadow;
-(void)setHidesShadow:(char)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)topShadowImage;
-(UIImage *)topBackgroundImage;
-(UIImage *)miniTopBackgroundImage;
-(void)setTopShadowImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setMiniBackgroundImage:(UIImage *)arg1 ;
-(void)setTopBackgroundImage:(UIImage *)arg1 ;
-(void)setMiniTopBackgroundImage:(UIImage *)arg1 ;
@end
