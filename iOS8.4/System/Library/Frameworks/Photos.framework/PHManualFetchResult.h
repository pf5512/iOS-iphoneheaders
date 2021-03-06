/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString;

@interface PHManualFetchResult : PHFetchResult {

	NSArray* _objects;
	NSOrderedSet* _objectIDs;
	NSString* _identifier;

}

@property (readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs;              //@synthesize objectIDs=_objectIDs - In the implementation block
@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(id)fetchedObjects;
-(NSArray *)objects;
-(long long)collectionFetchType;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(BOOL)interestedInChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(void)getMediaTypeCounts;
-(id)fetchUpdatedObjects;
-(id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3 ;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(id)fetchedObjectIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)initWithObjects:(id)arg1 ;
-(id)photoLibrary;
-(id)containerIdentifier;
-(id)fetchRequest;
-(NSOrderedSet *)objectIDs;
@end

