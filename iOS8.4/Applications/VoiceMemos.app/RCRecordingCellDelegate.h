/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCRecordingCellDelegate <NSObject>
@required
-(void)playbackCell:(id)arg1 didRequestPreviewState:(int)arg2;
-(void)playbackCell:(id)arg1 didScrubToTime:(double)arg2;
-(void)playbackCellShareButtonTapped:(id)arg1;
-(void)playbackCellEditButtonTapped:(id)arg1;
-(void)playbackCellDeleteButtonTapped:(id)arg1;
-(char)playbackCell:(id)arg1 shouldBeginEditingTitleField:(id)arg2;
-(id)playbackCell:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;

@end
