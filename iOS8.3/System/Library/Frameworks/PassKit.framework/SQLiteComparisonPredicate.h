/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/SQLitePropertyPredicate.h>
#import <passd/NSCopying.h>

@interface SQLiteComparisonPredicate : SQLitePropertyPredicate <NSCopying> {

	int _comparisonType;
	id _value;

}

@property (nonatomic,readonly) int comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                        //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 bitwiseAndValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 bitwiseNotAndValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3 ;
-(id)_comparisonTypeFormat;
-(int)comparisonType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end

