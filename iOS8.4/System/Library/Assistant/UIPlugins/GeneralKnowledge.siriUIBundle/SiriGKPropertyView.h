/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel;

@interface SiriGKPropertyView : SiriGKView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithAnswerProperty:(id)arg1 ;
-(id)_decoratedString:(id)arg1 forRegions:(id)arg2 ;
-(double)_lineHeight;
-(double)_bottomMargin;
-(id)_labelFontForHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

