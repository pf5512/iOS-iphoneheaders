/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRTransferServerDelegate.h>

@protocol TRDeviceSetupServerDelegate;
@class TRTransferServer, NSString;

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate> {

	TRTransferServer* _transferServer;
	BOOL _cancelledSetupInProgress;
	int _notifyToken;
	BOOL _notifyTokenIsValid;
	BOOL _setupInProgress;
	BOOL _started;
	id<TRDeviceSetupServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRDeviceSetupServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)setDelegate:(id<TRDeviceSetupServerDelegate>)arg1 ;
-(id)init;
-(id<TRDeviceSetupServerDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2 ;
-(void)serverWillReceiveData:(id)arg1 ;
-(id)server:(id)arg1 didReceiveData:(id)arg2 ;
-(void)cancelActiveSetup;
@end
