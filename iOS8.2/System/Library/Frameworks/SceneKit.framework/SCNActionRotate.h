/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionRotate : SCNAction {

	SCNCActionRotate* _mycaction;

}
+(id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(float)arg1 aroundAxis:(SCNVector3)arg2 duration:(double)arg3 ;
+(id)rotateToAxisAngle:(SCNVector4)arg1 duration:(double)arg2 ;
+(id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 shortestUnitArc:(char)arg5 ;
+(char)supportsSecureCoding;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
