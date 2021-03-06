/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CMNetworkActivityObserver;

@interface CMNetworkActivityMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _networkIsActive;
	CMNetworkActivityObserver* _cmObserver;
	long long _showingNetworkActivityCount;
	long long _monitoringActiveCount;

}

@property (assign,nonatomic) BOOL networkIsActive;                                                      //@synthesize networkIsActive=_networkIsActive - In the implementation block
@property (setter=setCMObserver:,nonatomic,retain) CMNetworkActivityObserver * cmObserver;              //@synthesize cmObserver=_cmObserver - In the implementation block
@property (assign,nonatomic) long long showingNetworkActivityCount;                                     //@synthesize showingNetworkActivityCount=_showingNetworkActivityCount - In the implementation block
@property (assign,nonatomic) long long monitoringActiveCount;                                           //@synthesize monitoringActiveCount=_monitoringActiveCount - In the implementation block
+(id)sharedActivityMonitor;
-(void)setNetworkIsActive:(BOOL)arg1 ;
-(void)setCMObserver:(id)arg1 ;
-(long long)monitoringActiveCount;
-(void)setMonitoringActiveCount:(long long)arg1 ;
-(CMNetworkActivityObserver *)cmObserver;
-(void)beginMonitoring;
-(void)endMonitoring;
-(long long)showingNetworkActivityCount;
-(void)setShowingNetworkActivityCount:(long long)arg1 ;
-(BOOL)networkIsActive;
-(void)dealloc;
-(id)init;
@end

