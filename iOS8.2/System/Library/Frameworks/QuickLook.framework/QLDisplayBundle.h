/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>

@protocol QLPreviewItemInteractionDelegate, QLPreviewItem;
@class NSString, NSTimer, UIView;

@interface QLDisplayBundle : UIViewController {

	id<QLPreviewItemInteractionDelegate> _delegate;
	id<QLPreviewItem> _previewItem;
	char _overlayHidden;
	int _previewMode;
	char _loaded;
	char _loading;
	NSString* _password;
	NSTimer* _refreshTimer;
	int _index;
	SCD_Struct_QL6 clientContext;

}

@property (assign) SCD_Struct_QL7 clientContext; 
@property (assign) id<QLPreviewItemInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<QLPreviewItem> previewItem; 
@property (assign) int previewMode; 
@property (assign) int index;                                                  //@synthesize index=_index - In the implementation block
@property (assign) char loaded;                                                //@synthesize loaded=_loaded - In the implementation block
@property (assign) char loading;                                               //@synthesize loading=_loading - In the implementation block
@property (retain) NSString * password; 
@property (readonly) int airPlayMode; 
@property (readonly) UIView * accessoryView; 
@property (readonly) UIView * airplayView; 
@property (readonly) CGRect contentFrame; 
+(double)allowedLoadingDelay;
+(char)needsAVControls;
-(void)setLoaded:(char)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(void)enterBackground;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(void)_performCancelLoad;
-(void)loadIfNeededWithHints:(id)arg1 ;
-(void)didLoad;
-(void)_notifyDidLoadWithError:(id)arg1 ;
-(UIView *)airplayView;
-(void)viewDidUpdate;
-(char)canBeCached;
-(void)cancelLoadIfNeeded;
-(char)overlayIsHidden;
-(void)didFailLoadingWithError:(id)arg1 ;
-(void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2 ;
-(char)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(char)adaptativeHeight;
-(char)canCopyToPasteboard;
-(int)airPlayMode;
-(void)beginTrackingViewUpdates;
-(void)endTrackingViewUpdates;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)setNavigationBarVerticalOffset:(float)arg1 ;
-(id)pdfPreviewData;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(id)gestureRecognizersForFullScreenDisplay;
-(void)dealloc;
-(void)setDelegate:(id<QLPreviewItemInteractionDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<QLPreviewItemInteractionDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(int)modalPresentationStyle;
-(void)viewDidAppear:(char)arg1 ;
-(int)index;
-(UIView *)accessoryView;
-(id)printPageRenderer;
-(void)setIndex:(int)arg1 ;
-(CGRect)contentFrame;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setLoading:(char)arg1 ;
-(void)setClientContext:(SCD_Struct_QL7)arg1 ;
-(SCD_Struct_QL7)clientContext;
-(void)cancelLoad;
-(char)loaded;
-(char)loading;
@end

