/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {

	WebScriptCallFramePrivate* _private;
	id _userInfo;

}
-(id)_initWithGlobalObject:(id)arg1 debugger:(WebScriptDebugger*)arg2 caller:(id)arg3 debuggerCallFrame:(const DebuggerCallFrame*)arg4 ;
-(void)_setDebuggerCallFrame:(const DebuggerCallFrame*)arg1 ;
-(void)_clearDebuggerCallFrame;
-(id)_convertValueToObjcValue:(JSValue*)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)caller;
-(id)evaluateWebScript:(id)arg1 ;
-(id)scopeChain;
-(id)exception;
-(id)functionName;
@end
