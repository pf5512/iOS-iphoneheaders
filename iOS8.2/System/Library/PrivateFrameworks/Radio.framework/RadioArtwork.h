/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {

	NSURL* _URL;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;              //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)pointSize;
-(NSURL *)URL;
-(CGSize)pixelSize;
-(id)initWithArtworkURL:(id)arg1 pixelSize:(CGSize)arg2 ;
-(id)initWithArtworkDictionary:(id)arg1 ;
@end

