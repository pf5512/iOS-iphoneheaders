/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DPhongLikeLightingModel.h>

@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel
+(id)instanceWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
+(Class)materialEffectClass;
-(void)saveToArchive:(Chart3DLightingModelArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
@end

