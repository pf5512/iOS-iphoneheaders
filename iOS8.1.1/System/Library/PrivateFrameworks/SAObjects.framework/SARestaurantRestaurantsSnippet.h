/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (nonatomic,copy) NSArray * attributionOrder; 
@property (nonatomic,copy) NSArray * contributingProviderIds; 
@property (nonatomic,copy) NSDictionary * providerPunchOutMap; 
@property (nonatomic,copy) NSArray * restaurants; 
+(id)restaurantsSnippet;
+(id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siri_restaurants_getNavigationPathRestaurant:(id*)arg1 andType:(long long*)arg2 ;
-(id)siri_restaurants_navigationPathForRestaurantAtIndex:(long long)arg1 type:(long long)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)attributionOrder;
-(void)setAttributionOrder:(NSArray *)arg1 ;
-(NSArray *)contributingProviderIds;
-(void)setContributingProviderIds:(NSArray *)arg1 ;
-(NSDictionary *)providerPunchOutMap;
-(void)setProviderPunchOutMap:(NSDictionary *)arg1 ;
-(NSArray *)restaurants;
-(void)setRestaurants:(NSArray *)arg1 ;
@end

