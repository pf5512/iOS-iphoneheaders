/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MPUExtrasVideoTimeline : NSObject {

	NSArray* _timelineElements;
	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(NSArray *)events;
-(id)description;
-(id)initWithTimelineElements:(id)arg1 ;
-(id)eventForTime:(double)arg1 ;
@end
