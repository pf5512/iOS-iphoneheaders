/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTFetchedTableViewController.h>

@class UIView, UIColor;

@interface MTToolbarHeaderViewController : MTFetchedTableViewController {

	UIView* _headerView;
	char _shouldTuckOnViewWillAppear;
	UIView* _embeddedToolbar;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIView * embeddedToolbar;                     //@synthesize embeddedToolbar=_embeddedToolbar - In the implementation block
@property (assign,nonatomic) char shouldTuckOnViewWillAppear;              //@synthesize shouldTuckOnViewWillAppear=_shouldTuckOnViewWillAppear - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)edit:(id)arg1 ;
-(UIView *)embeddedToolbar;
-(void)updateEmbeddedToolbar;
-(void)tuckEmbeddedToolbar;
-(void)setEmbeddedToolbar:(UIView *)arg1 ;
-(char)shouldTuckOnViewWillAppear;
-(void)setShouldTuckOnViewWillAppear:(char)arg1 ;
-(void)_updateToolbar:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateBackgroundColor;
@end
