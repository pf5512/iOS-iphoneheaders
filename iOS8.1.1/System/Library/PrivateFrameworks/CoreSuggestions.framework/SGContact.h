/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>

@class SGName, NSArray;

@interface SGContact : NSObject <SGObject> {

	SGName* _name;
	NSArray* _emailAddresses;
	NSArray* _phones;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) SGName * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * phones;                       //@synthesize phones=_phones - In the implementation block
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactWithName:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 addresses:(id)arg4 ;
+(id)contactWithName:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 ;
-(NSArray *)postalAddresses;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSArray *)addresses;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(SGName *)arg1 ;
-(SGName *)name;
-(id)initWithName:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 ;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSArray *)phones;
-(unsigned long long)richness;
@end

