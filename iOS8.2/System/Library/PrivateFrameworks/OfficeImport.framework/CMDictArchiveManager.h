/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableString, NSMutableDictionary, NSString;

@interface CMDictArchiveManager : CMArchiveManager {

	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;
	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	BOOL mIsFrameset;

}
-(void)dealloc;
-(id)name;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)addCssStyle:(id)arg1 ;
-(unsigned)resourceCount;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2 ;
-(void)setIsFrameset;
-(id)copyDictionaryWithSizeInfos:(char)arg1 ;
-(id)resourceUrlProtocol;
@end
