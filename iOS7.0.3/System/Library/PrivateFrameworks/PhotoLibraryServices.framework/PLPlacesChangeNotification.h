/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLPlaces, NSOrderedSet, NSArray, PLChangeNotification;

@interface PLPlacesChangeNotification : PLAssetContainerListChangeNotification {

	PLPlaces* _places;
	NSOrderedSet* _originalPlacesSet;
	NSOrderedSet* _newPlacesSet;
	NSArray* _changedPlacesList;
	PLChangeNotification* _changeNotification;

}
+(id)notificationWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5 ;
-(void)dealloc;
-(id)init;
-(NSObject*)albumList;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)initWithPlaces:(id)arg1 originalPlacesSet:(id)arg2 newPlacesSet:(id)arg3 changedPlacesList:(id)arg4 backingNotification:(id)arg5 ;
@end

