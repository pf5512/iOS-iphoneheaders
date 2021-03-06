/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMOperation.h>

@class BKLibraryPlist, NSString;

@interface BKLibraryPlistOperation : IMOperation {

	BKLibraryPlist* _libraryPlist;
	int _startingGeneration;

}

@property (retain) BKLibraryPlist * libraryPlist;              //@synthesize libraryPlist=_libraryPlist - In the implementation block
@property (readonly) NSString * plistPath; 
@property (assign) int startingGeneration;                     //@synthesize startingGeneration=_startingGeneration - In the implementation block
@property (readonly) int currentGeneration; 
-(void)setLibraryPlist:(BKLibraryPlist *)arg1 ;
-(BKLibraryPlist *)libraryPlist;
-(int)currentGeneration;
-(void)setStartingGeneration:(int)arg1 ;
-(char)rewritePlist:(id)arg1 ;
-(int)startingGeneration;
-(void)postNotification;
-(NSString *)plistPath;
@end

