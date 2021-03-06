/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class GEOVoltaireRasterTileTrafficData, VKIntObjectMap, NSMutableArray, NSArray;

@interface VKRasterTrafficTile : VKTile {

	GEOVoltaireRasterTileTrafficData* _modelTile;
	VKIntObjectMap* _roadMeshes;
	VKIntObjectMap* _capMeshes;
	NSMutableArray* _incidents;

}

@property (nonatomic,readonly) NSArray * incidents;              //@synthesize incidents=_incidents - In the implementation block
-(void)dealloc;
-(id)incidents;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 trafficData:(id)arg3 ;
-(void)_buildMeshes;
-(void)_buildIncidents;
-(id)capMeshVendorForSpeed:(int)arg1 ;
-(id)roadMeshVendorForSpeed:(int)arg1 ;
@end

