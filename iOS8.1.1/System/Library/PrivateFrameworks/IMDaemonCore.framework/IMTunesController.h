/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) NSDictionary * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
@end

