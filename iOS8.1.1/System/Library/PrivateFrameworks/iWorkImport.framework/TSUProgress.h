/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface TSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject*<OS_dispatch_queue> mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) BOOL indeterminate; 
@property (copy) NSString * message; 
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(BOOL)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end
