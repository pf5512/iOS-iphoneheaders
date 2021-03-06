/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSOperation, UIView, NSString;

@interface SBSearchTableViewCell : UITableViewCell {

	BOOL _badged;
	BOOL _starred;
	BOOL _isFirstInSection;
	BOOL _isLastInSection;
	BOOL _hasImage;
	BOOL _aboveSelectedCell;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _auxiliaryTitleLabel;
	UILabel* _auxiliarySubtitleLabel;
	UILabel* _summaryLabel;
	UIImageView* _titleImageView;
	UIImageView* _badgeImageView;
	UIImageView* _starImageView;
	NSOperation* _fetchImageOperation;
	UIView* _background;
	UIView* _clippingContainer;
	UIView* _separatorView;
	BOOL _hasRoundedImage;
	BOOL _shouldKnockoutImage;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * auxiliaryTitle; 
@property (nonatomic,retain) NSString * auxiliarySubtitle; 
@property (nonatomic,retain) NSString * summary; 
@property (assign,getter=isBadged,nonatomic) BOOL badged;                                    //@synthesize badged=_badged - In the implementation block
@property (assign,getter=isStarred,nonatomic) BOOL starred;                                  //@synthesize starred=_starred - In the implementation block
@property (assign,getter=isFirstInSection,nonatomic) BOOL firstInSection;                    //@synthesize isFirstInSection=_isFirstInSection - In the implementation block
@property (assign,getter=isLastInSection,nonatomic) BOOL lastInSection;                      //@synthesize isLastInSection=_isLastInSection - In the implementation block
@property (assign,getter=hasImage,nonatomic) BOOL hasImage;                                  //@synthesize hasImage=_hasImage - In the implementation block
@property (assign,getter=hasRoundedImage,nonatomic) BOOL hasRoundedImage;                    //@synthesize hasRoundedImage=_hasRoundedImage - In the implementation block
@property (assign,nonatomic) BOOL shouldKnockoutImage;                                       //@synthesize shouldKnockoutImage=_shouldKnockoutImage - In the implementation block
@property (assign,getter=isAboveSelectedCell,nonatomic) BOOL aboveSelectedCell;              //@synthesize aboveSelectedCell=_aboveSelectedCell - In the implementation block
@property (nonatomic,retain) NSOperation * fetchImageOperation;                              //@synthesize fetchImageOperation=_fetchImageOperation - In the implementation block
+(void)resetContentSizeCache;
+(id)secontaryTextColor;
+(id)starImage;
+(float)rowHeightForPreferredContentSizeWithSubtitle:(BOOL)arg1 numberOfSummaryLines:(int)arg2 ;
+(id)unmaskedSelectedBackgroundColor;
+(id)maskedSelectedBackgroundColor;
+(id)backgroundColor;
+(void)initialize;
+(id)selectedTextColor;
+(id)unreadImage;
+(id)lineColor;
-(void)setSummary:(id)arg1 withNumberOfLines:(int)arg2 ;
-(void)updateBottomLine;
-(void)setFetchImageOperation:(id)arg1 ;
-(void)updateSelectedState;
-(void)setIsLastInSection:(BOOL)arg1 ;
-(void)setAboveSelectedCell:(BOOL)arg1 ;
-(void)clipToTopHeaderInTableView:(id)arg1 ;
-(void)setTitleImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isBadged;
-(void)setBadged:(BOOL)arg1 ;
-(BOOL)isStarred;
-(void)setStarred:(BOOL)arg1 ;
-(BOOL)isFirstInSection;
-(void)setFirstInSection:(BOOL)arg1 ;
-(BOOL)isLastInSection;
-(void)setLastInSection:(BOOL)arg1 ;
-(BOOL)isAboveSelectedCell;
-(id)fetchImageOperation;
-(BOOL)hasRoundedImage;
-(void)setHasRoundedImage:(BOOL)arg1 ;
-(BOOL)shouldKnockoutImage;
-(void)setShouldKnockoutImage:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)_scriptingInfo;
-(id)title;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(BOOL)hasImage;
-(void)setAuxiliaryTitle:(id)arg1 ;
-(void)setAuxiliarySubtitle:(id)arg1 ;
-(id)auxiliaryTitle;
-(id)auxiliarySubtitle;
-(void)setHasImage:(BOOL)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

