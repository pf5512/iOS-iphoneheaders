/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUWebViewController.h>

@interface BKWebViewController : SUWebViewController {

	char _upsellPage;
	char _paused;

}

@property (assign,getter=isUpsellPage,nonatomic) char upsellPage;              //@synthesize upsellPage=_upsellPage - In the implementation block
@property (assign,getter=isPaused,nonatomic) char paused;                      //@synthesize paused=_paused - In the implementation block
-(char)isUpsellPage;
-(void)invalidateWebView;
-(void)setUpsellPage:(char)arg1 ;
-(void)setPaused:(char)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)copyScriptProperties;
-(char)isPaused;
@end

