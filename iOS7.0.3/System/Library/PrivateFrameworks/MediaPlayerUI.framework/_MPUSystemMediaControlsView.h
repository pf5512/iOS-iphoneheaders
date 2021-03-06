/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUTransportControlsView, MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView;

@interface _MPUSystemMediaControlsView : UIView {

	int _style;
	MPUTransportControlsView* _transportControlsView;
	MPUChronologicalProgressView* _timeInformationView;
	MPUMediaControlsTitlesView* _trackInformationView;
	MPUMediaControlsVolumeView* _volumeView;

}

@property (nonatomic,readonly) int style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPUTransportControlsView * transportControlsView;                //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,retain) MPUChronologicalProgressView * timeInformationView;              //@synthesize timeInformationView=_timeInformationView - In the implementation block
@property (nonatomic,retain) MPUMediaControlsTitlesView * trackInformationView;               //@synthesize trackInformationView=_trackInformationView - In the implementation block
@property (nonatomic,retain) MPUMediaControlsVolumeView * volumeView;                         //@synthesize volumeView=_volumeView - In the implementation block
-(id)volumeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(id)transportControlsView;
-(id)timeInformationView;
-(id)trackInformationView;
-(void)updatePlaybackState:(BOOL)arg1 ;
-(void)_layoutSubviewsControlCenteriPad;
-(void)setTransportControlsView:(id)arg1 ;
-(void)setTimeInformationView:(id)arg1 ;
-(void)setTrackInformationView:(id)arg1 ;
-(void)setVolumeView:(id)arg1 ;
-(void).cxx_destruct;
@end

