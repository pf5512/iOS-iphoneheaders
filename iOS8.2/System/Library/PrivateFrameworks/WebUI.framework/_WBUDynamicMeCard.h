/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _WBUDynamicMeCard : NSObject {

	void* _me;
	NSMutableArray* _blocksPendingMeCard;

}
+(int)_ABPropertyIDForString:(id)arg1 ;
+(char)isProxyProperty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_addressBookChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 isMultiValue:(char*)arg2 ;
-(id)valueForProxyProperty:(id)arg1 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
@end

