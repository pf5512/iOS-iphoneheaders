/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class GKLeaderboard, GKPlayerPhotoView, GKLabel, GKScore;

@interface GKLeaderboardScoreCell : GKCollectionViewCell {

	char _isAchievementCell;
	GKLeaderboard* _leaderboard;
	GKPlayerPhotoView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _scoreLabel;
	GKLabel* _rankLabel;

}

@property (nonatomic,retain) GKScore * score; 
@property (nonatomic,retain) GKLeaderboard * leaderboard;               //@synthesize leaderboard=_leaderboard - In the implementation block
@property (assign,nonatomic) char isAchievementCell;                    //@synthesize isAchievementCell=_isAchievementCell - In the implementation block
@property (nonatomic,retain) GKPlayerPhotoView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * scoreLabel;                      //@synthesize scoreLabel=_scoreLabel - In the implementation block
@property (nonatomic,retain) GKLabel * rankLabel;                       //@synthesize rankLabel=_rankLabel - In the implementation block
+(float)defaultShowcaseRowHeight;
+(id)itemHeightList;
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(float)defaultRowHeight;
-(GKLabel *)rankLabel;
-(GKLabel *)scoreLabel;
-(char)isAchievementCell;
-(void)setIsAchievementCell:(char)arg1 ;
-(void)setScoreLabel:(GKLabel *)arg1 ;
-(void)setRankLabel:(GKLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(GKPlayerPhotoView *)iconView;
-(void)setIconView:(GKPlayerPhotoView *)arg1 ;
-(void)setNameLabel:(GKLabel *)arg1 ;
-(GKLabel *)nameLabel;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)didUpdateModel;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
-(char)canRemoveItem;
-(void)establishConstraints;
-(GKScore *)score;
-(void)setScore:(GKScore *)arg1 ;
@end
