/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint {

	bool _shouldEnableLimits;
	double _lowerAngleLimit;
	double _upperAngleLimit;
	double _frictionTorque;

}

@property (assign,nonatomic) bool shouldEnableLimits;              //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerAngleLimit;               //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;               //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
@property (assign,nonatomic) double frictionTorque;                //@synthesize frictionTorque=_frictionTorque - In the implementation block
+(id)allocWithZone:(NSZone)arg1 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(bool)shouldEnableLimits;
-(void)setShouldEnableLimits:(bool)arg1 ;
-(double)lowerAngleLimit;
-(void)setLowerAngleLimit:(double)arg1 ;
-(double)upperAngleLimit;
-(void)setUpperAngleLimit:(double)arg1 ;
-(double)frictionTorque;
-(void)setFrictionTorque:(double)arg1 ;
@end

