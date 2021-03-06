/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DAnimationInterpolation;

@interface TSCH3DAnimationTiming : NSObject {

	box<glm::detail::tvec1<float> > mRange;
	TSCH3DAnimationInterpolation* mInterpolation;

}

@property (assign,nonatomic) box<glm::detail::tvec1<float> > range; 
@property (nonatomic,retain) TSCH3DAnimationInterpolation * interpolation; 
+(id)timing;
-(float)toClampedLocal:(float)arg1 ;
-(float)toLocal:(float)arg1 ;
-(float)toClampedInterpolatedLocal:(float)arg1 ;
-(TSCH3DAnimationInterpolation *)interpolation;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setInterpolation:(TSCH3DAnimationInterpolation *)arg1 ;
-(box<glm::detail::tvec1<float> >)range;
-(void)setRange:(box<glm::detail::tvec1<float> >)arg1 ;
@end

