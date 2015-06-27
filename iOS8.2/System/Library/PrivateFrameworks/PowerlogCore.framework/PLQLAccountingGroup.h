/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PowerlogCore-Structs.h>
#import <PowerlogCore/PLQLAccountingGroupProtocol.h>

@class NSString;

@interface PLQLAccountingGroup : NSObject <PLQLAccountingGroupProtocol> {

	short _accountingGroupType;
	NSString* _accountingGroupName;
	/*^block*/id _accountingGroupDefinitionBlock;

}

@property (retain,readonly) NSString * accountingGroupName;              //@synthesize accountingGroupName=_accountingGroupName - In the implementation block
@property (readonly) short accountingGroupType;                          //@synthesize accountingGroupType=_accountingGroupType - In the implementation block
@property (readonly) id accountingGroupDefinitionBlock;                  //@synthesize accountingGroupDefinitionBlock=_accountingGroupDefinitionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)accountingGroupName;
-(short)accountingGroupType;
-(id)getLastSnapshot;
-(double)timeOfLastSnapshot;
-(double)safeTimeForAccounting;
-(id)accountingGroupDefinitionBlock;
-(id)createAccountingEntry:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4 ;
-(id)getLastOpenSnapshot;
-(id)getEventsInRange:(PLTimeIntervalRange)arg1 ;
-(id)genericCreateAccountingEventsInRange:(PLTimeIntervalRange)arg1 withIdentifierKey:(id)arg2 withEventKey:(id)arg3 withStartKey:(id)arg4 withStartValue:(id)arg5 withEndKey:(id)arg6 withEndValue:(id)arg7 withEntries:(id)arg8 ;
-(id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 withAccountingGroupDefinitionBlock:(/*^block*/id)arg3 ;
@end
