/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOCacheManaging;
@interface GEOCacheManager : NSObject {

	id<GEOCacheManaging> _proxy;

}
+(void)useLocalProxy;
+(void)useRemoteProxy;
+(BOOL)_isLocalProxy;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)invalidationStateForPlace:(id)arg1 ;
@end
