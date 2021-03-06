/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRAddressHandler;
@class CRAddressHandlerIdentity;

@interface CRAddressHandler : NSObject {

	id<CRAddressHandler> _handler;
	CRAddressHandlerIdentity* _identity;

}

@property (nonatomic,retain) CRAddressHandlerIdentity * identity;              //@synthesize identity=_identity - In the implementation block
+(id)addressHandlerWithPrincipalClass:(Class)arg1 ;
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2 ;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2 ;
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2 ;
-(id)supportedAddressKinds;
-(id)initWithPrincipalClass:(Class)arg1 ;
-(id)initWithAddressHandler:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setIdentity:(CRAddressHandlerIdentity *)arg1 ;
-(CRAddressHandlerIdentity *)identity;
@end

