/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSArray, ABContactViewController, UIView, NSString, UIFont, UIImage;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UIViewControllerRestoration> {

	char _badgeEmailPropertiesForMailVIP;
	char _allowsEditing;
	char _allowsActions;
	char _shouldShowLinkedPeople;
	char _allowsSharing;
	char _allowsAddToFavorites;
	char _allowsConferencing;
	char _allowsContactBlocking;
	char _allowsOnlyPhoneActions;
	char _allowsOnlyFaceTimeActions;
	char _highlightedImportant;
	void* _addressBook;
	void* _displayedPerson;
	id<ABPersonViewControllerDelegate> _personViewDelegate;
	NSArray* _displayedProperties;
	ABContactViewController* _contactViewController;
	UIView* _personHeaderView;
	int _style;
	int _highlightedProperty;
	int _highlightedMultiValueIdentifier;

}

@property (assign,nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;              //@synthesize personViewDelegate=_personViewDelegate - In the implementation block
@property (assign,nonatomic) void* addressBook;                                                  //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) void* displayedPerson;                                              //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                        //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char allowsActions;                                                 //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) char shouldShowLinkedPeople;                                        //@synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople - In the implementation block
@property (assign,nonatomic) char allowsSharing;                                                 //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) char allowsAddToFavorites;                                          //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) char allowsDeletion; 
@property (assign,nonatomic) char allowsCancel; 
@property (assign,nonatomic) char allowsSounds; 
@property (assign,nonatomic) char allowsVibrations; 
@property (assign,nonatomic) char allowsConferencing;                                            //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) char allowsContactBlocking;                                         //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) ABContactViewController * contactViewController;                    //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,readonly) UIView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView;                                          //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (assign,nonatomic) char shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (assign,nonatomic) char allowsOnlyPhoneActions;                                        //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) char allowsOnlyFaceTimeActions;                                     //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) char shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (assign,nonatomic) char badgeEmailPropertiesForMailVIP;                                //@synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP - In the implementation block
@property (assign,nonatomic) int style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int highlightedProperty;                                            //@synthesize highlightedProperty=_highlightedProperty - In the implementation block
@property (assign,nonatomic) int highlightedMultiValueIdentifier;                                //@synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier - In the implementation block
@property (assign,nonatomic) char highlightedImportant;                                          //@synthesize highlightedImportant=_highlightedImportant - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(char)allowsCancel;
-(char)allowsOnlyPhoneActions;
-(void)setAllowsOnlyPhoneActions:(char)arg1 ;
-(char)allowsOnlyFaceTimeActions;
-(void)setAllowsOnlyFaceTimeActions:(char)arg1 ;
-(char)allowsSounds;
-(void)setAllowsConferencing:(char)arg1 ;
-(ABContactViewController *)contactViewController;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(void)setAllowsAddToFavorites:(char)arg1 ;
-(char)allowsActions;
-(char)allowsSharing;
-(char)allowsAddToFavorites;
-(char)allowsContactBlocking;
-(char)allowsConferencing;
-(NSArray *)displayedProperties;
-(void)setAllowsDeletion:(char)arg1 ;
-(float)ab_heightToFitForViewInPopoverView;
-(id)newActionButton;
-(void*)displayedPerson;
-(char)handleExternalChange;
-(id)displayedUIPerson;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(char)arg1 ;
-(void)setAllowsVibrations:(char)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(char)arg1 ;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(NSString *)messageDetail;
-(UIFont *)messageFont;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(char)shouldShowLinkedPeople;
-(char)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(char)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(char)arg4 ;
-(char)allowsVibrations;
-(char)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(char)arg1 ;
-(char)shouldShowLinkingUIOnCard;
-(char)appearsInLinkingPeoplePicker;
-(void)setAllowsSettingAsPreferredCardForName:(char)arg1 ;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2 ;
-(char)manuallyLinkPerson:(id)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(id<ABPersonViewControllerDelegate>)personViewDelegate;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(char)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(char)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)reloadContactViewController;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(char)arg3 ;
-(int)highlightedProperty;
-(int)highlightedMultiValueIdentifier;
-(char)highlightedImportant;
-(void)setHighlightedProperty:(int)arg1 ;
-(void)setHighlightedMultiValueIdentifier:(int)arg1 ;
-(void)setHighlightedImportant:(char)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(char)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomFooterView:(UIView *)arg1 ;
-(UIView *)customFooterView;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(char)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(char)_updateAllDataForExternalChange;
-(char)makeFirstFieldBecomeFirstResponder;
-(void)personViewController:(id)arg1 willSetEditing:(char)arg2 animated:(char)arg3 ;
-(void)cancelEditing:(char)arg1 ;
-(void)setContactViewController:(ABContactViewController *)arg1 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3 ;
-(void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(char)arg7 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5 ;
-(id)editDelegate;
-(void)setEditDelegate:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(char)allowsDeletion;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsSounds:(char)arg1 ;
-(void)setDisplayedPerson:(void*)arg1 ;
-(void)setAllowsActions:(char)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UIView *)tableHeaderView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(NSString *)message;
-(id)initWithStyle:(int)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setAllowsCancel:(char)arg1 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(char)arg5 ;
-(void)setPersonViewDelegate:(id<ABPersonViewControllerDelegate>)arg1 ;
-(void)setShouldShowLinkedPeople:(char)arg1 ;
-(void)setAllowsContactBlocking:(char)arg1 ;
-(void)setAllowsSharing:(char)arg1 ;
-(NSString *)attribution;
-(void)setAttribution:(NSString *)arg1 ;
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
@end
