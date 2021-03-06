/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UISearchBar, UIView;

@interface RemindersSearchView : UIView {

	UIButton* _scheduleCardButton;
	UISearchBar* _searchBar;
	UIView* _searchResultsView;
	/*^block*/ id _showScheduleCardHandler;

}

@property (nonatomic,readonly) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (retain) UIView * searchResultsView;                       //@synthesize searchResultsView=_searchResultsView - In the implementation block
@property (nonatomic,copy) id showScheduleCardHandler;               //@synthesize showScheduleCardHandler=_showScheduleCardHandler - In the implementation block
-(void)setShowScheduleCardHandler:(/*^block*/ id)arg1 ;
-(void)deactivateSearchBar;
-(void)activateSearchBar;
-(void)setSearchResultsView:(id)arg1 ;
-(/*^block*/ id)showScheduleCardHandler;
-(void)_scheduledCardButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)searchBar;
-(id)searchResultsView;
-(void).cxx_destruct;
@end

