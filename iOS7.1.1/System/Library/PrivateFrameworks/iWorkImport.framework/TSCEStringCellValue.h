/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEStringCellValue : TSCECellValue {

	TSCEStringValue* mStringValue;

}
-(void)encodeToArchive:(StringCellValueArchive*)arg1 ;
-(SCD_Struct_TS52*)formatStruct;
-(bool)isEqualToCellValue:(id)arg1 ;
-(id)initWithStringValue:(TSCEStringValue*)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithString:(id)arg1 ;
-(TSCEStringValue*)stringValue;
-(id)displayString;
-(id)initWithArchive:(const StringCellValueArchive*)arg1 ;
@end

