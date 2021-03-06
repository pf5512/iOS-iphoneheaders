/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <ChatKit/CKTranscriptComposeDelegate.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol.h>

@class CKModalTranscriptController, NSString;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate, CKSMSComposeViewServiceProtocol> {

	BOOL _canEditRecipients;
	BOOL _supportsAttachments;
	BOOL _supportsMessageInspection;
	BOOL _forceMMS;
	BOOL _disableCameraAttachments;
	CKModalTranscriptController* _modalTranscriptController;

}

@property (nonatomic,retain) CKModalTranscriptController * modalTranscriptController;              //@synthesize modalTranscriptController=_modalTranscriptController - In the implementation block
@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) BOOL canEditRecipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)forceMMS;
-(BOOL)canEditRecipients;
-(void)didCancelComposition:(id)arg1 ;
-(void)showNewMessageCompositionForComposition:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)transcriptControllerDidReportSpam:(id)arg1 ;
-(BOOL)supportsAttachments;
-(void)disableCameraAttachments;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)setModalTranscriptController:(CKModalTranscriptController *)arg1 ;
-(CKModalTranscriptController *)modalTranscriptController;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)_forceMMSIfNecessary;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(BOOL)supportsMessageInspection;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)forceCancelComposition;
@end

