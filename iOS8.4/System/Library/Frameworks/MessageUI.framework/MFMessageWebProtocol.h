/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface MFMessageWebProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(void)unregisterFragmentsForUUID:(id)arg1 ;
+(void)registerFragments:(id)arg1 forUUID:(id)arg2 ;
+(void)initialize;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)startLoading;
-(void)dealloc;
-(void)stopLoading;
@end
