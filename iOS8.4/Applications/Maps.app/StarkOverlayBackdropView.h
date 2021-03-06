/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UILongPressGestureRecognizer, NSIndexPath;

@interface StarkOverlayBackdropView : UICollectionViewCell {

	id _target;
	SEL _action;
	UIView* _container;
	UIImageView* _focusRing;
	UILongPressGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _buttonRecognizer;
	char _focusable;
	NSIndexPath* _currentIndexPath;

}

@property (assign,nonatomic) char focusable;                            //@synthesize focusable=_focusable - In the implementation block
@property (nonatomic,copy) NSIndexPath * currentIndexPath;              //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
+(id)focusRingImage;
-(void)handlePress:(id)arg1 ;
-(void)setFocusable:(char)arg1 ;
-(void)setupFocusRingIfNecesary;
-(char)focusable;
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)focusedViewDidChange;
-(char)canBecomeFocused;
-(void)prepareForReuse;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

