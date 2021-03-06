/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class TNSheet;

@interface TNSheetSelection : TSKSelection {

	BOOL mIsPaginated;
	TNSheet* mSheet;

}

@property (nonatomic,readonly) TNSheet * sheet; 
@property (getter=isPaginated,nonatomic,readonly) BOOL paginated; 
+(Class)archivedSelectionClass;
+(id)selectionForSheet:(id)arg1 paginated:(BOOL)arg2 ;
-(BOOL)isPaginated;
-(id)initWithSheet:(id)arg1 paginated:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)sheet;
@end

