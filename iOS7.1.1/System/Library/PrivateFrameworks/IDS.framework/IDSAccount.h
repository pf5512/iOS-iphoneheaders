/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSAccount, NSString, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) bool canSend; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
-(void)setPassword:(id)arg1 ;
-(id)serviceName;
-(void)setAuthToken:(id)arg1 ;
-(id)pushToken;
-(id)_internal;
-(void)dealloc;
-(id)description;
-(bool)isActive;
-(bool)_isEnabled;
-(bool)canSend;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)uniqueID;
-(id)devices;
-(id)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(id)arg1 ;
-(void)_setIsEnabled:(bool)arg1 ;
-(void)setLoginID:(id)arg1 ;
-(id)dateRegistered;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(id)profileID;
-(int)registrationStatus;
-(id)regionID;
-(id)regionBasePhoneNumber;
-(id)nextRegistrationDate;
-(id)regionServerContext;
-(id)aliases;
-(id)profileInfo;
-(id)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(id)loginID;
-(void)passwordUpdated;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(id)accountInfo;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(id)registeredURIs;
-(void)deactivateAndPurgeIdentify;
-(void)_reregisterAndReidentify:(bool)arg1 ;
-(id)registrationCertificate;
-(void)removeDelegate:(id)arg1 ;
-(int)accountType;
@end
