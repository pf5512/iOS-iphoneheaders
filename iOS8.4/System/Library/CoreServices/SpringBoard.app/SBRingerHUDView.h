/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBHUDView.h>

@interface SBRingerHUDView : SBHUDView {

	BOOL _silent;

}

@property (assign,getter=isSilent,nonatomic) BOOL silent;              //@synthesize silent=_silent - In the implementation block
-(void)_updateSilentImage;
-(void)setSilent:(BOOL)arg1 ;
-(BOOL)isSilent;
-(id)init;
@end

