/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(void*)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationControllerDidFinish:(id)arg1;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;

@end
