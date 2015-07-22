/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUProgressContext, NSObject;

@interface TSUProgressContextProgress : TSUProgress {

	TSUProgressContext* mProgressContext;
	NSObject*<OS_dispatch_queue> mProgressContextObserverQueue;
	BOOL hasAddedProgressContextObserver;

}
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithProgressContext:(id)arg1 ;
-(void)p_updateProgressContextObserver;
-(void)p_progressDidChange:(id)arg1 ;
@end
