/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSPointerArray, NSObject;

@interface MTLToolsPointerArray : NSObject {

	unsigned long long _pointerAdditions;
	NSPointerArray* _pointerArray;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePointersUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectAssociatedWithBaseObject:(id)arg1 ;
-(void)_addPointer:(void*)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(id)initWithOptions:(unsigned)arg1 ;
@end

