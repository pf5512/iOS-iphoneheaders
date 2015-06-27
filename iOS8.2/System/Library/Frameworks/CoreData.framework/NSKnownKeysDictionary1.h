/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(char)accessInstanceVariablesDirectly;
+(id)initWithCoder:(id)arg1 ;
+(id)init;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithCapacity:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned)arg3 ;
+(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)initForKeys:(id)arg1 ;
+(id)alloc;
-(void)getObjects:(id*)arg1 ;
-(Class)classForArchiver;
-(const id*)knownKeyValuesPointer;
-(unsigned)_valueCountByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)_setValues:(id*)arg1 retain:(char)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)_recount;
-(unsigned)_countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 forKeys:(char)arg4 ;
-(void)getKeys:(id*)arg1 ;
-(id)retain;
-(id)allKeys;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(void)removeAllObjects;
-(unsigned)retainCount;
-(void)removeObjectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(void)setValues:(id*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(const id*)values;
-(char)isEqualToDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)mapping;
-(id)valueAtIndex:(unsigned)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
@end
