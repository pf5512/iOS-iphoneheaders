/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAVMediaObject.h>

@class AVURLAsset;

@interface CKMovieMediaObject : CKAVMediaObject {

	BOOL _hasVideoTrack;
	BOOL _checkedVideoInfo;
	AVURLAsset* _asset;
	CGSize _pxSize;

}

@property (assign,nonatomic) BOOL hasVideoTrack;                 //@synthesize hasVideoTrack=_hasVideoTrack - In the implementation block
@property (assign,nonatomic) CGSize pxSize;                      //@synthesize pxSize=_pxSize - In the implementation block
@property (assign,nonatomic) BOOL checkedVideoInfo;              //@synthesize checkedVideoInfo=_checkedVideoInfo - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                 //@synthesize asset=_asset - In the implementation block
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(BOOL)isPreviewable;
-(void)dealloc;
-(AVURLAsset *)asset;
-(id)previewItemTitle;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(void)export:(id)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)canExport;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)canBeAttachmentContiguous;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(BOOL)hasNoVideoTrack;
-(CGSize)pxSize;
-(BOOL)checkedVideoInfo;
-(void)updateVideoInfo;
-(void)setCheckedVideoInfo:(BOOL)arg1 ;
-(BOOL)hasVideoTrack;
-(void)setHasVideoTrack:(BOOL)arg1 ;
-(void)setPxSize:(CGSize)arg1 ;
-(Class)previewBalloonViewClass;
-(int)mediaType;
@end

