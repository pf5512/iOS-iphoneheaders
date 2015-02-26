/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCECPrivate
@required
-(void)fakeBusCreateAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)fakeSetBusLinkStateAsync:(id)arg1 newLinkState:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)fakeCreateRemoteInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 withLogicalAddress:(unsigned char)arg3 withPhysicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)fakeAssignLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3;
-(void)fakeDeviceRemoveAsync:(id)arg1 reply:(/*^block*/id)arg2;

@end
