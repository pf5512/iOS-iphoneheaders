/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSURL, MTRootViewController, NSString;

@interface MTAppDelegate : UIResponder <UIApplicationDelegate> {

	NSURL* _urlToOpen;
	char _explicitAllowed;
	UIWindow* _window;
	MTRootViewController* _rootViewController;

}

@property (nonatomic,retain) UIWindow * window;                            //@synthesize window=_window - In the implementation block
@property (retain) MTRootViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createWindow;
-(void)updateBadgeCount:(int)arg1 backgroundFetch:(char)arg2 ;
-(void)fetchCurrentUnplayedEpisodeCount:(/*^block*/id)arg1 ;
-(void)updateBadgeCountForBackgroundFetch;
-(void)fetchPreviousUnplayedEpisodeCount:(/*^block*/id)arg1 ;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(char)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setRootViewController:(MTRootViewController *)arg1 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(MTRootViewController *)rootViewController;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
@end

