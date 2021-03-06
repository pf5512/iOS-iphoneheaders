/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MNLockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	BOOL _userLockedScreenForCurrentManeuver;
	unsigned _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned _lastSeenAlert;
	BOOL _wasWithinManeuver;
	BOOL _guidanceAffectsDimming;

}

@property (nonatomic,readonly) int dimmingState;                        //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) BOOL guidanceAffectsDimming;               //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
@property (assign,nonatomic) unsigned lastSeenState;                    //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;              //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                      //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned lastSeenAlert;                    //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) BOOL wasWithinManeuver;                    //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
-(void)setGuidanceAffectsDimming:(BOOL)arg1 ;
-(int)dimmingState;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned)arg4 ;
-(unsigned)lastSeenState;
-(int)lastSeenManeuver;
-(id)lastSeenInstructions;
-(BOOL)wasWithinManeuver;
-(unsigned)lastSeenAlert;
-(void)setWasWithinManeuver:(BOOL)arg1 ;
-(void)setLastSeenState:(unsigned)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(void)setLastSeenInstructions:(id)arg1 ;
-(void)setLastSeenAlert:(unsigned)arg1 ;
-(void)userDidLockScreen;
-(BOOL)guidanceAffectsDimming;
-(id)init;
-(void).cxx_destruct;
@end

