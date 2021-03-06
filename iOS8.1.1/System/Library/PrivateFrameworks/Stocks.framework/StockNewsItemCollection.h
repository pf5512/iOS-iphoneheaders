/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface StockNewsItemCollection : NSObject {

	NSArray* _newsItems;
	double _expirationTime;

}

@property (nonatomic,retain) NSArray * newsItems;                //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(id)initWithArchiveArray:(id)arg1 ;
-(id)archiveArray;
-(NSArray *)newsItems;
-(void)setNewsItems:(NSArray *)arg1 ;
@end

