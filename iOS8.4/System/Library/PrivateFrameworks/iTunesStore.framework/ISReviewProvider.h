/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <iTunesStore/NSCopying.h>

@interface ISReviewProvider : ISDataProvider <NSCopying> {

	BOOL _backgroundReview;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

