/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/_WKFileUploadItem.h>

@interface _WKVideoFileUploadItem : _WKFileUploadItem {

	RetainPtr<NSString>* _filePath;
	RetainPtr<NSURL>* _mediaURL;

}
-(id)fileURL;
-(id)displayImage;
-(BOOL)isVideo;
-(id)initWithFilePath:(id)arg1 mediaURL:(id)arg2 ;
@end

