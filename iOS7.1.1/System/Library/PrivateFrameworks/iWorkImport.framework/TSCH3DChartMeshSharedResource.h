/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DChartMeshSharedChildResource.h>

@class TSCH3DDataBuffer;

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource {

	TSCH3DDataBuffer* mMesh;

}

@property (nonatomic,retain) TSCH3DDataBuffer * mesh; 
-(void)flushMemory;
-(void)setChildRegenerated:(bool)arg1 ;
-(void)dealloc;
-(id)get;
-(id)mesh;
-(void)setMesh:(id)arg1 ;
@end
