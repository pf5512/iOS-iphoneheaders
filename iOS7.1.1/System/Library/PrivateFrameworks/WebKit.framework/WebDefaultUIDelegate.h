/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebDefaultUIDelegate : NSObject
+(id)sharedUIDelegate;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg1 ;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(void)webViewFocus:(id)arg1 ;
-(void)webViewUnfocus:(id)arg1 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3 ;
-(void)webViewShow:(id)arg1 ;
-(void)webView:(id)arg1 setToolbarsVisible:(bool)arg2 ;
-(bool)webViewAreToolbarsVisible:(id)arg1 ;
-(void)webView:(id)arg1 setStatusBarVisible:(bool)arg2 ;
-(bool)webViewIsStatusBarVisible:(id)arg1 ;
-(void)webView:(id)arg1 setResizable:(bool)arg2 ;
-(void)webView:(id)arg1 setStatusText:(id)arg2 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 ;
-(id)webViewFirstResponder:(id)arg1 ;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2 ;
-(bool)webView:(id)arg1 shouldReplaceUploadFile:(id)arg2 usingGeneratedFilename:(id*)arg3 ;
-(id)webView:(id)arg1 generateReplacementFile:(id)arg2 ;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2 ;
-(CGRect)webViewFrame:(id)arg1 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(bool)arg3 ;
-(id)webViewStatusText:(id)arg1 ;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3 ;
-(bool)webViewIsResizable:(id)arg1 ;
-(void)webView:(id)arg1 didDrawRect:(CGRect)arg2 ;
-(void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2 ;
@end

