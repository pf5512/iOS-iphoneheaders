/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PKPaymentTransaction, NSString, NSDate;

@interface PDTransactionBulletinRecord : NSObject {

	BOOL _cleared;
	PKPaymentTransaction* _paymentTransaction;
	NSString* _passUniqueIdentifier;
	NSString* _passOrganizationName;
	NSString* _recordID;

}

@property (assign,getter=isCleared,nonatomic) BOOL cleared;                            //@synthesize cleared=_cleared - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,readonly) NSString * passUniqueIdentifier;                        //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * passOrganizationName;                        //@synthesize passOrganizationName=_passOrganizationName - In the implementation block
@property (nonatomic,readonly) NSString * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
+(id)transactionBulletinRecordWithPass:(id)arg1 paymentTransaction:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(PKPaymentTransaction *)paymentTransaction;
-(id)initWithPass:(id)arg1 paymentTransaction:(id)arg2 ;
-(BOOL)updateWithPass:(id)arg1 paymentTransaction:(id)arg2 ;
-(BOOL)isCleared;
-(void)setCleared:(BOOL)arg1 ;
-(NSString *)passOrganizationName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDate *)date;
-(NSString *)recordID;
-(NSString *)passUniqueIdentifier;
@end
