/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	char mHorzMerge;
	char mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(void)dealloc;
-(id)init;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(char)merge:(int)arg1 ;
-(char)horzMerge;
-(char)vertMerge;
-(int)gridSpan;
-(id)textBody;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(char)arg1 ;
-(void)setVertMerge:(char)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)topRow;
-(void)setTopRow:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
-(int)rowSpan;
-(void)setRowSpan:(int)arg1 ;
@end

