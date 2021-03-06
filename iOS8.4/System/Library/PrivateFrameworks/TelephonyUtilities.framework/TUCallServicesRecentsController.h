/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TUCallServicesRecentsNotificationDelegate;
@class CHManager;

@interface TUCallServicesRecentsController : NSObject {

	id<TUCallServicesRecentsNotificationDelegate> _delegate;
	CHManager* _recentsManager;

}

@property (assign,nonatomic,__weak) id<TUCallServicesRecentsNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CHManager * recentsManager;                                                 //@synthesize recentsManager=_recentsManager - In the implementation block
+(id)recentCallWithTUCall:(id)arg1 ;
-(void)clearNotificationsIfNecessary;
-(void)_callHistoryChanged:(id)arg1 ;
-(void)_callStateChanged:(id)arg1 ;
-(void)_callFilteredOut:(id)arg1 ;
-(void)_callHistoryReady:(id)arg1 ;
-(CHManager *)recentsManager;
-(void)setRecentsManager:(CHManager *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TUCallServicesRecentsNotificationDelegate>)arg1 ;
-(id)init;
-(id<TUCallServicesRecentsNotificationDelegate>)delegate;
@end

