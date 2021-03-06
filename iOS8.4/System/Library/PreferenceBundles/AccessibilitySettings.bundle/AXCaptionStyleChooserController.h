/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXCaptionPreviewDelegate.h>

@class UIWindow, UIView, NSArray, NSString;

@interface AXCaptionStyleChooserController : AccessibilityBaseListController <AXCaptionPreviewDelegate> {

	UIWindow* _fullScreenPreviewWindow;
	UIView* _landscapeBlackBackgroundView;
	UIView* _topHalfSplitImage;
	UIView* _bottomHalfSplitImage;
	UIView* _padSidePortionImage;
	CFStringRef profileId;
	NSArray* captionPreviewSpecifiers;
	NSArray* videoOverrideSpecifiers;

}

@property (nonatomic,readonly) CFStringRef profileId; 
@property (nonatomic,readonly) NSArray * captionPreviewSpecifiers; 
@property (nonatomic,readonly) NSArray * videoOverrideSpecifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)captionPreviewSpecifiers;
-(NSArray *)videoOverrideSpecifiers;
-(BOOL)isPreviewExpanded;
-(void)captionPreviewWasTapped:(BOOL)arg1 ;
-(id)_videoOverrideText;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(id)_snapshotWindow:(id)arg1 opaque:(BOOL)arg2 ;
-(id)_splitImageAppropriately:(id)arg1 statusBar:(id)arg2 secondHalfStart:(CGPoint)arg3 ;
-(BOOL)isStoredColorType:(int)arg1 equalWithColors:(id)arg2 ;
-(BOOL)isStoredTransparencyType:(int)arg1 equalWithTransparency:(id)arg2 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CFStringRef)profileId;
-(void)willResignActive;
@end

