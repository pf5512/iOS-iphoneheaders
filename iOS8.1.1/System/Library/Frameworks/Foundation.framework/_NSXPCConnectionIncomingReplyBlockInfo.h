/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress;

@interface _NSXPCConnectionIncomingReplyBlockInfo : NSObject {

	/*^block*/id _cleanupBlock;
	NSProgress* _progress;

}

@property (copy) id cleanupBlock;                      //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
@property (retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
-(id)cleanupBlock;
-(void)setCleanupBlock:(id)arg1 ;
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
@end

