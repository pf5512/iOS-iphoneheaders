/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {

	NSMutableArray* _filters;
	int _queryOperator;
	NSMutableArray* _sorts;
	NSMutableArray* _types;
	char _distinct;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,retain) NSMutableArray * types;                //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * sorts;                //@synthesize sorts=_sorts - In the implementation block
@property (assign,nonatomic) char hasDistinct; 
@property (assign,nonatomic) char distinct;                         //@synthesize distinct=_distinct - In the implementation block
@property (assign,nonatomic) char hasQueryOperator; 
@property (assign,nonatomic) int queryOperator;                     //@synthesize queryOperator=_queryOperator - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSMutableArray *)types;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)filters;
-(id)dictionaryRepresentation;
-(void)addTypes:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)addSorts:(id)arg1 ;
-(unsigned)typesCount;
-(void)clearTypes;
-(id)typesAtIndex:(unsigned)arg1 ;
-(unsigned)filtersCount;
-(void)clearFilters;
-(id)filtersAtIndex:(unsigned)arg1 ;
-(unsigned)sortsCount;
-(void)clearSorts;
-(id)sortsAtIndex:(unsigned)arg1 ;
-(void)setDistinct:(char)arg1 ;
-(void)setHasDistinct:(char)arg1 ;
-(char)hasDistinct;
-(int)queryOperator;
-(void)setQueryOperator:(int)arg1 ;
-(void)setHasQueryOperator:(char)arg1 ;
-(char)hasQueryOperator;
-(void)setTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sorts;
-(void)setSorts:(NSMutableArray *)arg1 ;
-(char)distinct;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

