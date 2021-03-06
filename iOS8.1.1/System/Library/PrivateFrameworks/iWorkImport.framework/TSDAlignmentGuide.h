/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAbstractGuide.h>

@class CALayer, TSDUserDefinedGuide;

@interface TSDAlignmentGuide : TSDAbstractGuide {

	int mType;
	double mStart;
	double mEnd;
	BOOL mDynamic;
	BOOL mInfinite;
	BOOL mSnapsToMin;
	BOOL mSnapsToMax;
	BOOL mSnapsToMid;
	CALayer* mLayer;
	TSDUserDefinedGuide* mModelGuide;

}

@property (assign,nonatomic) double start; 
@property (assign,nonatomic) double end; 
@property (assign,nonatomic) int guideType; 
@property (assign,nonatomic) BOOL dynamic; 
@property (assign,nonatomic) BOOL infinite; 
@property (assign,nonatomic) BOOL snapsToMin; 
@property (assign,nonatomic) BOOL snapsToMid; 
@property (assign,nonatomic) BOOL snapsToMax; 
@property (nonatomic,retain) TSDUserDefinedGuide * modelGuide; 
-(id)initWithRect:(CGRect)arg1 edge:(int)arg2 ;
-(void)setInfinite:(BOOL)arg1 ;
-(int)guideType;
-(TSDUserDefinedGuide *)modelGuide;
-(BOOL)infinite;
-(id)layerWithICC:(id)arg1 ;
-(void)setSnapsToMax:(BOOL)arg1 ;
-(void)setSnapsToMin:(BOOL)arg1 ;
-(void)setSnapsToMid:(BOOL)arg1 ;
-(BOOL)canBeSnappedToByEdge:(int)arg1 ofFrame:(CGRect)arg2 ;
-(void)setGuideType:(int)arg1 ;
-(id)initWithType:(int)arg1 offset:(double)arg2 ;
-(BOOL)snapsToMin;
-(BOOL)snapsToMid;
-(BOOL)snapsToMax;
-(void)setModelGuide:(TSDUserDefinedGuide *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOffset:(double)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(double)start;
-(double)end;
-(void)setStart:(double)arg1 ;
-(void)setEnd:(double)arg1 ;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(BOOL)dynamic;
@end

