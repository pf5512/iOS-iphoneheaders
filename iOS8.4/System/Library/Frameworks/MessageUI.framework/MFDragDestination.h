/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFDragDestination <NSObject>
@required
-(id)supportedDropTypes:(id)arg1;
-(void)dropItem:(id)arg1;
-(id)viewForDrop;
-(void)dragUpdated:(id)arg1 atPoint:(CGPoint)arg2;
-(void)dragExited:(id)arg1;
-(void)dragEntered:(id)arg1 atPoint:(CGPoint)arg2;
-(CGRect*)dropRect;

@end

