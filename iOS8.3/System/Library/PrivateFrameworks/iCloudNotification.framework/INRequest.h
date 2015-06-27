/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSData, NSDictionary, AADeviceInfo;

@interface INRequest : AARequest {

	ACAccount* _account;
	NSData* _pushToken;
	NSDictionary* _parameters;
	AADeviceInfo* _deviceInfoProvider;

}

@property (nonatomic,readonly) AADeviceInfo * deviceInfoProvider; 
@property (nonatomic,readonly) ACAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters; 
-(AADeviceInfo *)deviceInfoProvider;
-(id)addBodyParameters:(id)arg1 ;
-(id)initWithAccount:(id)arg1 pushToken:(id)arg2 ;
-(id)_basicBodyParameters;
-(ACAccount *)account;
-(NSDictionary *)parameters;
-(id)urlRequest;
@end
