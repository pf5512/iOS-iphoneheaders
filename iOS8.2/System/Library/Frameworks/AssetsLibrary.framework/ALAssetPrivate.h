/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary, NSString;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	char _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) char isValid;                                     //@synthesize isValid=_isValid - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) char deletable; 
@property (nonatomic,retain) PLManagedAsset * photo;                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(void)libraryDidChange;
-(PLPhotoLibrary *)_photoLibrary;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLManagedAsset *)photo;
-(void)dealloc;
-(char)isValid;
-(void)setIsValid:(char)arg1 ;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(ALAssetsLibrary *)library;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(char)isDeletable;
@end

