/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol VOTElementManagementProtocol;
@interface VOTDebugManager : NSObject {

	id<VOTElementManagementProtocol> _elementManager;

}

@property (nonatomic,retain) id<VOTElementManagementProtocol> elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
+(id)sharedInstance;
-(void)setElementManager:(id<VOTElementManagementProtocol>)arg1 ;
-(id<VOTElementManagementProtocol>)elementManager;
-(void)dealloc;
-(id)init;
@end

