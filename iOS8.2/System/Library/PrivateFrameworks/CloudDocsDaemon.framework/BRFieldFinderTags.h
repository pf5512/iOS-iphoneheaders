/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudDocsDaemon/NSCopying.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying> {

	NSMutableArray* _tags;

}

@property (nonatomic,retain) NSMutableArray * tags;              //@synthesize tags=_tags - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)tags;
-(id)dictionaryRepresentation;
-(void)setTags:(NSMutableArray *)arg1 ;
-(void)addTags:(id)arg1 ;
-(unsigned)tagsCount;
-(void)clearTags;
-(id)tagsAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
