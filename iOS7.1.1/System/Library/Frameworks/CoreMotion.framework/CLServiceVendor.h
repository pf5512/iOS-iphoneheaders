/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CLServiceVendor : NSObject
+(bool)ensureServiceIsRunning:(id)arg1 ;
+(id)getSiloForService:(id)arg1 ;
+(id)proxyForService:(id)arg1 ;
+(void)rereadConfiguration;
+(bool)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3 ;
+(id)getServiceWithName:(id)arg1 ;
+(void)retireServiceWithName:(id)arg1 ;
+(bool)isServiceEnabled:(id)arg1 ;
+(bool)isServiceRunning:(id)arg1 ;
+(void)initialize;
@end
