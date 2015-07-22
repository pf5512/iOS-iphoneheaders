/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADClientStateDelegate, OS_dispatch_queue;
@class NSString, BKSApplicationStateMonitor, NSObject;

@interface ADClientState : NSObject {

	NSString* _clientBundleID;
	BKSApplicationStateMonitor* _stateMonitor;
	id<ADClientStateDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _instanceQueue;

}

@property (nonatomic,copy,readonly) NSString * clientBundleID;                        //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,readonly) unsigned clientApplicationState; 
@property (nonatomic,retain) BKSApplicationStateMonitor * stateMonitor;               //@synthesize stateMonitor=_stateMonitor - In the implementation block
@property (nonatomic,readonly) id<ADClientStateDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> instanceQueue;              //@synthesize instanceQueue=_instanceQueue - In the implementation block
-(void)_notifyDelegateOfStateChange;
-(void)globalStateDidChange:(id)arg1 ;
-(BKSApplicationStateMonitor *)stateMonitor;
-(NSObject*<OS_dispatch_queue>)instanceQueue;
-(unsigned)clientApplicationState;
-(id)initWithDelegate:(id)arg1 bundleID:(id)arg2 ;
-(id)clientStateTags;
-(void)setStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)setInstanceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id<ADClientStateDelegate>)delegate;
-(void)close;
-(NSString *)clientBundleID;
@end
