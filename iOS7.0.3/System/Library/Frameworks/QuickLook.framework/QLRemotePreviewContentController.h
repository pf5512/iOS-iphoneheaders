/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <QuickLook/QLPreviewContentControllerProtocol.h>
#import <QuickLook/QLPrintPageRendererDataSource.h>

@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;
@class QLPreviewController, NSMapTable, QLPrintPageRenderer, _UIRemoteView;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {

	QLPreviewController* _previewController;
	<QLPreviewContentDataSource>* _dataSource;
	<QLPreviewContentDelegate>* _delegate;
	int _currentPreviewItemIndex;
	int _numberOfPreviewItems;
	NSMapTable* _previewItemsForProxys;
	NSMapTable* _proxysForPreviewItems;
	QLPrintPageRenderer* _printPageRenderer;
	_UIRemoteView* _fullScreenView;
	BOOL _statusBarWasHidden;
	BOOL _isHostingFullScreenWindow;

}

@property (assign) QLPreviewController * previewController;                //@synthesize previewController=_previewController - In the implementation block
@property (assign) <QLPreviewContentDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) <QLPreviewContentDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) int previewMode; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(/*^block*/ id)arg2 ;
-(void)checkCurrentPreviewItem;
-(int)numberOfPreviewItems;
-(void)setPreviewController:(id)arg1 ;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)configureWithParameters:(id)arg1 ;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(int)numberOfPageInPrintPageRenderer:(id)arg1 withSize:(CGSize)arg2 ;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2 ;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(int)arg2 withSize:(CGSize)arg3 printingDone:(BOOL*)arg4 ;
-(void)_previewContentControllerGetPreviewItemAtIndex:(int)arg1 sourceUUID:(int)arg2 handler:(/*^block*/ id)arg3 ;
-(void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1 ;
-(void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1 ;
-(void)_contentWasTappedInPreviewContentController;
-(void)_overlayWasTappedInPreviewContentController;
-(void)_showContentsWasTappedInPreviewContentController;
-(void)_previewContentControllerWillMoveToItemAtIndex:(int)arg1 ;
-(void)_previewContentControllerDidMoveToItemAtIndex:(int)arg1 ;
-(void)_previewContentControllerReceivedTapOnURL:(id)arg1 ;
-(void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(int)arg2 withError:(id)arg3 ;
-(void)_setAVState:(id)arg1 forPreviewItem:(id)arg2 ;
-(void)_willEnterFullScreenWithContext:(id)arg1 ;
-(void)_didExitFullScreen;
-(void)_updateNavigationBarVerticalOffset;
-(void)setNumberOfPreviewItems:(int)arg1 ;
-(id)_proxyForPreviewItem:(id)arg1 ;
-(id)_previewItemFromProxy:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)previewController;
-(void)setBlockRemoteImages:(BOOL)arg1 ;
-(id)printPageRenderer;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(int)arg1 ;
-(void)refreshCurrentPreviewItem;
-(int)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
@end

