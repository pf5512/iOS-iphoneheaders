/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class CKImageData;

@interface CKImageMediaObject : CKMediaObject {

	CKImageData* _imageData;
	CKImageData* _backgroundImageData;

}

@property (nonatomic,readonly) CKImageData * imageData; 
+(id)fallbackFilenamePrefix;
+(id)UTITypes;
+(Class)imageDataClass;
+(bool)isPreviewable;
-(void)dealloc;
-(id)generateThumbnailFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnail;
-(id)imageData;
-(int)mediaType;
@end

