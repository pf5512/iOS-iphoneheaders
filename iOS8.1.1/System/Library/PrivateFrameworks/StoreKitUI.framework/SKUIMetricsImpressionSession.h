/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString, NSMutableOrderedSet, NSMapTable, NSArray, NSString;

@interface SKUIMetricsImpressionSession : NSObject {

	NSMutableArray* _impressionIdentifiers;
	NSMutableString* _impressionsString;
	NSMutableOrderedSet* _impressionableViewElements;
	NSMapTable* _impressionableViewElementsTimerMap;

}

@property (nonatomic,copy,readonly) NSArray * impressionIdentifiers;                   //@synthesize impressionIdentifiers=_impressionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * impressionsString;                      //@synthesize impressionsString=_impressionsString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * impressionableViewElements; 
-(id)init;
-(NSArray *)impressionableViewElements;
-(NSString *)impressionsString;
-(void)addItemViewElement:(id)arg1 ;
-(void)beginActiveImpressionForViewElement:(id)arg1 ;
-(void)endActiveImpressionForViewElement:(id)arg1 ;
-(void)addItemIdentifier:(long long)arg1 ;
-(NSArray *)impressionIdentifiers;
-(id)_getTimerForViewElement:(id)arg1 ;
-(void)_clearTimerForViewElement:(id)arg1 ;
-(void)_setTimer:(id)arg1 forViewElement:(id)arg2 ;
@end

