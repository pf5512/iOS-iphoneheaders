/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Accounts/DataclassOwners/CloudDocs.bundle/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/ACDDataclassOwnerProtocol.h>

@class NSString;

@interface CloudDocsAccountDataclassOwner : NSObject <ACDDataclassOwnerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
@end

