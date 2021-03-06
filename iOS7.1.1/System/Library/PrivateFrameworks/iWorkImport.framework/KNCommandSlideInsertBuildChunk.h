/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class KNSlide, KNBuildChunk;

@interface KNCommandSlideInsertBuildChunk : TSKCommand {

	KNSlide* mSlide;
	KNBuildChunk* mBuildChunk;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) KNBuildChunk * buildChunk; 
@property (nonatomic,readonly) unsigned long long index; 
-(id)buildChunk;
-(id)initWithSlide:(id)arg1 buildChunk:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(unsigned long long)index;
-(id)slide;
-(bool)process;
@end

