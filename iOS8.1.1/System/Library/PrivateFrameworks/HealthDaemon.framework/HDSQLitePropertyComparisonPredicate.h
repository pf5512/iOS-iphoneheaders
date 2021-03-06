/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLitePredicate.h>
#import <HealthDaemon/NSCopying.h>

@class NSString;

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _lhObjectPropertyName;
	NSString* _rhObjectPropertyName;
	long long _comparisonType;

}

@property (nonatomic,readonly) NSString * lhObjectPropertyName;              //@synthesize lhObjectPropertyName=_lhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * rhObjectPropertyName;              //@synthesize rhObjectPropertyName=_rhObjectPropertyName - In the implementation block
@property (nonatomic,readonly) long long comparisonType;                     //@synthesize comparisonType=_comparisonType - In the implementation block
+(id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(long long)arg3 ;
-(long long)comparisonType;
-(NSString *)lhObjectPropertyName;
-(NSString *)rhObjectPropertyName;
-(id)SQLForEntityClass:(Class)arg1 ;
@end

