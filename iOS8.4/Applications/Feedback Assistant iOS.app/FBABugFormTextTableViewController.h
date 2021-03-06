/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/FBABugFormChildViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Feedback Assistant iOS/FBAExpandingTextViewTableCellDelegate.h>

@class FBAQuestion, FBAAnswer, FBATextViewTableCell, UIBarButtonItem, NSString, FBABugFormTextLabel;

@interface FBABugFormTextTableViewController : FBABugFormChildViewController <UITextViewDelegate, FBAExpandingTextViewTableCellDelegate> {

	FBAQuestion* _question;
	FBAAnswer* _answer;
	FBATextViewTableCell* _textViewCell;
	UIBarButtonItem* _doneButton;
	NSString* _footerText;
	FBABugFormTextLabel* _footerLabel;

}

@property (nonatomic,retain) FBAQuestion * question;                           //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) FBAAnswer * answer;                               //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) FBATextViewTableCell * textViewCell;              //@synthesize textViewCell=_textViewCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) NSString * footerText;                            //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,retain) FBABugFormTextLabel * footerLabel;                //@synthesize footerLabel=_footerLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBAQuestion *)question;
-(void)registerForKeyboardNotifications;
-(void)commitEdit;
-(void)updateFooterWithTextForCharCount:(unsigned)arg1 ;
-(void)sanitize;
-(void)expandingTextViewDidChange:(id)arg1 ;
-(void)didPressDone:(id)arg1 ;
-(void)setQuestion:(FBAQuestion *)arg1 ;
-(void)setTextViewCell:(FBATextViewTableCell *)arg1 ;
-(void)setFooterText:(NSString *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(NSString *)footerText;
-(void)setAnswer:(FBAAnswer *)arg1 ;
-(void)setFooterLabel:(FBABugFormTextLabel *)arg1 ;
-(FBABugFormTextLabel *)footerLabel;
-(FBAAnswer *)answer;
-(FBATextViewTableCell *)textViewCell;
@end

