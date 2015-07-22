/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/DeliveryAccount.h>

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {

	DAMailAccount* _DAMailAccount;

}
-(void)dealloc;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(Class)deliveryClass;
-(id)mailAccountIfAvailable;
-(id)initWithDAMailAccount:(id)arg1 ;
@end
