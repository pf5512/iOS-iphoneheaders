/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSubCal/DADaemonSubCal-Structs.h>
#import <DADaemonSubCal/SubCalDaemonAccount.h>
#import <DADaemonSubCal/DADataclassLockWatcher.h>
#import <DADaemonSubCal/CoreDAVAccountInfoProvider.h>

@class NSDate, NSTimer, CalDAVCalendarSearchTask, NSString;

@interface HolidayCalDaemonAccount : SubCalDaemonAccount <DADataclassLockWatcher, CoreDAVAccountInfoProvider> {

	NSDate* _lastRefreshDate;
	NSTimer* _refreshTimer;
	CalDAVCalendarSearchTask* _searchTask;

}

@property (nonatomic,retain) NSTimer * refreshTimer;                             //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) CalDAVCalendarSearchTask * searchTask;              //@synthesize searchTask=_searchTask - In the implementation block
@property (nonatomic,readonly) NSString * region; 
@property (nonatomic,readonly) NSString * language; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregisterForNotifications;
-(BOOL)isHolidaySubscribedCalendar;
-(void)dealloc;
-(NSString *)region;
-(NSString *)language;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)waiterID;
-(BOOL)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(id)calendarExternalId;
-(void)subCalRefreshTask:(id)arg1 finishedWithError:(id)arg2 ;
-(void)_tearDownRefreshTimer;
-(void)setSearchTask:(CalDAVCalendarSearchTask *)arg1 ;
-(void*)_copyHolidaySubscribedCalendar;
-(void)_reallyRemoveHolidaySubscribedCalendar;
-(void)_removeHolidaySubscribedCalendar;
-(void)_handleCalendarSearchResults:(id)arg1 ;
-(id)_lastRefreshDate;
-(BOOL)_calendarHasCorrectLocale;
-(void)_fetchUpdatedSubscriptionURL;
-(void)_saveLastRefreshDate:(id)arg1 ;
-(void)_saveCurrentLanguageAndLocale;
-(void)_refreshTimerFired:(id)arg1 ;
-(void)_saveHolidayCalMetadata:(id)arg1 ;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(CalDAVCalendarSearchTask *)searchTask;
-(void)_localeDidChange:(id)arg1 ;
-(void)_refresh:(BOOL)arg1 ;
@end

