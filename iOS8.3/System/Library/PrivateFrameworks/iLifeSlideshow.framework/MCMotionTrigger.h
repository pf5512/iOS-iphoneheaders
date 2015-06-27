/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction {

	NSString* _key;
	float _easeIn;
	float _easeOut;
	double _duration;

}

@property (copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float easeIn;                 //@synthesize easeIn=_easeIn - In the implementation block
@property (assign,nonatomic) float easeOut;                //@synthesize easeOut=_easeOut - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3 ;
-(id)description;
-(double)duration;
-(NSString *)key;
-(void)setDuration:(double)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)imprint;
-(void)demolish;
-(float)easeIn;
-(float)easeOut;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setEaseIn:(float)arg1 ;
-(void)setEaseOut:(float)arg1 ;
@end
