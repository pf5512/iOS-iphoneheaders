/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebPDFViewHandlerDelegate
@optional
-(CGRect*)frameForPDFViewWithHandler:(id)arg1 proposedFrame:(CGRect)arg2;
-(void)pdfViewHandler:(id)arg1 willClickLink:(id)arg2;
-(void)pdfViewHandler:(id)arg1 linkClicked:(id)arg2;
-(id)pdfViewHandler:(id)arg1 actionsForURL:(id)arg2 suggestedActions:(id)arg3;
-(id)hostViewForLinkSheet:(id)arg1;
-(id)alertViewForUIWebPDFViewHandler:(id)arg1;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
-(id)passwordForPDFViewHandler:(id)arg1;
-(CGPoint*)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2;
-(void)highlightSearchResultBounds:(CGRect)arg1 resultRects:(id)arg2 contentViews:(id)arg3 forPDFViewHandler:(id)arg4;
-(float)minimumVerticalContentOffsetForPDFViewHandler:(id)arg1;
@end
