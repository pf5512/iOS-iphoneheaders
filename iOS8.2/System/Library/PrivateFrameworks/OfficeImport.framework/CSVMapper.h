/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class CMArchiveManager, NSMutableArray, NSString;

@interface CSVMapper : CMMapper {

	CMArchiveManager* mArchiver;
	NSMutableArray* mRows;
	NSString* mFileName;
	unsigned mColumnCount;
	CGSize mPageSize;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned)arg3 archiver:(id)arg4 ;
-(CGSize)pageSize;
@end

