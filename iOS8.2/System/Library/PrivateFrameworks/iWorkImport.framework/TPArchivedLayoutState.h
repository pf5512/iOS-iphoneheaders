/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TPArchivedLayoutStateProtocol.h>

@class NSArray;

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol> {

	unsigned _sectionIndex;
	unsigned _sectionPageIndex;
	unsigned _documentPageIndex;
	unsigned _lastPageCount;
	NSArray* _sectionHints;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_reset;
-(void)captureLayoutStateWithProvider:(id)arg1 ;
-(void)readLayoutStateWithConsumer:(id)arg1 ;
-(void)dealloc;
@end

