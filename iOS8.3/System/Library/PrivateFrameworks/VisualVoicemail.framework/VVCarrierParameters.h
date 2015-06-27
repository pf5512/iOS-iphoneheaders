/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:02:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(id)carrierServiceName;
+(char)supportsGreetingChanges;
+(char)supportsPasswordChanges;
+(char)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(id)retryIntervals;
+(char)supportsDetachedStorage;
-(void)dealloc;
-(id)initForService:(id)arg1 ;
-(id)parameterValueForKey:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
@end
