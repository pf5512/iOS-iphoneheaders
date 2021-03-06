/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:34:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/IDSIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface ABCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {

	char _isListeningToIDSServiceAvailability;
	char _isListeningToIDSQueryController;
	NSMutableDictionary* _destinationStatus;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCapabilitiesManager;
+(void)_setDefaultCapabilitiesManager:(id)arg1 ;
-(char)hasCellularTelephonyCapability;
-(char)isConferencingAvailable;
-(id)conferenceURLForPhoneNumber:(id)arg1 ;
-(id)conferenceURLForDestinationID:(id)arg1 ;
-(char)hasSMSCapability;
-(char)isMadridConfigured;
-(char)isMMSConfigured;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(char)isConferencingEverGonnaBeAvailable;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(char)_isAppAvailable:(id)arg1 ;
-(char)isSensitiveUIAllowed;
-(char)hasTelephonyCapability;
-(char)hasCellularTelephonyHardwareCapability;
-(char)hasCellularDataCapability;
-(char)hasVibratorCapability;
-(char)hasSiriCapability;
-(char)hasCameraCapability;
-(char)isEmailConfigured;
-(char)hasPreviouslyConferencedWithID:(id)arg1 ;
-(void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg1 ;
-(char)hasAdditionalTextTones;
-(char)isTwitterServiceAvailable;
-(char)isWeiboServiceAvailable;
-(char)isFaceTimeAudioAvailable;
-(char)isPhoneAppAvailable;
-(char)isMailAppAvailable;
-(char)isMessagesAppAvailable;
-(char)isFaceTimeAppAvailable;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)dealloc;
@end

