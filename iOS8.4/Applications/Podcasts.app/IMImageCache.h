/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Podcasts/Podcasts-Structs.h>
@class IMMemoryCache, NSString, NSObject, NSCache;

@interface IMImageCache : NSObject {

	IMMemoryCache* _memoryCache;
	NSString* _persistentCachePath;
	NSObject*<OS_dispatch_queue> _downloadQueue;
	NSString* _defaultType;
	NSCache* _metadataCache;

}

@property (nonatomic,retain) NSString * defaultType;              //@synthesize defaultType=_defaultType - In the implementation block
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithIdentifier:(id)arg1 basePath:(id)arg2 memorySize:(int)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 persist:(char)arg4 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 persist:(char)arg4 properties:(id)arg5 ;
-(void)flushPersistentCache;
-(void)removeImageForKey:(id)arg1 synchronous:(char)arg2 ;
-(id)_fetchImageForKey:(id)arg1 forceDecode:(char)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 forceDecode:(char)arg3 ;
-(id)imageForKey:(id)arg1 forceDecode:(char)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 forceDecode:(char)arg4 ;
-(void)imageForKey:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 options:(int)arg5 ;
-(void)addImageFromURL:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)addImageFromURL:(id)arg1 key:(id)arg2 size:(CGSize)arg3 completionBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(char)hasImageForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 memorySize:(int)arg2 ;
-(void)removeImageWithRootKey:(id)arg1 ;
-(void)imageForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)imageForKey:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)addImageFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(char)hasImageForKey:(id)arg1 withSize:(CGSize)arg2 ;
-(void)getImageMetadataForKey:(id)arg1 size:(CGSize*)arg2 scale:(float*)arg3 ;
-(NSString *)defaultType;
-(void)setDefaultType:(NSString *)arg1 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 ;
-(id)_keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 ;
-(void)dealloc;
-(char)isEmpty;
-(void)flushAllCaches;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(void)flushMemoryCache;
@end

