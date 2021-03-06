/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MFComposeTypeFactory : NSObject
+(id)addInlineAttachmentForInclusion:(id)arg1 onlyIfNecessary:(BOOL)arg2 delegate:(id)arg3 ;
+(unsigned)imageScaleFromUserDefaults;
+(void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2 ;
+(void)setupWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)addAttachment:(id)arg1 prepend:(BOOL)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4 ;
+(id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(BOOL)arg2 prependBlankLine:(BOOL)arg3 delegate:(id)arg4 ;
+(void)_setContent:(id)arg1 includeAttachments:(BOOL)arg2 shouldQuote:(BOOL)arg3 prependBlankLine:(BOOL)arg4 delegate:(id)arg5 ;
+(void)_prependQuotedMarkup:(id)arg1 shouldIndent:(BOOL)arg2 toBodyField:(id)arg3 ;
+(void)_prependPreamble:(id)arg1 toBodyField:(id)arg2 ;
+(void)_quoteFromModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2 ;
+(id)headersFromDelegate:(id)arg1 ;
+(id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2 ;
@end

