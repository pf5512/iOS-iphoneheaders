/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:44:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBFileLogger.h>

@interface FBWorkspaceLogger : FBFileLogger {

	char _useOverrideDestinations;
	unsigned _overrideDestinations;

}
-(id)init;
-(id)name;
-(char)isEnabled;
-(void)_setEnabled:(char)arg1 ;
-(void)reloadFromDefaults;
-(unsigned)logDestinations;
-(void)_configureOverrideDestinationForString:(id)arg1 ;
-(int)maxLogCount;
-(int)maxLogSize;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned)arg2 ;
-(void)willBeginLoggingToPath:(id)arg1 ;
@end

