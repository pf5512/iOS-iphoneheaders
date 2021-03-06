/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, PLCloudResourceRange, NSString;

@interface PLCloudLibraryLayoutBucket : NSObject {

	PLPhotoLibrary* _photoLibrary;
	unsigned short _category;
	PLCloudResourceRange* _mediumsRange;
	PLCloudResourceRange* _originalsRange;
	PLCloudResourceRange* _thumbnailsRange;
	/*^block*/id predicate;
	unsigned budgetShare;

}

@property (assign,nonatomic) unsigned budgetShare; 
@property (nonatomic,copy) id predicate; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short category; 
@property (nonatomic,readonly) unsigned long long totalAssetsCount; 
-(void)dealloc;
-(NSString *)name;
-(unsigned short)category;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(unsigned long long)totalAssetsCount;
-(unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 inRange:(NSRange)arg2 ;
-(id)initWithIdentifier:(unsigned short)arg1 photoLibrary:(id)arg2 ;
-(void)setBudgetShare:(unsigned)arg1 ;
-(id)cloudResourceFromAsset:(id)arg1 forQualityClass:(unsigned short)arg2 ;
-(unsigned)includeAsset:(id)arg1 ;
-(unsigned)excludeAsset:(id)arg1 ;
-(unsigned)budgetShare;
@end

