/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(char)accountExists:(id)arg1 ;
-(char)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end
