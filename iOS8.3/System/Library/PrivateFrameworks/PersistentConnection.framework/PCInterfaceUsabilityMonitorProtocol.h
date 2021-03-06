/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:58:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) char isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setTrackedTimeInterval:(double)arg1;
-(void)setThresholdOffTransitionCount:(unsigned)arg1;
-(void)setTrackUsability:(char)arg1;
-(char)isRadioHot;

@end

