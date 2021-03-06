/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class DATrustHandler;


@protocol DARefreshManagerDelegate
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@optional
-(id)password;
-(void)interfaceWentUp;
-(void)interfaceWentDown;
-(id)serverTokenRegistrationURL;
-(id)username;

@required
-(DATrustHandler *)trustHandler;
-(id)scheduleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;
-(id)onBehalfOfBundleIdentifier;

@end

