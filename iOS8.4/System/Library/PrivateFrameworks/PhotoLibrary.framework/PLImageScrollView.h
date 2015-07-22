/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIScrollView.h>

@interface PLImageScrollView : UIScrollView {

	BOOL _adjustZoomScaleAfterRotation;

}

@property (assign,nonatomic) BOOL adjustZoomScaleAfterRotation;              //@synthesize adjustZoomScaleAfterRotation=_adjustZoomScaleAfterRotation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_centerContentIfNecessary;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)setAdjustZoomScaleAfterRotation:(BOOL)arg1 ;
-(BOOL)adjustZoomScaleAfterRotation;
@end
