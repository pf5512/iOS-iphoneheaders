/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {

	NSMutableArray* _entryFields;
	NSMutableArray* _horizontalDividers;
	BOOL _isAttemptingFirstResponder;

}
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7 ;
+(CGRect)zerothHorizontalDividerFrameForValueViewRect:(CGRect)arg1 ;
+(unsigned)rowsForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1 ;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(id)viewForFirstResponder;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2 ;
-(void)entryField:(id)arg1 didEndEditingForKey:(id)arg2 ;
-(id)keyboardSettingsForKey:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)reloadFromModelIncludingRows:(BOOL)arg1 ;
-(void)reloadIncludingRows:(BOOL)arg1 ;
-(id)entryFieldForRow:(unsigned)arg1 ;
-(void)dealloc;
-(void)reload;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end

