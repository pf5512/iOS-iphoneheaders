/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSSecureCoding.h>
#import <MediaPlayer/NSCopying.h>

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	unsigned long long _sectionIndexTitleIndex;
	NSRange _range;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndexTitleIndex;              //@synthesize sectionIndexTitleIndex=_sectionIndexTitleIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)sectionIndexTitleIndex;
-(void)setSectionIndexTitleIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)_init;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

