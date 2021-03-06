/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@class NSString;

@interface MRGIFMoviePlayer : NSObject {

	NSString* _path;
	CGSize _size;
	CGImageSourceRef _imageSource;
	CGImageRef _currentImage;
	unsigned long _currentIndex;
	unsigned long _numberOfImages;
	double _nextImageTime;
	double _playTimeOffset;
	float _imageDuration;
	char _isPlaying;

}

@property (assign,nonatomic) char isPlaying;               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) CGImageRef currentImage; 
-(void)dealloc;
-(CGImageRef)currentImage;
-(void)setTime:(double)arg1 ;
-(void)cleanup;
-(char)isPlaying;
-(void)setIsPlaying:(char)arg1 ;
-(id)initWithPath:(id)arg1 andSize:(CGSize)arg2 ;
-(void)getNextImage;
@end

