/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDRep, NSMutableDictionary, NSString;

@interface TSDMagicMoveMatchObject : NSObject {

	TSDRep* _rep;
	int _zOrder;
	NSMutableDictionary* _attributes;
	NSString* _stringValue;
	NSString* _name;
	CGPoint _position;
	NSRange _stringRange;

}

@property (nonatomic,retain) TSDRep * rep;                                  //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) CGPoint position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int zOrder;                                    //@synthesize zOrder=_zOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                        //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) NSRange stringRange;                           //@synthesize stringRange=_stringRange - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)matchObjectWithTextRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
+(id)matchObjectWithRep:(id)arg1 position:(CGPoint)arg2 ;
-(TSDRep *)rep;
-(void)setRep:(TSDRep *)arg1 ;
-(id)initWithRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
-(char)conflictsWithMatchObject:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(int)zOrder;
-(void)setZOrder:(int)arg1 ;
-(NSRange)stringRange;
-(void)setStringRange:(NSRange)arg1 ;
@end

