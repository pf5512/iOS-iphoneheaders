/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBUnlockActionContext : NSObject {

	NSString* _lockLabel;
	NSString* _shortLockLabel;
	/*^block*/ id _unlockAction;
	NSString* _identifier;
	float _fontSize;
	BOOL _requiresUnlock;
	BOOL _deactivateAwayController;
	BOOL _canBypassPinLock;

}

@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lockLabel;                       //@synthesize lockLabel=_lockLabel - In the implementation block
@property (nonatomic,retain) NSString * shortLockLabel;                  //@synthesize shortLockLabel=_shortLockLabel - In the implementation block
@property (nonatomic,copy) id unlockAction;                              //@synthesize unlockAction=_unlockAction - In the implementation block
@property (assign,nonatomic) BOOL requiresUnlock;                        //@synthesize requiresUnlock=_requiresUnlock - In the implementation block
@property (assign,nonatomic) BOOL deactivateAwayController;              //@synthesize deactivateAwayController=_deactivateAwayController - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock;                      //@synthesize canBypassPinLock=_canBypassPinLock - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomUnlockLabel; 
-(id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 unlockAction:(/*^block*/ id)arg3 identifier:(id)arg4 ;
-(void)setDeactivateAwayController:(BOOL)arg1 ;
-(void)setRequiresUnlock:(BOOL)arg1 ;
-(void)setUnlockAction:(/*^block*/ id)arg1 ;
-(BOOL)requiresUnlock;
-(/*^block*/ id)unlockAction;
-(BOOL)hasCustomUnlockLabel;
-(void)setLockLabel:(id)arg1 ;
-(void)setShortLockLabel:(id)arg1 ;
-(BOOL)deactivateAwayController;
-(void)dealloc;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(BOOL)canBypassPinLock;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(id)lockLabel;
-(id)shortLockLabel;
@end

