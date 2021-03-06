/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>
#import <HealthKit/_HKFactor.h>

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {

	NSString* _unitString;
	NSString* _prefix;
	NSString* _root;
	BOOL _uniqued;
	double _proportionalSize;

}

@property (nonatomic,readonly) _HKBaseDimension * dimension; 
@property (nonatomic,readonly) double proportionalSize;                   //@synthesize proportionalSize=_proportionalSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unitFromString:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedRootUnit:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3 ;
+(id)_uniquedRootUnitFromDefinition:(SCD_Struct_HK4)arg1 ;
+(id)_rootUnitWithDefinition:(SCD_Struct_HK4)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)unitString;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(double)proportionalSize;
-(id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2 ;
-(id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end

