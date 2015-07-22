/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSURL, NSMutableDictionary, NSString;

@interface WebApplication : UIApplication <UIApplicationDelegate> {

	NSURL* _lastActiveWebClipURL;
	NSMutableDictionary* webAppControllerDictionary;
	BOOL _wasSuspendedUnderLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(id)_currentWebAppController;
-(id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1 ;
-(void)bringToFrontWebAppControllerForWebAppURL:(id)arg1 ;
@end
