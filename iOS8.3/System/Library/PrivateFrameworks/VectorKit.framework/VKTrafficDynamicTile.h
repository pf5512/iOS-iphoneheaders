/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKTrafficDynamicTile : VKTile {

	GEOTileKey _downloadKey;
	shared_ptr<zilch::TrafficDynamicTile>* _tile;
	unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *> > >* _flows;

}

@property (nonatomic,readonly) long long updateTime; 
@property (nonatomic,readonly) unsigned long incidentCount; 
-(void)dealloc;
-(int)flowForRoadId:(long long)arg1 buffer:(const Flow*)arg2 maxSize:(int)arg3 ;
-(unsigned long)incidentCount;
-(const Incident*)incidentAtIndex:(unsigned long)arg1 ;
-(long long)updateTime;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 ;
@end

