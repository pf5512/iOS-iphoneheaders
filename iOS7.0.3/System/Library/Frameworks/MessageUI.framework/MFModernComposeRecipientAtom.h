/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFModernAtomView.h>

@protocol MFComposeRecipientAtomDelegate;
@class MFComposeRecipient, UITextInputTraits;

@interface MFModernComposeRecipientAtom : MFModernAtomView {

	<MFComposeRecipientAtomDelegate>* _delegate;
	MFComposeRecipient* _recipient;
	UITextInputTraits* _traits;
	unsigned _wasSelectedWhenTouchesBegan : 1;
	unsigned _touchesWereCancelled : 1;

}

@property (nonatomic,readonly) MFComposeRecipient * recipient; 
@property (assign,nonatomic) <MFComposeRecipientAtomDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned)arg3 ;
-(void)handleTouchAndHold;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(id)recipient;
@end

