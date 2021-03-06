/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/BlockableScrollViewDelegate.h>
#import <EventKitUI/EKDayViewDataSource.h>
#import <EventKitUI/EKDayViewDelegate.h>
#import <EventKitUI/EKEventGestureControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol EKDayViewControllerDelegate, EKDayViewControllerDataSource;
@class UIView, UIScrollView, EKDayView, EKDayViewWithGutters, NSDateComponents, CalendarOccurrencesCollection, EKEventGestureController, ScrollSpringFactory, NSCalendar, EKEventEditViewController, NSString;

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate> {

	UIView* _clipView;
	UIScrollView* _horizontalScrollingView;
	EKDayView* _previousDay;
	EKDayView* _currentDay;
	EKDayView* _nextDay;
	EKDayViewWithGutters* _previousDayWithGutter;
	EKDayViewWithGutters* _currentDayWithGutter;
	EKDayViewWithGutters* _nextDayWithGutter;
	unsigned _scrollViewAnimating : 1;
	unsigned _hasPendingNextDate : 1;
	NSDateComponents* _pendingNextDate;
	unsigned _hasPendingPreviousDate : 1;
	NSDateComponents* _pendingPreviousDate;
	unsigned _decelerating : 1;
	unsigned _settingDateFromScrolling : 1;
	CalendarOccurrencesCollection* _occurrences;
	CalendarOccurrencesCollection* _previousDayOccurrences;
	CalendarOccurrencesCollection* _nextDayOccurrences;
	EKEventGestureController* _eventGestureController;
	ScrollSpringFactory* _decelerationSpringFactory;
	NSDateComponents* _originalDisplayDate;
	double _dayStart;
	double _dayEnd;
	BOOL _initialLoad;
	BOOL _instigatedDateChange;
	BOOL _viewAppeared;
	BOOL _resizing;
	BOOL _adjustingForDeceleration;
	BOOL _fingerDown;
	BOOL _correctAfterScroll;
	int _parallaxState;
	NSDateComponents* _targetDateComponents;
	BOOL _needToCompleteScrollingAnimation;
	BOOL _needToCompleteDeceleration;
	BOOL _showsBanner;
	BOOL _allowsDaySwitching;
	BOOL _allowsSelection;
	BOOL _shouldAutoscrollOnNextActivation;
	BOOL _alwaysAnimate;
	BOOL _disableGestureDayChange;
	BOOL _disableNotifyDateChangeDuringTracking;
	BOOL _animateAllDayAreaHeight;
	BOOL _shouldAutoscrollAfterAppearance;
	BOOL _notifyWhenTapOtherEventDuringDragging;
	id<EKDayViewControllerDelegate> _delegate;
	id<EKDayViewControllerDataSource> _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	double _gutterWidth;
	UIView* _gestureOccurrenceSuperview;
	EKEventEditViewController* _currentEditor;
	CGPoint _normalizedContentOffset;

}

@property (assign,nonatomic,__weak) id<EKDayViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                                     //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                              //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL showsBanner;                                                 //@synthesize showsBanner=_showsBanner - In the implementation block
@property (assign,nonatomic) BOOL allowsDaySwitching;                                          //@synthesize allowsDaySwitching=_allowsDaySwitching - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection;                                             //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoscrollOnNextActivation;                            //@synthesize shouldAutoscrollOnNextActivation=_shouldAutoscrollOnNextActivation - In the implementation block
@property (assign,nonatomic) BOOL alwaysAnimate;                                               //@synthesize alwaysAnimate=_alwaysAnimate - In the implementation block
@property (assign,nonatomic) BOOL disableGestureDayChange;                                     //@synthesize disableGestureDayChange=_disableGestureDayChange - In the implementation block
@property (assign,nonatomic) BOOL disableNotifyDateChangeDuringTracking;                       //@synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking - In the implementation block
@property (assign,nonatomic) BOOL animateAllDayAreaHeight;                                     //@synthesize animateAllDayAreaHeight=_animateAllDayAreaHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoscrollAfterAppearance;                             //@synthesize shouldAutoscrollAfterAppearance=_shouldAutoscrollAfterAppearance - In the implementation block
@property (assign,nonatomic) BOOL notifyWhenTapOtherEventDuringDragging;                       //@synthesize notifyWhenTapOtherEventDuringDragging=_notifyWhenTapOtherEventDuringDragging - In the implementation block
@property (assign,nonatomic) double gutterWidth;                                               //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (nonatomic,retain) UIView * gestureOccurrenceSuperview;                              //@synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * currentEditor;                        //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,readonly) UIView * currentAllDayView; 
@property (nonatomic,readonly) BOOL currentDayContainsOccurrences; 
@property (assign,nonatomic) CGPoint normalizedContentOffset;                                  //@synthesize normalizedContentOffset=_normalizedContentOffset - In the implementation block
@property (nonatomic,copy) NSDateComponents * pendingNextDate;                                 //@synthesize pendingNextDate=_pendingNextDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * pendingPreviousDate;                             //@synthesize pendingPreviousDate=_pendingPreviousDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(unsigned long long)firstVisibleSecond;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2 ;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2 ;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2 ;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)dayViewDidTapEmptySpace:(id)arg1 ;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2 ;
-(void)setDisplayDate:(NSDateComponents *)arg1 ;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)bringEventToFront:(id)arg1 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(NSDateComponents *)displayDate;
-(BOOL)blockableScrollViewShouldAllowScrolling;
-(void)_setDisplayDateInternal:(id)arg1 ;
-(BOOL)allowsDaySwitching;
-(id)_createGutterDayViewWithDayView:(id)arg1 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(void)scrollToNow:(BOOL)arg1 ;
-(BOOL)shouldAutoscrollAfterAppearance;
-(void)_scrollDayViewAfterAppearence:(BOOL)arg1 ;
-(void)_scrollDayViewAfterAppearenceIfNeeded;
-(void)_relayoutDays;
-(id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(BOOL)arg2 ;
-(void)_updateAllDayAreaHeight;
-(BOOL)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2 ;
-(BOOL)notifyWhenTapOtherEventDuringDragging;
-(void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_completeScrollingAnimationIfNeeded;
-(void)_completeDecelerationIfNeeded;
-(void)_setNextAndPreviousFirstVisibleSecondToCurrent;
-(void)_setHorizontalContentOffsetUsingSpringAnimation:(CGPoint)arg1 ;
-(void)_setDayView:(id)arg1 toDate:(id)arg2 ;
-(void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 ;
-(id)_eventGestureSuperview;
-(id)gestureController;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_eventsForDay:(id)arg1 ;
-(id)_occurrencesForDayView:(id)arg1 ;
-(UIView *)gestureOccurrenceSuperview;
-(void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(EKEventEditViewController *)currentEditor;
-(BOOL)disableGestureDayChange;
-(BOOL)disableNotifyDateChangeDuringTracking;
-(void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg1 ;
-(void)_notifyDelegateOfSelectedDateChange;
-(void)setPendingPreviousDate:(NSDateComponents *)arg1 ;
-(void)setPendingNextDate:(NSDateComponents *)arg1 ;
-(BOOL)_isViewInVisibleRect:(id)arg1 ;
-(void)_relayoutDaysDuringScrolling;
-(void)_beginParallaxStateIfPossible;
-(BOOL)animateAllDayAreaHeight;
-(double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(CGRect)arg2 ;
-(void)_scrollViewDidEndDecelerating:(id)arg1 notifyParallxState:(BOOL)arg2 ;
-(void)_endParallaxStateIfNeeded;
-(void)_cleanUpTargetDateComponents;
-(BOOL)shouldAutoscrollOnNextActivation;
-(void)setShouldAutoscrollOnNextActivation:(BOOL)arg1 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1 ;
-(double)timedRegionOriginForEventGestureController:(id)arg1 ;
-(double)horizontalOffsetForPagingForEventGestureController:(id)arg1 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg1 ;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2 ;
-(id)createEventForEventGestureController:(id)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2 ;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2 ;
-(double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3 ;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2 ;
-(CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2 ;
-(double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5 ;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 gutterWidth:(double)arg2 ;
-(void)setAllowsDaySwitching:(BOOL)arg1 ;
-(void)layoutContainerView:(id)arg1 ;
-(UIView *)currentAllDayView;
-(BOOL)currentDayContainsOccurrences;
-(void)setAnimateAllDayAreaHeight:(BOOL)arg1 ;
-(id)preferredEventToSelectOnDate:(id)arg1 ;
-(void)setGestureOccurrenceSuperview:(UIView *)arg1 ;
-(void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2 ;
-(void)editorDidSaveEvent:(id)arg1 ;
-(void)editorDidDeleteEvent:(id)arg1 ;
-(void)editorDidCancelEditingEvent:(id)arg1 ;
-(void)reloadDataBetweenStart:(id)arg1 end:(id)arg2 ;
-(void)significantTimeChangeOccurred;
-(void)externallyEndedGestureDragging;
-(void)beginExternallyControlledScrolling;
-(void)setToDay:(id)arg1 normalizedOffset:(double)arg2 ;
-(void)endExternallyControlledScrolling;
-(BOOL)showsBanner;
-(void)setShowsBanner:(BOOL)arg1 ;
-(BOOL)alwaysAnimate;
-(void)setAlwaysAnimate:(BOOL)arg1 ;
-(void)setDisableGestureDayChange:(BOOL)arg1 ;
-(void)setDisableNotifyDateChangeDuringTracking:(BOOL)arg1 ;
-(void)setShouldAutoscrollAfterAppearance:(BOOL)arg1 ;
-(void)setNotifyWhenTapOtherEventDuringDragging:(BOOL)arg1 ;
-(void)setCurrentEditor:(EKEventEditViewController *)arg1 ;
-(NSDateComponents *)pendingNextDate;
-(NSDateComponents *)pendingPreviousDate;
-(void)dealloc;
-(void)setDataSource:(id<EKDayViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<EKDayViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<EKDayViewControllerDataSource>)dataSource;
-(id<EKDayViewControllerDelegate>)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)allowsSelection;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)_localeChanged:(id)arg1 ;
@end

