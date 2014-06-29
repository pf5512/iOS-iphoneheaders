/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonCalDAV/DAPreferredDaysToSyncDidChangeObserver.h>
#import <DADaemonCalDAV/DAValidityCheckConsumer.h>

@interface CalDAVAgent : DAAgent <DAPreferredDaysToSyncDidChangeObserver, DAValidityCheckConsumer>
-(void)startMonitoring;
-(void)_setupNotifications;
-(void)reallyRefresh;
-(void)refreshDidCompleteWithError:(id)arg1 ;
-(void)_validateAndSync:(bool)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(bool)arg1 isUserRequested:(bool)arg2 ;
-(void)preferredDaysToSyncDidChange;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
@end
