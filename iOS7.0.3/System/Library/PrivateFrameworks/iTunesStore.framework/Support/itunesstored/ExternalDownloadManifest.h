/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ExternalDownloadManifest : NSObject {

	NSArray* _invalidDownloads;
	NSArray* _validDownloads;

}

@property (readonly) NSArray * invalidDownloads; 
@property (readonly) NSArray * validDownloads; 
-(id)invalidDownloads;
-(id)initWithValidDownloads:(id)arg1 invalidDownloads:(id)arg2 ;
-(BOOL)_parsePropertyList:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)validDownloads;
-(id)initWithPropertyList:(id)arg1 ;
@end

