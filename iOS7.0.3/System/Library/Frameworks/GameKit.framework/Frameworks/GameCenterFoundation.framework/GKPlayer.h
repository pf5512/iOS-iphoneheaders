/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKPlayerInternal, NSArray, GKGame, NSString, NSDate;

@interface GKPlayer : NSObject <NSCoding, NSSecureCoding> {

	GKPlayerInternal* _internal;
	NSArray* _friends;
	GKGame* _lastPlayedGame;

}

@property (nonatomic,@dynamic,retain) NSString * message; 
@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,readonly) BOOL isFriendRequest; 
@property (nonatomic,@dynamic,retain) NSString * reason; 
@property (nonatomic,@dynamic,retain) NSString * reason2; 
@property (assign,nonatomic,@dynamic) unsigned rid; 
@property (assign,nonatomic,@dynamic) int source; 
@property (nonatomic,@dynamic,readonly) BOOL isFriendRecommendation; 
@property (nonatomic,@dynamic,retain) NSString * playerID; 
@property (nonatomic,@dynamic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,@dynamic,copy) NSString * alias; 
@property (retain) GKPlayerInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,@dynamic,copy) NSString * status; 
@property (nonatomic,@dynamic,readonly) NSString * firstName; 
@property (nonatomic,@dynamic,readonly) NSString * lastName; 
@property (nonatomic,@dynamic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) GKGame * lastPlayedGame;                           //@synthesize lastPlayedGame=_lastPlayedGame - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (getter=isLoaded,nonatomic,@dynamic,readonly) BOOL loaded; 
@property (assign,nonatomic,@dynamic) unsigned numberOfFriends; 
@property (nonatomic,readonly) SCD_Struct_GK4 stats; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,@dynamic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,@dynamic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,@dynamic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,@dynamic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,retain) NSArray * friends;                                   //@synthesize friends=_friends - In the implementation block
+(id)cacheKeyForPlayerID:(id)arg1 ;
+(void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(/*^block*/ id)arg3 ;
+(void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(/*^block*/ id)arg2 ;
+(id)anonymousPlayer;
+(id)unknownPlayer;
+(id)automatchPlayer;
+(void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(BOOL)hasPhoto;
-(id)initWithPendingFriendRequest:(id)arg1 ;
-(BOOL)isFriendRequest;
-(void)setInternal:(id)arg1 ;
-(void)setFriends:(id)arg1 ;
-(void)loadCommonFriends:(BOOL)arg1 asPlayersWithCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)acceptFriendRequestWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)declineFriendRequestWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadGamesPlayed:(/*^block*/ id)arg1 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)isFriendRecommendation;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(id)lastPlayedGame;
-(SCD_Struct_GK4)stats;
-(id)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)loadRecentMatchesForGame:(id)arg1 block:(/*^block*/ id)arg2 ;
-(id)friends;
-(void)loadProfileWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)sortName;
-(void)loadFriendsAsPlayersWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)displayName;
-(id)cacheKey;
-(id)email;
-(id)emails;
-(void)_postChangeNotification;
-(void)postChangeNotification;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

