/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {

	BOOL _shouldRepeat;
	BOOL _shouldShuffle;
	BOOL _shouldPlayMusic;
	BOOL _summarizeMomentSections;
	int _transition;
	int _secondsPerSlide;
	MPMediaItemCollection* _musicCollection;

}
+(id)sharedInstance;
+(int)randomTransition;
-(void)dealloc;
-(id)init;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(int)secondsPerSlide;
-(BOOL)shouldPlayMusic;
-(BOOL)shouldShuffle;
-(BOOL)shouldRepeat;
-(int)transitionForAnimationMovingForward:(BOOL)arg1 ;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1 ;
-(void)reloadPhotoDefaultValues;
-(id)musicCollection;
-(void)setShouldPlayMusic:(BOOL)arg1 ;
-(void)setMusicCollection:(id)arg1 ;
-(BOOL)summarizeMomentSections;
@end

