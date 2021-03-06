/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <SpringBoard/SBCollectionViewCellDelegate.h>
#import <SpringBoard/SBStarkBannerTargetObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBStarkNotificationViewControllerDelegate;
@class UITapGestureRecognizer, SBStarkBannerTarget, SBStarkAlertItemBannerSource, SBStarkBulletinBannerSource, SBUIBannerContext, NSArray, SBStarkBannerCell, SBStarkNotificationLayout, SBCarBannerNotificationView;

@interface SBStarkNotificationViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate> {

	<SBStarkNotificationViewControllerDelegate>* _delegate;
	BOOL _touchCapable;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	SBStarkBannerTarget* _bannerTarget;
	SBStarkAlertItemBannerSource* _alertItemBannerSource;
	SBStarkBulletinBannerSource* _bulletinBannerSource;
	SBUIBannerContext* _currentContext;
	NSArray* _currentSubActionLabels;
	SBStarkBannerCell* _currentCell;
	int _state;
	SBStarkNotificationLayout* _notificationsLayout;
	SBCarBannerNotificationView* _notificationsView;

}

@property (assign,nonatomic) <SBStarkNotificationViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state; 
-(void)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setSuspended:(BOOL)arg1 cancellingCurrent:(BOOL)arg2 forReason:(id)arg3 ;
-(void)dismissCurrent;
-(void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2 ;
-(id)initWithInteractionAffordances:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)state;
-(BOOL)isSuspended;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(void)_performBackGesture:(id)arg1 ;
-(void)_performSelectGesture:(id)arg1 ;
-(void)_setState:(int)arg1 ;
@end

