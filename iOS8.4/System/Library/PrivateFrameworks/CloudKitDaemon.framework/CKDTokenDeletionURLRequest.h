/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest {

	NSData* _token;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSData * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(NSString *)bundleID;
-(BOOL)requiresTokenRegistration;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithToken:(id)arg1 bundleID:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(int)operationType;
@end

