/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUnlockActionContext.h>

@class NSString;

@interface SBMutableUnlockActionContext : SBUnlockActionContext

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * lockLabel; 
@property (nonatomic,retain) NSString * shortLockLabel; 
@property (nonatomic,copy) id unlockAction; 
@property (assign,nonatomic) BOOL requiresUnlock; 
@property (assign,nonatomic) BOOL deactivateAwayController; 
@property (assign,nonatomic) BOOL canBypassPinLock; 
@end

