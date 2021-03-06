/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {

	NSArray* _responses;
	NSNumber* _easStatus;
	NSMutableArray* _mResponses;

}

@property (nonatomic,retain) NSArray * responses;                      //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSNumber * easStatus;                     //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * mResponses;              //@synthesize mResponses=_mResponses - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(NSArray *)responses;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mResponses;
-(void)setMResponses:(NSMutableArray *)arg1 ;
-(void)addResponse:(id)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
@end

