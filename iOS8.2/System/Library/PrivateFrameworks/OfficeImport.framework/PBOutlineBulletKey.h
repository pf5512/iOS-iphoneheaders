/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface PBOutlineBulletKey : NSObject <NSCopying> {

	unsigned long mSlideId;
	int mTextType;
	unsigned long mPlaceholderIndex;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOutlineBullet:(id)arg1 ;
-(id)initWithSlideId:(unsigned long)arg1 textType:(int)arg2 placeholderIndex:(unsigned long)arg3 ;
@end
