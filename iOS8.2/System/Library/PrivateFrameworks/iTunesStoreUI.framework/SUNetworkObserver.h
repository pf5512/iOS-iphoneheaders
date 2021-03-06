/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/ISSingleton.h>
#import <iTunesStoreUI/ISStoreURLOperationDelegate.h>

@class ISStoreURLOperation, NSString, NSTimer;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {

	ISStoreURLOperation* _partnerDetectOperation;
	char _partnersEnabled;
	NSString* _partnerIdentifier;
	NSTimer* _startupTimer;
	int _storeServicesNetworkUsageCount;

}

@property (nonatomic,retain) NSString * partnerIdentifier;              //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_networkTypeChanged:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(void)_partnerHeaderChanged:(id)arg1 ;
-(void)_storeServicesNetworkStartNotification:(id)arg1 ;
-(void)_storeServicesNetworkStopNotification:(id)arg1 ;
-(void)_networkUsageStateChanged:(id)arg1 ;
-(void)_cancelStartupTimer;
-(void)_startupTimer:(id)arg1 ;
-(void)_handleNetworkTypeChange:(id)arg1 ;
-(void)_handleUsingNetworkChange:(id)arg1 ;
-(void)_mainThreadSetPartnerIdentifier:(id)arg1 ;
-(void)_updateNetworkActivityIndicator;
-(void)_mainThreadScheduleNetworkActivityUpdate;
-(void)_mainThreadHandleNetworkTypeChange:(id)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)checkPartnerAvailability;
-(void)setPartnersEnabled:(char)arg1 ;
-(void)startNetworkAvailabilityTimer;
@end

