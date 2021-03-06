/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLDataAccessLogger.bundle/PLDataAccessLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLDataAccessLogger : PLLogger {

	int _mailAccountChangeNotifyToken;

}
-(void)logDataReceived;
-(void)logMailAccounts;
-(void)logPingSent;
-(void)logForAccountsChanged;
-(id)humanReadableDAKey:(id)arg1 ;
-(void)_addConnectionDataToString:(id)arg1 forUUID:(id)arg2 ;
-(void)logDataWaitingToBeSynced;
-(void)dealloc;
-(id)init;
-(void)log;
@end

