/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXEventStealerViewDelegate;
@interface GAXEventStealerView : UIView {

	BOOL _shouldStealAllEvents;
	<GAXEventStealerViewDelegate>* _eventStealerViewDelegate;

}

@property (assign,nonatomic) BOOL shouldStealAllEvents;                                             //@synthesize shouldStealAllEvents=_shouldStealAllEvents - In the implementation block
@property (assign,nonatomic) <GAXEventStealerViewDelegate> * eventStealerViewDelegate;              //@synthesize eventStealerViewDelegate=_eventStealerViewDelegate - In the implementation block
-(void)setShouldStealAllEvents:(BOOL)arg1 ;
-(BOOL)shouldStealAllEvents;
-(id)eventStealerViewDelegate;
-(void)setEventStealerViewDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
@end

