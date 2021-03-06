/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVMediaFileType, NSObject;

@interface AVFigAssetWriterTrack : NSObject {

	AVWeakReference* _weakReference;
	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	NSString* _mediaType;
	AVMediaFileType* _mediaFileType;
	NSObject<OS_dispatch_queue>* _aboveHighWaterLevelQueue;
	BOOL _aboveHighWaterLevel;
	SCD_Struct_CM4 _sampleBufferCoalescingInterval;

}

@property (nonatomic,readonly) OpaqueFigAssetWriterRef figAssetWriter;                   //@synthesize figAssetWriter=_figAssetWriter - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) AVMediaFileType * mediaFileType;                          //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (nonatomic,readonly) int trackID;                                              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (getter=isAboveHighWaterLevel,readonly) BOOL aboveHighWaterLevel; 
@property (assign,nonatomic) SCD_Struct_CM4 sampleBufferCoalescingInterval;              //@synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval - In the implementation block
+(id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(id)mediaFileType;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)setSampleBufferCoalescingInterval:(SCD_Struct_CM4)arg1 ;
-(void)prepareToEndSession;
-(void)setFigMetadata:(id)arg1 ;
-(void)setExcludeFromAutoSelection:(BOOL)arg1 ;
-(void)setFigTrackMatrix:(id)arg1 ;
-(void)setFigDimensions:(id)arg1 ;
-(void)setTrackVolume:(float)arg1 ;
-(BOOL)isAboveHighWaterLevel;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)addPixelBuffer:(CVBufferRef)arg1 atPresentationTime:(SCD_Struct_CM4)arg2 error:(id*)arg3 ;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id*)arg3 ;
-(void)_refreshAboveHighWaterLevel;
-(OpaqueFigAssetWriterRef)figAssetWriter;
-(void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1 ;
-(SCD_Struct_CM4)sampleBufferCoalescingInterval;
-(int)trackID;
-(void)dealloc;
-(id)init;
-(void)setLayer:(int)arg1 ;
-(id)mediaType;
-(void)setLanguageCode:(id)arg1 ;
-(void)finalize;
@end

