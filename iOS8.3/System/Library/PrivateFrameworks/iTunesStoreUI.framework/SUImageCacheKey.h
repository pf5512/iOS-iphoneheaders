/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>

@class SUImageDataProvider, NSURL;

@interface SUImageCacheKey : NSObject <NSCopying> {

	SUImageDataProvider* _dataProvider;
	NSURL* _url;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

