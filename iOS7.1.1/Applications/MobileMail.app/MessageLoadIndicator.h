/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MessageLoadButton, MessageLoadSplitter, UILabel;

@interface MessageLoadIndicator : UIView {

	MessageLoadButton* _control;
	MessageLoadSplitter* _splitter;
	UILabel* _label;

}
-(id)initWithDescription:(id)arg1 button:(id)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
@end

