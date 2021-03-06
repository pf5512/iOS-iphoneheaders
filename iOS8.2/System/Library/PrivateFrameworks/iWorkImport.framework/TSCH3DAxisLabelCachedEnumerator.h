/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCH3DValueEnumerator, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelCachedEnumerator : TSCH3DValueEnumerator {

	TSCH3DValueEnumerator* mCachee;
	TSCH3DAxisLabelKind* mKind;
	unsigned mCount;
	char mShouldRender;
	char mValid;
	int mLabelPosition;
	vector<TSCH3D::AxisLabelCacheItem, std::__1::allocator<TSCH3D::AxisLabelCacheItem> >* mCache;

}

@property (nonatomic,readonly) TSCH3DAxisLabelKind * kind; 
+(id)enumeratorWithAxisLabelEnumerator:(id)arg1 ;
-(char)shouldRender;
-(id)initWithAxisLabelEnumerator:(id)arg1 ;
-(id)enumerator;
-(void)dealloc;
-(unsigned)count;
-(id)string;
-(void)update;
-(void)cache;
-(TSCH3DAxisLabelKind *)kind;
-(int)labelPosition;
@end

