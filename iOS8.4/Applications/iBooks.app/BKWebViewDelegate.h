/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKWebViewDelegate <NSObject>
@optional
-(char)navigationAction:(id)arg1 actionInformation:(id)arg2;
-(char)webView:(id)arg1 shouldAllowRemoteResource:(id)arg2;
-(void)webViewDidReceiveUnhandledClick:(id)arg1 atPoint:(CGPoint)arg2;
-(void)webView:(id)arg1 didTapOnAnchor:(id)arg2 forFootnote:(id)arg3;
-(void)smilElementClicked:(id)arg1 element:(id)arg2;
-(void)webView:(id)arg1 invokedSMILControlAction:(int)arg2 withSMILTurnStyle:(int)arg3;
-(void)webViewStartedPlayingExclusiveAudioVideo:(id)arg1;
-(void)webViewStoppedPlayingExclusiveAudioVideo:(id)arg1;
-(void)webViewDidEnterFullscreen:(id)arg1;
-(void)webViewDidExitFullscreen:(id)arg1;
-(void)webViewDidDraw:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)webViewDidFinishLoad:(id)arg1;

@end

