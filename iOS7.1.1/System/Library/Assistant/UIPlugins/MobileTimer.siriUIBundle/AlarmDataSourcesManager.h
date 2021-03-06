/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface AlarmDataSourcesManager : NSObject {

	NSMutableArray* _alarmNotificationNames;

}
+(id)copyRegisterForManager;
-(void)registerForAlarmActionNotifications;
-(void)unregisterForAlarmActionNotifications;
-(void)postNotificationName:(id)arg1 forAlarmActionWithAlarmId:(id)arg2 ;
-(void)handleAlarmsChangedWithNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

