/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/DataclassOwners/Notes.bundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@protocol OS_dispatch_queue;
@class NoteContext, NSObject, ACAccountStore;

@interface NotesDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	NoteContext* _noteContext;
	NSObject<OS_dispatch_queue>* _noteContextQueue;
	ACAccountStore* _accountStore;

}
+(id)dataclasses;
-(bool)_drainLocalStore;
-(bool)_removeNoteAccountForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(id)_noteContext;
-(bool)_createNoteAccountForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(bool)_isLocalStoreEmpty;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(bool)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(id)_syncingAccountForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(id)init;
-(void).cxx_destruct;
-(id)_accountStore;
@end
