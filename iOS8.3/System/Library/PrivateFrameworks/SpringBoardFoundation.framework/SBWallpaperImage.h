/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:34:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage {

	int _variant;
	NSData* _data;

}

@property (nonatomic,readonly) int variant;                //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
+(id)cachedWallpaperDataForVariant:(int)arg1 ;
+(CGImageRef)_newBlackWallpaperImage;
+(void)preheatWallpaperDataForVariant:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSData *)data;
-(id)initWithVariant:(int)arg1 ;
-(int)variant;
@end
