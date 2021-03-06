/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSArray, PLPhotoLibrary, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {

	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;

}

@property (nonatomic,readonly) NSArray * allWallpaperURLs; 
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)managedObjectContext;
-(id)photoLibrary;
-(void)setPhotoLibrary:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)updateAsNeeded;
-(id)allWallpaperURLs;
-(id)wallpaperFileHash;
-(void)deleteAll;
-(void)importAll;
-(id)allExistingWallpaperAssets;
-(void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2 ;
@end

