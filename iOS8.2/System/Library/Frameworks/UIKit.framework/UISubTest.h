/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSMutableArray, NSString;

@interface UISubTest : NSObject {

	NSNumber* _startTime;
	NSNumber* _startFrame;
	NSMutableArray* _time;
	NSMutableArray* _fps;
	NSString* _testName;
	char _showTime;
	char _showFps;

}
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(void)stopWithFrameCount:(id)arg1 ;
-(id)outputData;
@end

