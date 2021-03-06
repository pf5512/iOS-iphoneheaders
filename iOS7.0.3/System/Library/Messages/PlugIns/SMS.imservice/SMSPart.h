/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SMSPart : NSObject {

	NSMutableArray* _textParts;
	NSMutableArray* _attachmentParts;

}

@property (nonatomic,readonly) NSArray * textParts;                    //@synthesize textParts=_textParts - In the implementation block
@property (nonatomic,readonly) NSArray * attachmentParts;              //@synthesize attachmentParts=_attachmentParts - In the implementation block
-(void)dealloc;
-(id)attachmentParts;
-(id)textParts;
-(void)addAttachmentPart:(id)arg1 ;
-(void)addTextPart:(id)arg1 ;
@end

