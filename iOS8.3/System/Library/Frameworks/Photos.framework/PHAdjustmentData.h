/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/NSSecureCoding.h>

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	NSData* _data;
	int _baseVersion;

}

@property (copy) NSString * formatIdentifier;                  //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (copy) NSString * formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
@property (readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (getter=isOpaque,readonly) char opaque; 
@property (assign,nonatomic) int baseVersion;                  //@synthesize baseVersion=_baseVersion - In the implementation block
+(id)opaqueAdjustmentData;
+(int)videoRequestVersionFromAdjustmentBaseVersion:(int)arg1 ;
+(int)adjustmentBaseVersionFromVideoRequestVersion:(int)arg1 ;
+(int)adjustmentBaseVersionFromImageRequestVersion:(int)arg1 ;
+(int)imageRequestVersionFromAdjustmentBaseVersion:(int)arg1 ;
+(char)supportsSecureCoding;
-(void)setFormatIdentifier:(NSString *)arg1 ;
-(void)setFormatVersion:(NSString *)arg1 ;
-(int)baseVersion;
-(void)setBaseVersion:(int)arg1 ;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(char)isOpaque;
-(NSString *)formatVersion;
-(NSString *)formatIdentifier;
@end

