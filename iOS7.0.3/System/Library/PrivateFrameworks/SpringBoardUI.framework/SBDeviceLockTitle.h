/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString;

@interface SBDeviceLockTitle : UIView {

	int _style;
	int _interfaceOrientation;

}

@property (assign,nonatomic) int interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
+(id)newWithStyle:(int)arg1 interfaceOrientation:(int)arg2 ;
-(void)setTitle:(id)arg1 ;
-(int)interfaceOrientation;
-(id)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setInterfaceOrientation:(int)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 ;
-(void)blinkSubtitle;
@end

