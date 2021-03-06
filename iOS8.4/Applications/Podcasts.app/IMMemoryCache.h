/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSString, NSOperationQueue, NSObject;

@interface IMMemoryCache : NSObject {

	NSMutableArray* _itemsArray;
	NSMutableDictionary* _items;
	unsigned _totalCost;
	NSString* _name;
	unsigned _count;
	unsigned _countLimit;
	unsigned _totalCostLimit;
	char _evictsItemsWithDiscardedContent;
	id _delegate;
	NSOperationQueue* _queue;
	double _lastCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char evictsItemsWithDiscardedContent;              //@synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent - In the implementation block
@property (assign,nonatomic) unsigned totalCostLimit;                           //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) unsigned countLimit;                               //@synthesize countLimit=_countLimit - In the implementation block
-(void)_addItem:(id)arg1 forKey:(id)arg2 ;
-(void)_checkLimitsAndEvictObjects;
-(char)_shouldRemoveIndex:(unsigned)arg1 ;
-(void)_checkLimits;
-(void)checkLimitsAndEvictObjects;
-(unsigned)totalCost;
-(unsigned)costForObjectWithKey:(id)arg1 ;
-(int)numberOfCachedItems;
-(char)evictsItemsWithDiscardedContent;
-(void)setEvictsItemsWithDiscardedContent:(char)arg1 ;
-(void)removeObjectsForKeyWithPrefix:(id)arg1 ;
-(void)setTotalCostLimit:(unsigned)arg1 ;
-(unsigned)totalCostLimit;
-(unsigned)countLimit;
-(id)allKeys;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setCountLimit:(unsigned)arg1 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

