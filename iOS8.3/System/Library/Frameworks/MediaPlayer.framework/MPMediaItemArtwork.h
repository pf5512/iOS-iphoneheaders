/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPMediaItemArtwork : NSObject {

	UIImage* _image;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(id)imageWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
-(CGRect)bounds;
-(id)initWithImage:(id)arg1 ;
@end
