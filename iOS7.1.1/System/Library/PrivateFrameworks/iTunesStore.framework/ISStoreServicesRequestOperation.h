/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {

	SSRequest* _request;

}

@property (readonly) SSRequest * request; 
-(void)dealloc;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)run;
-(id)request;
@end

