/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class NSString;

@interface GKImageKey : NSObject {

	NSString* _filePath;
	NSString* _cacheKey;
	NSString* _imageID;
	NSString* _basename;
	CGSize _size;

}

@property (nonatomic,retain) NSString * imageID;                 //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,retain) NSString * basename;                //@synthesize basename=_basename - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
+(id)fileNameWithIdentifierInImageSource:(id)arg1 ;
+(id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2 ;
-(void)setBasename:(id)arg1 ;
-(void)setImageID:(id)arg1 ;
-(id)imageID;
-(id)basename;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)cacheKey;
-(id)filePath;
@end

