/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)locationId;
-(void)setLocationId:(id)arg1 ;
@end

