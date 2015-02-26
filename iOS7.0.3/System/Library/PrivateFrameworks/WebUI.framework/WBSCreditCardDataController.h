/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(BOOL)hasCreditCardData;
-(void)dealloc;
-(id)init;
-(void)clearCreditCardData;
-(id)creditCardData;
-(id)existingCardWithNumber:(id)arg1 ;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(BOOL)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(BOOL)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(void)removeCreditCardData:(id)arg1 ;
-(BOOL)isCreditCardDataSaved:(id)arg1 ;
@end
