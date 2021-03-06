/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDs;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned _requestedTTL;
	unsigned _URLOptions;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;              //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned requestedTTL;                                  //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned URLOptions;                                    //@synthesize URLOptions=_URLOptions - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(void)setRequestedTTL:(unsigned)arg1 ;
-(void)setURLOptions:(unsigned)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned)requestedTTL;
-(unsigned)URLOptions;
@end

