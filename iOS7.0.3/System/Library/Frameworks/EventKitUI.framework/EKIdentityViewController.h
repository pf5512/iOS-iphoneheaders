/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AddressBookUI/ABPersonViewControllerDelegate.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@protocol EKIdentityProtocol;
@class ABPersonViewController;

@interface EKIdentityViewController : UIViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol> {

	<EKIdentityProtocol>* _identity;
	ABPersonViewController* _personViewController;

}

@property (assign,nonatomic,__weak) <EKEditItemViewControllerDelegate> * editDelegate; 
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)initWithIdentity:(id)arg1 ;
-(void)loadView;
-(void)setIdentity:(id)arg1 ;
-(void).cxx_destruct;
@end

