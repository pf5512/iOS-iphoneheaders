/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBAssertionDelegate, OS_dispatch_source;
@class NSString, NSObject;

@interface SBAssertion : NSObject {

	id<SBAssertionDelegate> _delegate;
	NSString* _reason;
	unsigned _clientPort;
	NSObject*<OS_dispatch_source> _source;

}

@property (assign,nonatomic) id<SBAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
-(id)initWithClientPort:(unsigned)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SBAssertionDelegate>)arg1 ;
-(id)description;
-(id<SBAssertionDelegate>)delegate;
-(NSString *)reason;
@end
