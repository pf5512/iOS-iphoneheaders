/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSString;

@interface IMParentalControlsService : NSObject {

	BOOL _disableService;
	BOOL _forceWhiteList;
	NSSet* _whitelist;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (assign) BOOL forceWhiteList;              //@synthesize forceWhiteList=_forceWhiteList - In the implementation block
@property (retain) NSSet * whitelist;                //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(NSSet *)whitelist;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setWhitelist:(NSSet *)arg1 ;
-(BOOL)disableService;
-(void)setDisableService:(BOOL)arg1 ;
-(BOOL)forceWhiteList;
-(void)setForceWhiteList:(BOOL)arg1 ;
@end

