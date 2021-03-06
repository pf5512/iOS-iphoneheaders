/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/BSXPCCoding.h>
#import <AssistantServices/NSSecureCoding.h>

@class AFSiriRequest, NSXPCListenerEndpoint, NSString;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding> {

	AFSiriRequest* _request;
	NSXPCListenerEndpoint* _remoteResponseListenerEndpoint;
	NSXPCListenerEndpoint* _usageResultListenerEndpoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)failWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)request;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3 ;
-(id)_responseHandlerConnection;
-(id)_usageResultHandlerConnection;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)completeWithResponse:(id)arg1 ;
-(void)reportUsageResult:(id)arg1 ;
@end

