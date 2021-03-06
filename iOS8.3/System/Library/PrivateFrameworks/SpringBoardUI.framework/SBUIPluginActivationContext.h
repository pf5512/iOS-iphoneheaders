/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen;

@interface SBUIPluginActivationContext : NSObject {

	UIScreen* _screen;
	int _activationEvent;

}

@property (nonatomic,retain) UIScreen * screen;                //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) int activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
-(void)dealloc;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(int)activationEvent;
-(void)setActivationEvent:(int)arg1 ;
@end

