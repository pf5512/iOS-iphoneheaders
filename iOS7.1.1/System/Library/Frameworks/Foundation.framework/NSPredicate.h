/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedPredicateFlags : 31;
	}  _predicateFlags;
	unsigned reserved;

}
+(id)cr_predicateWithEncodedDataRepresentation:(id)arg1 ;
+(id)predicateWithValue:(bool)arg1 ;
+(CFLocaleRef)retainedLocale;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
+(id)predicateWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(bool)supportsSecureCoding;
+(void)initialize;
+(id)predicateWithFormat:(id)arg1 ;
+(id)predicateWithBlock:(/*^block*/ id)arg1 ;
-(id)cr_encodedDataRepresentation;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(bool)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 addressBook:(void*)arg2 propertyIndices:(const _CFDictionary*)arg3 ;
-(void)ab_addCallbackContextToArray:(CFArrayRef)arg1 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)generateMetadataDescription;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(bool)_allowsEvaluation;
-(bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)evaluateWithObject:(id)arg1 ;
@end

