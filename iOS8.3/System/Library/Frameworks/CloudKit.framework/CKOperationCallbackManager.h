/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject {

	NSMutableDictionary* _progressCallbacks;
	NSMutableDictionary* _completionCallbacks;

}

@property (retain) NSMutableDictionary * progressCallbacks;                //@synthesize progressCallbacks=_progressCallbacks - In the implementation block
@property (retain) NSMutableDictionary * completionCallbacks;              //@synthesize completionCallbacks=_completionCallbacks - In the implementation block
-(void)removeAllCallbacks;
-(void)registerProgressCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCompletionCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)unregisterAllCallbacksForOperation:(id)arg1 ;
-(NSMutableDictionary *)progressCallbacks;
-(NSMutableDictionary *)completionCallbacks;
-(void)setProgressCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCompletionCallbacks:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
@end

