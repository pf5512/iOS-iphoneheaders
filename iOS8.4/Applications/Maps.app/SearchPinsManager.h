/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class MKMapView, NSArray, SearchResult, NSMutableArray, SearchPinsManagerShowSearchResultsAnimation;

@interface SearchPinsManager : NSObject {

	MKMapView* _mapView;
	NSArray* _searchPins;
	SearchResult* _startPin;
	SearchResult* _hiddenStartPin;
	SearchResult* _endPin;
	SearchResult* _droppedPin;
	NSMutableArray* _hiddenSearchPins;
	char _animatingStartPin;
	char _animatingEndPin;
	/*^block*/id _routePinsAnimationCompletedHandler;
	SearchPinsManagerShowSearchResultsAnimation* _showSearchResultsAnimation;
	char _useAlternateDirectionsPins;
	char _hasAutoSelectedResult;

}

@property (nonatomic,retain) MKMapView * mapView;                              //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) NSArray * searchPins;                             //@synthesize searchPins=_searchPins - In the implementation block
@property (nonatomic,retain) SearchResult * startPin;                          //@synthesize startPin=_startPin - In the implementation block
@property (nonatomic,retain) SearchResult * endPin;                            //@synthesize endPin=_endPin - In the implementation block
@property (nonatomic,retain) SearchResult * droppedPin;                        //@synthesize droppedPin=_droppedPin - In the implementation block
@property (nonatomic,readonly) char useAlternateDirectionsPins;                //@synthesize useAlternateDirectionsPins=_useAlternateDirectionsPins - In the implementation block
@property (assign,nonatomic) char hasAutoSelectedResult;                       //@synthesize hasAutoSelectedResult=_hasAutoSelectedResult - In the implementation block
@property (nonatomic,retain) SearchResult * hiddenStartPin;                    //@synthesize hiddenStartPin=_hiddenStartPin - In the implementation block
@property (nonatomic,retain) NSMutableArray * hiddenSearchPins;                //@synthesize hiddenSearchPins=_hiddenSearchPins - In the implementation block
@property (nonatomic,copy) id routePinsAnimationCompletedHandler;              //@synthesize routePinsAnimationCompletedHandler=_routePinsAnimationCompletedHandler - In the implementation block
-(void)mapViewDidBecomeFullyDrawn;
-(void)mapViewFinishedAnimatingPins;
-(void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2 ;
-(void)hideStartPin;
-(void)setStartPin:(id)arg1 endPin:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)showStartPin;
-(void)setDroppedPin:(id)arg1 animated:(char)arg2 shouldSelect:(char)arg3 ;
-(void)clearDroppedPin;
-(void)setSearchPins:(id)arg1 selectedPin:(id)arg2 animated:(char)arg3 ;
-(SearchResult *)startPin;
-(SearchResult *)endPin;
-(void)clearDirectionsPins;
-(void)hideDroppedPin;
-(void)hideSearchPinsExcept:(id)arg1 ;
-(void)restoreDroppedPin;
-(void)restoreHiddenSearchPins;
-(void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(char)arg2 ;
-(void)clearSearchPins;
-(UIEdgeInsets)starkRecommendedMapPadding;
-(NSArray *)searchPins;
-(void)setStartPin:(id)arg1 endPin:(id)arg2 useAlternateDirectionsPins:(char)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)setStartPin:(SearchResult *)arg1 ;
-(void)_clearShowSearchResultsAnimation;
-(void)setHiddenSearchPins:(NSMutableArray *)arg1 ;
-(void)setHiddenStartPin:(SearchResult *)arg1 ;
-(void)setRoutePinsAnimationCompletedHandler:(id)arg1 ;
-(id)_setOfPinsForPinType:(unsigned)arg1 ;
-(void)_completeShowSearchResultsAnimation;
-(void)_clearStartPin;
-(void)_clearEndPin;
-(void)setEndPin:(SearchResult *)arg1 ;
-(SearchResult *)hiddenStartPin;
-(void)hideSearchPinsExcept:(id)arg1 forStaticDisplay:(char)arg2 ;
-(char)useAlternateDirectionsPins;
-(id)_starkRouteGeniusDestinationViewForAnnotation:(id)arg1 ;
-(id)_starkSearchResultPinViewForAnnotation:(id)arg1 ;
-(id)_searchResultPinViewForAnnotation:(id)arg1 ;
-(void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(char)arg2 animated:(char)arg3 ;
-(void)setHasAutoSelectedResult:(char)arg1 ;
-(void)_animateShowingSearchInfo:(id)arg1 ;
-(id)pinsForPinType:(unsigned)arg1 ;
-(char)_isShowingDirectionsPins;
-(void)setSearchPins:(NSArray *)arg1 ;
-(NSMutableArray *)hiddenSearchPins;
-(id)routePinsAnimationCompletedHandler;
-(char)hasAutoSelectedResult;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(MKMapView *)mapView;
-(void)dealloc;
-(void)setDroppedPin:(SearchResult *)arg1 ;
-(SearchResult *)droppedPin;
@end
