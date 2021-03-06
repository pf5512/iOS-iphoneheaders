/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHPropertyMutationTuple.h>

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple {

	int mStyleOwnerType;
	unsigned long long mStyleOwnerIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long index; 
-(id)styleOwnerRef;
-(id)styleOwner;
-(id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 inChart:(id)arg3 mutations:(id)arg4 ;
-(id)indirectTuple;
-(id)initWithStyleOwner:(id)arg1 mutations:(id)arg2 ;
-(int)type;
-(unsigned long long)index;
@end

