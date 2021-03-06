/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SearchResult, NSMutableArray;

@interface CustomSearchManager : NSObject {

	SearchResult* _customSearchResult;
	int _selectedSearchMode;
	NSMutableArray* _observers;

}

@property (setter=setCustomSearchResult:,nonatomic,retain) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (assign,nonatomic) int selectedSearchMode;                                                       //@synthesize selectedSearchMode=_selectedSearchMode - In the implementation block
+(id)sharedManager;
-(void)setCustomSearchResult:(id)arg1 ;
-(id)customSearchResult;
-(BOOL)isCustomSearchResult:(id)arg1 ;
-(int)selectedSearchMode;
-(void)setSelectedSearchMode:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 ;
@end

