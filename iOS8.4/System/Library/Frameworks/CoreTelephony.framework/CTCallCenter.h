/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CTCallCenter : NSObject {

	void* _server;
	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;

}

@property (retain) NSSet * currentCalls; 
@property (nonatomic,copy) id callEventHandler; 
-(BOOL)setUpServerConnection;
-(void)cleanUpServerConnection;
-(void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3 ;
-(void)setCallEventHandler:(id)arg1 ;
-(BOOL)calculateCallStateChanges:(id)arg1 ;
-(BOOL)getCurrentCallSetFromServer:(id)arg1 ;
-(id)callEventHandler;
-(void)setCurrentCalls:(NSSet *)arg1 ;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSSet *)currentCalls;
@end
