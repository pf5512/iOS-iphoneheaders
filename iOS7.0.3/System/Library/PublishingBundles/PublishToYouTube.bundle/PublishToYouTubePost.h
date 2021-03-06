/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTFeedRequest.h>
#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate.h>

@interface PublishToYouTubePost : YTFeedRequest <PLDataArrayInputStreamProgressDelegate> {

	BOOL _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) BOOL allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(BOOL)allowsCellularAccessForUploads;
-(void)setAllowsCellularAccessForUploads:(BOOL)arg1 ;
-(void)uploadVideoAtPath:(id)arg1 withXMLData:(id)arg2 title:(id)arg3 ;
-(id)_publishURL;
@end

