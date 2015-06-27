/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerDelegate.h>

@protocol MKActivityViewControllerDelegate;
@class NSString;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {

	id<MKActivityViewControllerDelegate> _activityControllerDelegate;

}

@property (assign,nonatomic,__weak) id<MKActivityViewControllerDelegate> activityControllerDelegate;              //@synthesize activityControllerDelegate=_activityControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4 ;
-(/*^block*/id)_activityHandler;
-(id)initWithSource:(id)arg1 destination:(id)arg2 applicationActivities:(id)arg3 routeProviderDelegate:(id)arg4 ;
-(id<MKActivityViewControllerDelegate>)activityControllerDelegate;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 applicationActivities:(id)arg3 ;
-(void)setActivityControllerDelegate:(id<MKActivityViewControllerDelegate>)arg1 ;
-(/*^block*/id)_completionHandler;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
@end
