/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	bool _shouldPostNotifications;
	bool _active;
	bool _disableAV;
	bool _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) bool active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) bool disableAV; 
@property (nonatomic,readonly) bool forceChatLogging; 
@property (assign,nonatomic) bool shouldPostNotifications;                           //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) bool _disableAV;                                      //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) bool _forceChatLogging;                               //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(void)dealloc;
-(id)init;
-(bool)active;
-(bool)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(bool)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(bool)disableAV;
-(bool)forceChatLogging;
-(bool)disableService:(id)arg1 ;
-(id)whitelistForService:(id)arg1 ;
-(bool)forceWhitelistForService:(id)arg1 ;
-(bool)accountIsEnabled:(id)arg1 ;
-(bool)disableAccount:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(bool)forceWhitelistForAccount:(id)arg1 ;
-(bool)accountHasWhitelist:(id)arg1 ;
-(bool)shouldPostNotifications;
-(id)_parentalControls;
-(bool)_disableAV;
-(bool)_forceChatLogging;
@end

