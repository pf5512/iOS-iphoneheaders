/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {

	bool _syncEvents;
	bool _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;
	NSDateComponents* _todoFilterStartDate;
	NSDateComponents* _todoFilterEndDate;

}

@property (assign) bool syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign) bool syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
@property (retain) NSDateComponents * todoFilterStartDate;               //@synthesize todoFilterStartDate=_todoFilterStartDate - In the implementation block
@property (retain) NSDateComponents * todoFilterEndDate;                 //@synthesize todoFilterEndDate=_todoFilterEndDate - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setSyncEvents:(bool)arg1 ;
-(void)setSyncTodos:(bool)arg1 ;
-(bool)syncTodos;
-(bool)syncEvents;
-(void)setEventFilterStartDate:(id)arg1 ;
-(void)setEventFilterEndDate:(id)arg1 ;
-(void)setTodoFilterStartDate:(id)arg1 ;
-(void)setTodoFilterEndDate:(id)arg1 ;
-(id)_icsDateStringForNSDateComponents:(id)arg1 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_appendComponentFiltersToXMLData:(id)arg1 ;
-(id)eventFilterStartDate;
-(id)eventFilterEndDate;
-(id)todoFilterStartDate;
-(id)todoFilterEndDate;
-(id)requestBody;
-(id)httpMethod;
@end

