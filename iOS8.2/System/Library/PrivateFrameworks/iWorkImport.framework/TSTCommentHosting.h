/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAnnotationHosting.h>
#import <iWorkImport/TSDCommentStorageDelegate.h>

@class TSDCommentStorage, TSTTableInfo, NSString, TSKAnnotationAuthor, NSDate;

@interface TSTCommentHosting : NSObject <TSDAnnotationHosting, TSDCommentStorageDelegate> {

	TSDCommentStorage* mStorage;
	char _forRollover;
	TSTTableInfo* mTableInfo;
	SCD_Struct_TS271 mCellID;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) SCD_Struct_TS271 cellID; 
@property (getter=isForRollover,nonatomic,readonly) char forRollover;                     //@synthesize forRollover=_forRollover - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> hostingModel; 
@property (nonatomic,readonly) NSString * changeTrackingTitleString; 
@property (nonatomic,readonly) NSString * changeTrackingContentString; 
@property (nonatomic,readonly) NSString * changeTrackingContentFormatString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(void)setStorage:(TSDCommentStorage *)arg1 ;
-(Class)editorClass;
-(void)commitText:(id)arg1 ;
-(id)commandForDeletingComment;
-(id<TSKModel>)hostingModel;
-(void)setHostingModel:(id<TSKModel>)arg1 ;
-(int)annotationDisplayStringType;
-(void)commentStorageTextDidChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(SCD_Struct_TS271)arg3 ;
-(TSTTableInfo *)tableInfo;
-(char)isForRollover;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDCommentStorage *)storage;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(TSKAnnotationAuthor *)author;
-(int)annotationType;
-(SCD_Struct_TS271)cellID;
@end

