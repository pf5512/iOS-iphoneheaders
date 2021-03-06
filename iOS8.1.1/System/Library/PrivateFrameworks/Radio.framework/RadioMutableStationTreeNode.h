/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioStationTreeNode.h>

@class RadioArtworkCollection, NSArray, NSString, NSDictionary;

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (nonatomic,copy) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) long long childNodeLoadingStyle; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (assign,nonatomic) long long displayStyle; 
@property (assign,nonatomic) BOOL hasAdditionalChildNodes; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long nodeID; 
@property (nonatomic,copy) NSDictionary * stationDictionary; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setChildNodeLoadingStyle:(long long)arg1 ;
-(void)setNodeID:(long long)arg1 ;
-(void)setStationDictionary:(NSDictionary *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)setHasAdditionalChildNodes:(BOOL)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
@end

