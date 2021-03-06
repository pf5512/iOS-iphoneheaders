/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerArray.h>

@interface NSConcretePointerArray : NSPointerArray {

	NSSlice* slice;
	unsigned count;
	unsigned capacity;
	unsigned options;
	unsigned mutations;
	char needsCompaction;

}
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)pointerFunctions;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned)arg2 ;
-(void)_initBlock;
-(void)arrayGrow:(unsigned)arg1 ;
-(void)_markNeedsCompaction;
-(unsigned)indexOfPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
-(void)replacePointerAtIndex:(unsigned)arg1 withPointer:(void*)arg2 ;
-(void*)pointerAtIndex:(unsigned)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removePointerAtIndex:(unsigned)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setCount:(unsigned)arg1 ;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)finalize;
-(void)compact;
@end

