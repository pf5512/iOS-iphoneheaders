/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMSortKeyAdjustment : NSObject {

	NSString* _sortKey;
	unsigned long long _stride;

}

@property (nonatomic,readonly) unsigned long long stride;              //@synthesize stride=_stride - In the implementation block
@property (nonatomic,readonly) NSString * sortKey;                     //@synthesize sortKey=_sortKey - In the implementation block
-(id)initWithSortKey:(id)arg1 stride:(unsigned long long)arg2 ;
-(char)resortKeyValueCodingObjects:(id)arg1 ;
-(void)resetKeyValueCodingObjects:(id)arg1 ;
-(NSString *)sortKey;
-(unsigned long long)stride;
-(void)dealloc;
@end

