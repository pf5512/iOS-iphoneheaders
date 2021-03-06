/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {

	NSMutableArray* mObjects;

}
+(id)collection;
+(id)collectionWithObject:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(unsigned)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned)indexOfObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned)addOrEquivalentObject:(id)arg1 ;
-(char)isEqualToCollection:(id)arg1 ;
@end

