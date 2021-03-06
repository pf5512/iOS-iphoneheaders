/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	NSObject*<OS_dispatch_queue> resolveQueue;
	NSObject*<OS_dispatch_queue> cacheAccessQueue;
	NSObject*<OS_dispatch_queue> callbackQueue;
	BOOL startedResolving;

}

@property (nonatomic,retain) NSString * thingToResolve; 
@property (assign,nonatomic) int resolveType; 
@property (readonly) NSObject*<OS_dispatch_queue> resolveQueue; 
@property (readonly) NSObject*<OS_dispatch_queue> cacheAccessQueue; 
@property (readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) BOOL startedResolving; 
-(int)resolveType;
-(void)setResolveType:(int)arg1 ;
-(NSString *)thingToResolve;
-(void)setThingToResolve:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)resolveQueue;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(BOOL)startedResolving;
-(void)setStartedResolving:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)finalize;
@end

