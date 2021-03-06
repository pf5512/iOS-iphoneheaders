/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject {

	unsigned long long _subRangeStart;
	TSWPRangeArray* _removedRanges;

}
-(id)initWithSubRange:(NSRange)arg1 removeRanges:(id)arg2 ;
-(id)inverseRangesInStorageRange:(NSRange)arg1 ;
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(void)adjustByDelta:(long long)arg1 ;
-(bool)containsCharIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

