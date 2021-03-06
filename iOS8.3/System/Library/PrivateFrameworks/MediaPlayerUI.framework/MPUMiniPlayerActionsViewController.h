/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MPUMiniPlayerActionsViewControllerDelegate;
@class NSArray, MPAVItem;

@interface MPUMiniPlayerActionsViewController : UITableViewController {

	NSArray* _actions;
	id<MPUMiniPlayerActionsViewControllerDelegate> _delegate;
	MPAVItem* _item;

}

@property (assign,nonatomic,__weak) id<MPUMiniPlayerActionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                                                           //@synthesize item=_item - In the implementation block
+(id)_actionsForItem:(id)arg1 ;
+(id)_imageForAction:(int)arg1 ;
+(id)_titleForAction:(int)arg1 ;
+(char)hasActionsForItem:(id)arg1 ;
-(void)setDelegate:(id<MPUMiniPlayerActionsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MPUMiniPlayerActionsViewControllerDelegate>)delegate;
-(MPAVItem *)item;
-(id)initWithItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateActions;
@end

