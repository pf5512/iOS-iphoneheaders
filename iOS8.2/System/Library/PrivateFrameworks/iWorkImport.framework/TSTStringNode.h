/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTStringNode : TSTExpressionNode {

	NSString* mValue;

}

@property (nonatomic,retain) NSString * value; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(StringNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const StringNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS271)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)exportString;
-(id)initWithContext:(id)arg1 stringValue:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)p_languageGuessForString:(id)arg1 isRTL:(char*)arg2 ;
-(void)dealloc;
-(id)string;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(int)tokenType;
@end

