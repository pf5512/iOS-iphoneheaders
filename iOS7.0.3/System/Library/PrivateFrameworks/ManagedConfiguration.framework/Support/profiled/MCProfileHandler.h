/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCInteractionClientDelegate.h>

@class MCProfile, NSMutableArray, NSMutableDictionary, NSArray;

@interface MCProfileHandler : NSObject <MCInteractionClientDelegate> {

	MCProfile* _profile;
	NSMutableArray* _payloadHandlers;
	NSMutableDictionary* _UUIDToPersistentIDMap;
	BOOL _isSetAside;

}

@property (nonatomic,readonly) MCProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL isSetAside;                        //@synthesize isSetAside=_isSetAside - In the implementation block
@property (nonatomic,readonly) NSArray * payloadHandlers;              //@synthesize payloadHandlers=_payloadHandlers - In the implementation block
+(id)userCancelledError;
-(BOOL)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned)arg3 outError:(id*)arg4 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(id)payloadHandlerWithUUID:(id)arg1 ;
-(BOOL)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(void)unstageFromInstallationWithInstaller:(id)arg1 ;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)userCancelledError;
-(id)_profileInstallationErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned)arg2 outError:(id*)arg3 ;
-(id)restrictionsWithHeuristicsAppliedOutError:(id*)arg1 ;
-(id)appAccessibilityParameters;
-(id)userInputArray;
-(id)persistentIDForCertificateUUID:(id)arg1 ;
-(BOOL)isSetAside;
-(id)payloadHandlers;
-(void)remove;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)isInstalled;
-(void).cxx_destruct;
-(id)profile;
@end

