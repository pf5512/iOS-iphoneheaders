/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {

	NSMutableArray* mRules;
	EDReferenceCollection* mRanges;
	BOOL mApplyToDate;

}
+(id)conditionalFormatting;
-(void)dealloc;
-(id)init;
-(unsigned)ruleCount;
-(id)ruleAtIndex:(unsigned)arg1 ;
-(void)addRule:(id)arg1 ;
-(BOOL)isApplyToDate;
-(void)addRange:(id)arg1 ;
-(unsigned)rangeCount;
-(id)rangeAtIndex:(unsigned)arg1 ;
-(id)rules;
@end

