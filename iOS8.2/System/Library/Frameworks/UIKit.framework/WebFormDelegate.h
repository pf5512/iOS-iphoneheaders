/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebFormDelegate <NSObject>
@required
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
-(char)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;

@end
