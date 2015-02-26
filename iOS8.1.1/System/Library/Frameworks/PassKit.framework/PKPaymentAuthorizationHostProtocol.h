/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationHostProtocol <NSObject>
@optional
-(void)authorizationDidPresent;

@required
-(void)authorizationDidFinishWithError:(id)arg1;
-(void)authorizationDidAuthorizePayment:(id)arg1;
-(void)authorizationDidSelectShippingMethod:(id)arg1;
-(void)authorizationDidSelectShippingAddress:(id)arg1;

@end
