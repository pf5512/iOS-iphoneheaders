/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UIKeyInput.h>

@protocol UIWebFindOnPageHighlighter;
@class NSArray, UILabel, UIBarButtonItem, UIActivityIndicatorView;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput> {

	BOOL _requiresKeyboard;
	NSArray* _toolbarItems;
	UILabel* _currentResultLabel;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	UIActivityIndicatorView* _indicatorView;
	BOOL _useActivityView;
	<UIWebFindOnPageHighlighter>* _highlighter;

}

@property (nonatomic,retain) <UIWebFindOnPageHighlighter> * highlighter;                 //@synthesize highlighter=_highlighter - In the implementation block
@property (assign,nonatomic) BOOL useActivityView;                                       //@synthesize useActivityView=_useActivityView - In the implementation block
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(void)setHighlighter:(id)arg1 ;
-(id)highlighter;
-(void)setRequiresKeyboard:(BOOL)arg1 ;
-(id)findTextField;
-(id)initWithHighlighter:(id)arg1 ;
-(BOOL)_willShowActivityIndicator;
-(id)_currentResultLabel;
-(void)_done;
-(void)setUseActivityView:(BOOL)arg1 ;
-(BOOL)useActivityView;
-(BOOL)shouldShowToolbarInFullscreen;
-(void)dealloc;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)toolbarItems;
-(id)inputAccessoryView;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)updateUI;
@end

