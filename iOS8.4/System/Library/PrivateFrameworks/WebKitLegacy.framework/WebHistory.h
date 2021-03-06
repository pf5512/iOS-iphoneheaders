/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebHistoryPrivate, NSArray;

@interface WebHistory : NSObject {

	WebHistoryPrivate* _historyPrivate;

}

@property (nonatomic,copy,readonly) NSArray * orderedLastVisitedDays; 
@property (assign,nonatomic) int historyItemLimit; 
@property (assign,nonatomic) int historyAgeInDaysLimit; 
+(void)_setVisitedLinkTrackingEnabled:(BOOL)arg1 ;
+(void)_removeAllVisitedLinks;
+(id)optionalSharedHistory;
+(void)setOptionalSharedHistory:(id)arg1 ;
-(void)_addVisitedLinksToPageGroup:(PageGroup*)arg1 ;
-(void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(BOOL)arg4 ;
-(id)_data;
-(id)allItems;
-(id)_itemForURLString:(id)arg1 ;
-(void)removeItems:(id)arg1 ;
-(void)removeAllItems;
-(void)dealloc;
-(id)init;
-(void)addItems:(id)arg1 ;
-(BOOL)containsURL:(id)arg1 ;
-(void)finalize;
-(void)_sendNotification:(id)arg1 entries:(id)arg2 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(NSArray *)orderedLastVisitedDays;
-(id)orderedItemsLastVisitedOnDay:(id)arg1 ;
-(void)setHistoryAgeInDaysLimit:(int)arg1 ;
-(void)setHistoryItemLimit:(int)arg1 ;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(void)timeZoneChanged:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 error:(id*)arg2 ;
-(id)itemForURL:(id)arg1 ;
@end

