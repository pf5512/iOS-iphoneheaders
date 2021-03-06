/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>
#import <MessageUI/MFAttachmentPasteboardRepresentation.h>

@protocol MFAttachmentPasteboardRepresentation
@property (getter=isValid,nonatomic,readonly) bool valid; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * mimeType; 
@required
-(bool)isValid;
-(id)data;
-(id)name;
-(id)mimeType;
@end


@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation> {

	NSData* _data;
	NSString* _name;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                      //@synthesize mimeType=_mimeType - In the implementation block
@property (getter=isValid,nonatomic,readonly) bool valid; 
-(id)initWithAttachment:(id)arg1 ;
-(id)initWithMFAttachment:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isValid;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)mimeType;
-(void)setMimeType:(id)arg1 ;
@end

