/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQPProcessorFactory : NSObject
+(CFStringRef)createUtiForDocument:(CFStringRef)arg1 ;
+(int)applicationForDocumentUti:(CFStringRef)arg1 ;
+(BOOL)isTangierTEFDocumentUti:(CFStringRef)arg1 ;
+(BOOL)isTemplateUti:(CFStringRef)arg1 ;
+(CFURLRef)newEmbeddedSageUrlForTangierDocumentUrl:(CFURLRef)arg1 uti:(CFStringRef)arg2 isBundle:(BOOL*)arg3 ;
+(id)retainedProcessorForDocument:(CFURLRef)arg1 zipArchive:(id)arg2 uti:(CFStringRef)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8 ;
+(id)retainedProcessorForDocument:(CFURLRef)arg1 zipArchive:(id)arg2 uti:(CFStringRef)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 ;
@end
