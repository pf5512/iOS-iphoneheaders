/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
@end
