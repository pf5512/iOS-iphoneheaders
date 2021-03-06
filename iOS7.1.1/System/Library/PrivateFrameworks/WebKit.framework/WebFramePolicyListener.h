/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebPolicyDecisionListener.h>
#import <WebKit/WebFormSubmissionListener.h>

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {

	RefPtr<WebCore::Frame>* _frame;
	 _policyFunction;

}
+(void)initialize;
-(void)download;
-(void)dealloc;
-(void)invalidate;
-(void)ignore;
-(void)use;
-(id).cxx_construct;
-(void)continue;
-(void).cxx_destruct;
-(id)initWithFrame:(Frame*)arg1 ;
-(void)receivedPolicyDecision:(int)arg1 ;
@end

