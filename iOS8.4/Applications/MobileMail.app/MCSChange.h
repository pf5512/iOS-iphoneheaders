/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSFinalizedObject.h>

@class NSInvocation, NSSet, NSString;

@interface MCSChange : NSObject <MCSFinalizedObject> {

	NSInvocation* _invocation;
	unsigned long long _committedNumber;
	unsigned long long _managerNumber;
	unsigned _isFinalized : 1;
	char _isReverseOperation;

}

@property (assign,nonatomic) char isReverseOperation;               //@synthesize isReverseOperation=_isReverseOperation - In the implementation block
@property (nonatomic,readonly) NSSet * messagesSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isFinalized;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(int)localizedChangeDescriptionPriority;
-(NSSet *)messagesSet;
-(char)isRevertible;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned)adjustUnreadCount:(unsigned)arg1 withCriterion:(id)arg2 ;
-(unsigned long long)committedNumber;
-(id)mailboxToRemove;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(void)setManagerNumber:(unsigned long long)arg1 ;
-(char)isReverseOperation;
-(void)setIsReverseOperation:(char)arg1 ;
-(id)stores;
-(char)revert;
-(void)dealloc;
-(char)commit;
-(id)invocation;
-(void)setInvocation:(id)arg1 ;
-(id)accounts;
-(id)URLStrings;
@end

