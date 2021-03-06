/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarItemEditor.h>

@protocol EKStyleProvider, EKReminderEditorDelegate;
@class EKReminder;

@interface EKReminderEditor : EKCalendarItemEditor {

	<EKStyleProvider>* _styleProvider;
	<EKReminderEditorDelegate>* _reminderEditorDelegate;

}

@property (nonatomic,retain) EKReminder * reminder; 
@property (nonatomic,retain) <EKStyleProvider> * styleProvider;                                       //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) <EKReminderEditorDelegate> * reminderEditorDelegate;              //@synthesize reminderEditorDelegate=_reminderEditorDelegate - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)preferredTitle;
-(id)_editItems;
-(bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(id)notificationNamesForLocaleChange;
-(void)_revertEvent;
-(void)prepareEditItems;
-(void)_copyEventForPossibleRevert;
-(id)defaultAlertTitle;
-(bool)allowsDeletingFutureOccurrences;
-(id)_viewForSheet;
-(id)_nameForDeleteButton;
-(id)defaultTitleForCalendarItem;
-(bool)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)_canDetachSingleOccurrence;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(bool)arg2 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(bool)arg4 forSubitem:(unsigned long long)arg5 inSubsection:(unsigned long long)arg6 ;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(bool)arg2 ;
-(void)setupDeleteButton;
-(void)customizeActionSheet:(id)arg1 ;
-(void)setReminderEditorDelegate:(id)arg1 ;
-(void)setReminder:(id)arg1 ;
-(id)reminder;
-(id)reminderEditorDelegate;
-(unsigned long long)entityType;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)marginForTableView:(id)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
@end

