/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>
@optional
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(char)arg2;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;

@end

