/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel, NSString, UIActivityIndicatorView, UIButton, UIColor;

@interface IMGridViewCell : UIView {

	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	NSString* _title;
	UIView* _highlightView;
	UIActivityIndicatorView* _workingView;
	UIButton* _closeBox;
	UIImageView* _badgeView;
	UILabel* _badgeLabel;
	UIView* _selectedWhitewashView;
	UIImageView* _selectedBadgeView;
	char _useMaskForHighlightView;
	char _highlighted;
	char _working;
	char _showSelectionView;
	UIColor* _borderColor;
	CGPoint _unjitterPoint;
	int _imageGravity;
	unsigned _isGrabbed : 1;
	unsigned _isEditing : 1;
	unsigned _canDelete : 1;
	unsigned _jiggleWhenEditing : 1;
	unsigned _isSelected : 1;
	unsigned _hidesWhitewash : 1;
	unsigned _openSelected : 1;

}

@property (nonatomic,retain,readonly) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) char useMaskForHighlightView; 
@property (assign,nonatomic) char highlighted; 
@property (assign,getter=isWorking,nonatomic) char working; 
@property (assign,nonatomic) char showSelectionView;                         //@synthesize showSelectionView=_showSelectionView - In the implementation block
@property (assign,nonatomic) char canDelete; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (assign,nonatomic) char jiggleWhenEditing; 
@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                          //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (nonatomic,readonly) UIEdgeInsets snapshotEdgeInsets; 
@property (nonatomic,retain) UIImageView * badgeView;                        //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UILabel * badgeLabel;                           //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UIView * selectedWhitewashView;                 //@synthesize selectedWhitewashView=_selectedWhitewashView - In the implementation block
@property (nonatomic,retain) UIImageView * selectedBadgeView;                //@synthesize selectedBadgeView=_selectedBadgeView - In the implementation block
@property (assign,nonatomic) int imageGravity;                               //@synthesize imageGravity=_imageGravity - In the implementation block
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
-(void)setCanDelete:(char)arg1 ;
-(UILabel *)badgeLabel;
-(void)setImageGravity:(int)arg1 ;
-(void)setBadgeText:(id)arg1 ;
-(void)setShowSelectionView:(char)arg1 ;
-(id)_gridView;
-(id)closeBox;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(void)setGrabbed:(char)arg1 ;
-(char)jiggleWhenEditing;
-(void)setJiggleWhenEditing:(char)arg1 ;
-(UIEdgeInsets)snapshotEdgeInsets;
-(char)useMaskForHighlightView;
-(void)_removeHighlightView;
-(id)workingView;
-(void)_removeWorkingView;
-(void)loadImageView;
-(int)imageGravity;
-(void)setWorking:(char)arg1 ;
-(void)setBadgeLabelNumber:(id)arg1 ;
-(void)setEnlargedSelectedState:(char)arg1 ;
-(void)_removeSelectedBadgeView;
-(void)_removeCloseBox;
-(CGSize)scaledImageSizeForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)layoutBadgeViewForImageFrame:(CGRect)arg1 ;
-(void)layoutBadgeLabelForBadgeViewBounds:(CGRect)arg1 ;
-(void)layoutSelectedWhitewashView;
-(UIView *)selectedWhitewashView;
-(void)layoutSelectedBadgeViewWithContentFrame:(CGRect)arg1 ;
-(UIImageView *)selectedBadgeView;
-(char)isWorking;
-(void)setShowCloseBox:(char)arg1 ;
-(void)setJiggling:(char)arg1 ;
-(void)setNewBadge:(char)arg1 ;
-(void)setUseMaskForHighlightView:(char)arg1 ;
-(void)setHidesWhitewash:(char)arg1 ;
-(void)setBadgeView:(UIImageView *)arg1 ;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(char)showSelectionView;
-(void)setSelectedWhitewashView:(UIView *)arg1 ;
-(void)setSelectedBadgeView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(UIView *)contentView;
-(void)setHighlighted:(char)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(void)setEditing:(char)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIImageView *)imageView;
-(UIImageView *)badgeView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(id)highlightView;
-(CGRect)selectionFrame;
-(char)highlighted;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(UIColor *)borderColor;
-(char)isAccessibilityElement;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(char)canDelete;
@end

