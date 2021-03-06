/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, TSUFileIOChannel;

@interface TSPBundleWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSURL* _URL;
	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _handler;
	TSUFileIOChannel* _writeChannel;
	bool _isClosed;

}
-(id)initWithURL:(id)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)close;
-(void).cxx_destruct;
-(void)writeData:(id)arg1 ;
@end

