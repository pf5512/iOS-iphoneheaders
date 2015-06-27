/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	char executing;
	char finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)completeOperation;
-(void)dealloc;
-(void)start;
-(void)main;
-(id)initWithJob:(id)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(UIPDFPageRenderJob *)job;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
@end
