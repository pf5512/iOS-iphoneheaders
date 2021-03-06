/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIViewController, SetupChoiceController, UIAlertView;

@interface SetupChoice : NSObject <UIAlertViewDelegate> {

	NSString* _localizedTitle;
	UIViewController* _nextController;
	id _identifier;
	SetupChoiceController* _owner;
	Class _nextControllerClass;
	/*^block*/id _condition;
	UIAlertView* _alertView;
	/*^block*/id _alertAction;

}

@property (nonatomic,retain) NSString * localizedTitle;                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) Class nextControllerClass;                  //@synthesize nextControllerClass=_nextControllerClass - In the implementation block
@property (nonatomic,retain) id identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id condition;                                 //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                    //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) id alertAction;                               //@synthesize alertAction=_alertAction - In the implementation block
@property (nonatomic,retain) SetupChoiceController * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChoiceID:(id)arg1 title:(id)arg2 nextControllerClass:(Class)arg3 ;
-(void)setNextControllerClass:(Class)arg1 ;
-(void)setAlert:(id)arg1 condition:(/*^block*/id)arg2 action:(/*^block*/id)arg3 ;
-(void)testConditionWithController:(id)arg1 ;
-(Class)nextControllerClass;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(id)identifier;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(id)alertAction;
-(id)condition;
-(void)setCondition:(id)arg1 ;
-(NSString *)localizedTitle;
-(SetupChoiceController *)owner;
-(void)setOwner:(SetupChoiceController *)arg1 ;
@end

