/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/NSURLSessionDelegate.h>

@class NSOperationQueue, NSURLSession, NSURLCache, NSString;

@interface ISResourceLoader : NSObject <NSURLSessionDelegate> {

	NSOperationQueue* _queue;
	NSURLSession* _session;
	NSURLCache* _urlCache;

}

@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLCache * urlCache;                 //@synthesize urlCache=_urlCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_rfc1123DateFormatter;
+(id)_localDateFormatter;
+(id)sharedInstance;
-(NSURLCache *)urlCache;
-(void)setUrlCache:(NSURLCache *)arg1 ;
-(double)_simulatedLatency;
-(void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)asynchronousDataFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)flushCache;
@end
