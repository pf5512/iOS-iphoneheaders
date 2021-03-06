/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableDictionary, UIAlertView, NSMutableArray;

@interface SheetController : NSObject <UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSMutableDictionary* _views;
	UIAlertView* _view;
	NSMutableArray* _alertInvocationQueue;
	id _delegate;
	int _actionToPerform;
	bool _isDismissed;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3 ;
-(void)showSheetForAlert:(id)arg1 inView:(id)arg2 ;
-(void)hideSheet;
@end

