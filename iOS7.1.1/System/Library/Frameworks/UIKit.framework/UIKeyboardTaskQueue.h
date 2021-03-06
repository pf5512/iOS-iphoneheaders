/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {

	bool _executingOnMainThread;
	NSConditionLock* _lock;
	NSMutableArray* _tasks;
	NSMutableArray* _deferredTasks;
	UIKeyboardTaskExecutionContext* _executionContext;
	/*^block*/ id _mainThreadContinuation;

}

@property (nonatomic,retain) UIKeyboardTaskExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
-(id)scheduleTask:(/*^block*/ id)arg1 timeInterval:(double)arg2 repeats:(bool)arg3 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)performTask:(/*^block*/ id)arg1 ;
-(bool)isMainThreadExecutingTask;
-(void)waitUntilAllTasksAreFinished;
-(void)addTask:(/*^block*/ id)arg1 ;
-(id)executionContext;
-(void)setExecutionContext:(id)arg1 ;
-(void)finishExecution;
-(void)performTaskOnMainThread:(/*^block*/ id)arg1 waitUntilDone:(bool)arg2 ;
-(void)continueExecutionOnMainThread;
-(bool)tryLockWhenReadyForMainThread;
-(void)performDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)promoteDeferredTaskIfIdle;
-(void)addDeferredTask:(/*^block*/ id)arg1 ;
@end

