/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSFormMetadataController.h>

@class WebScriptWorld;

@interface WBUFormMetadataController : WBSFormMetadataController {

	WebScriptWorld* _scriptWorld;

}

@property (nonatomic,readonly) WebScriptWorld * scriptWorld;              //@synthesize scriptWorld=_scriptWorld - In the implementation block
+(id)sharedFormMetadataController;
-(WebScriptWorld *)scriptWorld;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
@end

