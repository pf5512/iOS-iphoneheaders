/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {

	id _reserved;
	SCNCAction* _caction;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long timingMode; 
@property (assign,nonatomic) id timingFunction; 
@property (assign,nonatomic) double speed; 
+(id)SCNJSExportProtocol;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
+(id)waitForDuration:(double)arg1 withRange:(double)arg2 ;
+(id)waitForDuration:(double)arg1 ;
+(id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 aroundAxis:(SCNVector3)arg2 duration:(double)arg3 ;
+(id)rotateToAxisAngle:(SCNVector4)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5 ;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
+(id)repeatAction:(id)arg1 count:(unsigned long long)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
+(id)fadeOpacityBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(double)arg1 duration:(double)arg2 ;
+(id)removeFromParentNode;
+(id)customActionWithDuration:(double)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)moveBy:(SCNVector3)arg1 duration:(double)arg2 ;
+(id)moveTo:(SCNVector3)arg1 duration:(double)arg2 ;
+(id)sequence:(id)arg1 ;
+(id)group:(id)arg1 ;
+(id)runBlock:(/*^block*/id)arg1 ;
+(id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2 ;
+(id)performSelector:(SEL)arg1 onTarget:(id)arg2 ;
+(id)runAction:(id)arg1 onChildNodeWithName:(id)arg2 ;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeInWithDuration:(double)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)setCppAction:(void*)arg1 ;
-(void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willResumeWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2 ;
-(double)ratioForTime:(double)arg1 ;
-(void)wasAddedToTarget:(id)arg1 atTime:(double)arg2 ;
-(void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setKey:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(SCNCAction*)caction;
-(BOOL)isCustom;
-(id)reversedAction;
-(double)durationRange;
-(void)setDurationRange:(double)arg1 ;
-(long long)timingMode;
-(void)setTimingMode:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(id)arg1 ;
-(double)speed;
-(id)timingFunction;
@end

