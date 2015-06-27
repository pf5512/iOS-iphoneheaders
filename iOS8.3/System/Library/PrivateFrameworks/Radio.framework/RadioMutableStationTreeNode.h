/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioStationTreeNode.h>

@class RadioArtworkCollection, NSArray, NSString, NSDictionary;

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (nonatomic,copy) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) int childNodeLoadingStyle; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (assign,nonatomic) int displayStyle; 
@property (assign,nonatomic) char hasAdditionalChildNodes; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long nodeID; 
@property (nonatomic,copy) NSDictionary * stationDictionary; 
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChildNodeLoadingStyle:(int)arg1 ;
-(void)setNodeID:(long long)arg1 ;
-(void)setStationDictionary:(NSDictionary *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)setHasAdditionalChildNodes:(char)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
@end
