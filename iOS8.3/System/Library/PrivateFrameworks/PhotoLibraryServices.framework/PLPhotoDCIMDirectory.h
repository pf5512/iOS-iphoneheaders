/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	char _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDCIMPath:(id)arg1 ;
-(void)lockDirectory;
-(id)nextAvailableDirectory;
-(void)unlockDirectory;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)saveUserInfo;
-(id)dcimPath;
-(void)reloadUserInfo;
-(id)miscPath;
-(id)_userInfoPath;
-(void)recreateInfoPlist;
-(id)dcfDirectories;
-(char)isValidImageExtension:(id)arg1 ;
-(char)isValidVideoExtension:(id)arg1 ;
-(void)countOfAllPhotos:(int*)arg1 andVideos:(int*)arg2 stopAfterFirst:(char)arg3 ;
-(id)posterImagePath;
-(void)clearDCFDirectories;
-(id)countOfAllPhotosAndVideos;
-(char)hasChangedExternally;
-(void)setHasChangedExternally:(char)arg1 ;
@end
