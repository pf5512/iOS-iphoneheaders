/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSUColor;

@interface WDBorder : NSObject <NSCopying> {

	int mStyle;
	TSUColor* mColor;
	unsigned char mWidth;
	unsigned char mSpace;
	bool mShadow;
	bool mFrame;

}
-(void)dealloc;
-(id)init;
-(void)setFrame:(bool)arg1 ;
-(bool)frame;
-(bool)isEqual:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)style;
-(unsigned char)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(unsigned char)arg1 ;
-(bool)shadow;
-(void)setShadow:(bool)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(unsigned char)space;
-(bool)isEqualToBorder:(id)arg1 ;
-(void)setNullBorder;
-(void)setSingleBlackBorder;
-(void)setBorder:(id)arg1 ;
@end
