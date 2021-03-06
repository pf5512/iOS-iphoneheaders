/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute;

@interface GEORouteMapMatcher : NSObject {

	GEOComposedRoute* _route;

}

@property (nonatomic,readonly) GEOComposedRoute * route;              //@synthesize route=_route - In the implementation block
-(id)initWithRoute:(id)arg1 ;
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4 ;
-(BOOL)isLocationCoordinate:(SCD_Struct_GE14)arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 ;
-(BOOL)_clampSegment:(PolylineCoordinate*)arg1 endCoord:(PolylineCoordinate*)arg2 outSegmentLength:(double*)arg3 firstAllowedMatch:(PolylineCoordinate)arg4 maxDistance:(double)arg5 ;
-(void)_closestPointFromCoordinate:(const SCD_Struct_GE14*)arg1 toSegmentStart:(const PolylineCoordinate*)arg2 toSegmentEnd:(const PolylineCoordinate*)arg3 outRouteCoordinate:(PolylineCoordinate*)arg4 outLocationCoordinate:(SCD_Struct_GE14*)arg5 outDistanceFromSegment:(double*)arg6 ;
-(double)_closestDistanceFromCoordinate:(SCD_Struct_GE14)arg1 alongRoute:(double)arg2 ;
-(SCD_Struct_GE14)_locationCoordinateFromRouteCoordinate:(const PolylineCoordinate*)arg1 ;
-(void)_enumerateRouteSegmentsNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned)arg2 ;
-(GEOComposedRoute *)route;
@end

