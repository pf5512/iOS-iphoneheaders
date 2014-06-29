/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SDWormholeControllerDelegate;
@class SDStatusMonitor, NSMutableDictionary;

@interface SDWormholeController : NSObject {

	BOOL _started;
	SDStatusMonitor* _monitor;
	NSMutableDictionary* _properties;
	<SDWormholeControllerDelegate>* _delegate;

}

@property (__weak) <SDWormholeControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addObservers;
-(void)removeObservers;
-(void)somethingChanged:(id)arg1 ;
-(void)configureSettingsForAirDrop;
-(void)setStatusAndNotify;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
@end
