/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload {

	BOOL _allowAccessWithoutPasscode;
	BOOL _forceAllowSupervisorAccess;
	NSArray* _whitelistedAppsAndOptions;

}

@property (nonatomic,retain) NSArray * whitelistedAppsAndOptions;              //@synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions - In the implementation block
@property (assign,nonatomic) BOOL allowAccessWithoutPasscode;                  //@synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode - In the implementation block
@property (assign,nonatomic) BOOL forceAllowSupervisorAccess;                  //@synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess - In the implementation block
+(id)knownOptionsKeys;
+(id)knownUserEnabledOptionKeys;
-(id)description;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(void)setWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(NSArray *)whitelistedAppsAndOptions;
-(BOOL)allowAccessWithoutPasscode;
-(BOOL)forceAllowSupervisorAccess;
-(void)setAllowAccessWithoutPasscode:(BOOL)arg1 ;
-(void)setForceAllowSupervisorAccess:(BOOL)arg1 ;
@end

