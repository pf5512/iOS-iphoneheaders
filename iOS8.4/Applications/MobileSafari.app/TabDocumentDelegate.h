/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TabDocumentDelegate
@required
-(char)tabDocumentShouldBlockPopUp:(id)arg1;
-(char)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(id)arg1;
-(void)removeStoreBannerFromTabDocument:(id)arg1 animated:(char)arg2;
-(void)setShowingStoreBanner:(id)arg1 isShowing:(char)arg2;
-(void)tabDocumentDidUpdateShowingContinuous:(id)arg1;
-(void)tabDocumentDidUpdatePersistentState:(id)arg1;
-(void)tabDocumentDidUpdateURL:(id)arg1;
-(void)tabDocumentDidStartLoading:(id)arg1;
-(void)tabDocumentWillStartLoadFromUserClick:(id)arg1;
-(char)tabDocumentCanClearRenderTreeSizeThresholdForReset:(id)arg1;
-(char)tabDocumentCanDownloadFile:(id)arg1;
-(char)tabDocumentCanRedirectToExternalApplication:(id)arg1;
-(void)tabDocumentDidCancelRedirectToExternalApplication:(id)arg1;
-(void)tabDocument:(id)arg1 didFinishLoadingWithError:(char)arg2;
-(void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)arg1;
-(void)tabDocumentDidUpdateTitle:(id)arg1;
-(void)tabDocumentDidUpdateBackForward:(id)arg1;
-(void)tabDocumentProgressDidStall:(id)arg1;
-(void)tabDocument:(id)arg1 progressChanged:(float)arg2;
-(void)tabDocumentStartedLoadingResource:(id)arg1;
-(void)tabDocumentFluidProgressRocketAnimationDidComplete:(id)arg1;
-(void)tabDocumentStoppedLoadingResource:(id)arg1;
-(void)tabDocument:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)tabDocument:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(char)tabDocumentShouldHandleCertificateError:(id)arg1;
-(int)interfaceOrientationForTabDocument:(id)arg1;
-(void)showAlertForTabDocument:(id)arg1;
-(void)hideAlertForTabDocument:(id)arg1;
-(void)tabDocument:(id)arg1 didDetectReaderAvailability:(char)arg2;
-(void)tabDocument:(id)arg1 didCreateNewTabDocument:(id)arg2;
-(id)blankTabTitleForTabDocument:(id)arg1;
-(void)composeEmailWithMailToURL:(id)arg1 forTabDocument:(id)arg2;
-(void)tabDocumentDidCompleteCheckForStoreBanner:(id)arg1;
-(void)setStoreBannerPinnedToTop:(char)arg1 forTabDocument:(id)arg2;
-(void)tabDocumentDidBeginNavigationGesture:(id)arg1;
-(void)tabDocumentWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)tabDocumentDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;

@end

