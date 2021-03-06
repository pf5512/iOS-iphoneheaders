/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>

@protocol StarkPhysicalControlMenuViewControllerDelegate;
@interface StarkPhysicalControlMenuViewController : StarkTableViewController {

	/*^block*/ id _completion;
	BOOL _knowsWhetherToShowCurrentLocation;
	BOOL _showsCurrentLocation;
	<StarkPhysicalControlMenuViewControllerDelegate>* _physicalControlMenuDelegate;

}

@property (assign,nonatomic,__weak) <StarkPhysicalControlMenuViewControllerDelegate> * physicalControlMenuDelegate;              //@synthesize physicalControlMenuDelegate=_physicalControlMenuDelegate - In the implementation block
-(void)_doneWithOutcome:(int)arg1 ;
-(id)physicalControlMenuDelegate;
-(BOOL)_showsCurrentLocation;
-(int)_menuItemIndexForCellRowIndex:(int)arg1 ;
-(void)setPhysicalControlMenuDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

