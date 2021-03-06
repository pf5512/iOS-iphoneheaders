/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@class NSMutableSet;

@interface BBDefaultLog : BSFileLogger {

	NSMutableSet* _knownCategories;

}
-(void)dealloc;
-(id)init;
-(id)name;
-(char)isEnabled;
-(void)_setEnabled:(char)arg1 ;
-(void)reloadFromDefaults;
-(char)_shouldEnableCategory:(id)arg1 ;
-(id)logPreferenceDomain;
-(id)logPreferenceName;
-(id)logPath;
-(unsigned)logDestinations;
@end

