/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/IMImagePrefetch.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString;

@interface IMJPEGPrefetch : NSObject <IMImagePrefetch> {

	char _dataIsLoading;
	CGSize _optimalSize;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _requestGroup;
	unsigned _cancelled;
	CGImageRef _cachedImage;
	unsigned long _requestID;
	unsigned _options;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelPrefetchRequest;
-(void)addImageHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)loadData:(id)arg1 ;
-(id)initWithData:(id)arg1 optimalSize:(CGSize)arg2 ;
-(id)initWithData:(id)arg1 optimalSize:(CGSize)arg2 options:(unsigned)arg3 ;
-(CGImageRef)cachedImage;
-(void)_startDecodeWithData:(id)arg1 ;
-(id)_decodeSessionOptionsWithOptimalSize:(CGSize)arg1 highPriority:(char)arg2 ;
-(char)isPrefetchCancelled;
-(CGImageRef)cachedImageIfAvailable;
-(void)dealloc;
-(void)_cancel;
-(void)_uncancel;
@end

