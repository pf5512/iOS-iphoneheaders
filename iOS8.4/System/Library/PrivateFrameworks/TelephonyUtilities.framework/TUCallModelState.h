/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/NSSecureCoding.h>

@interface TUCallModelState : NSObject <NSSecureCoding> {

	BOOL _ambiguous;
	BOOL _swappable;
	BOOL _mergeable;
	BOOL _holdAllowed;
	BOOL _addCallAllowed;
	BOOL _takingCallsPrivateAllowed;
	BOOL _hardPauseAvailable;
	BOOL _endAndAnswerAllowed;
	BOOL _holdAndAnswerAllowed;
	BOOL _sendToVoicemailAllowed;
	int _ambiguityState;

}

@property (getter=isAmbiguous,nonatomic,readonly) BOOL ambiguous;                                            //@synthesize ambiguous=_ambiguous - In the implementation block
@property (assign,nonatomic) int ambiguityState;                                                             //@synthesize ambiguityState=_ambiguityState - In the implementation block
@property (assign,getter=isSwappable,nonatomic) BOOL swappable;                                              //@synthesize swappable=_swappable - In the implementation block
@property (assign,getter=isMergeable,nonatomic) BOOL mergeable;                                              //@synthesize mergeable=_mergeable - In the implementation block
@property (assign,getter=isHoldAllowed,nonatomic) BOOL holdAllowed;                                          //@synthesize holdAllowed=_holdAllowed - In the implementation block
@property (assign,getter=isAddCallAllowed,nonatomic) BOOL addCallAllowed;                                    //@synthesize addCallAllowed=_addCallAllowed - In the implementation block
@property (assign,getter=isTakingCallsPrivateAllowed,nonatomic) BOOL takingCallsPrivateAllowed;              //@synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed - In the implementation block
@property (assign,getter=isHardPauseAvailable,nonatomic) BOOL hardPauseAvailable;                            //@synthesize hardPauseAvailable=_hardPauseAvailable - In the implementation block
@property (assign,getter=isEndAndAnswerAllowed,nonatomic) BOOL endAndAnswerAllowed;                          //@synthesize endAndAnswerAllowed=_endAndAnswerAllowed - In the implementation block
@property (assign,getter=isHoldAndAnswerAllowed,nonatomic) BOOL holdAndAnswerAllowed;                        //@synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed - In the implementation block
@property (assign,getter=isSendToVoicemailAllowed,nonatomic) BOOL sendToVoicemailAllowed;                    //@synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isAmbiguous;
-(void)handlePossibleStateChange;
-(BOOL)updateInternalState;
-(BOOL)isSwappable;
-(void)setSwappable:(BOOL)arg1 ;
-(BOOL)isMergeable;
-(void)setMergeable:(BOOL)arg1 ;
-(BOOL)isHoldAllowed;
-(void)setHoldAllowed:(BOOL)arg1 ;
-(BOOL)isAddCallAllowed;
-(void)setAddCallAllowed:(BOOL)arg1 ;
-(int)ambiguityState;
-(void)setAmbiguityState:(int)arg1 ;
-(BOOL)isTakingCallsPrivateAllowed;
-(void)setTakingCallsPrivateAllowed:(BOOL)arg1 ;
-(BOOL)isHardPauseAvailable;
-(void)setHardPauseAvailable:(BOOL)arg1 ;
-(BOOL)isEndAndAnswerAllowed;
-(void)setEndAndAnswerAllowed:(BOOL)arg1 ;
-(BOOL)isHoldAndAnswerAllowed;
-(void)setHoldAndAnswerAllowed:(BOOL)arg1 ;
-(BOOL)isSendToVoicemailAllowed;
-(void)setSendToVoicemailAllowed:(BOOL)arg1 ;
-(id)initWithAllPropertiesAllowed;
@end

