/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSWPColumn, TSWPShapeLayout;

@interface TSWPInteriorCookie : NSObject {

	TSWPColumn* _column;
	TSWPShapeLayout* _shapeLayout;

}

@property (assign,nonatomic) TSWPColumn * column;                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSWPShapeLayout * layout;              //@synthesize shapeLayout=_shapeLayout - In the implementation block
-(TSWPShapeLayout *)layout;
-(void)setLayout:(TSWPShapeLayout *)arg1 ;
-(TSWPColumn *)column;
-(void)setColumn:(TSWPColumn *)arg1 ;
@end
