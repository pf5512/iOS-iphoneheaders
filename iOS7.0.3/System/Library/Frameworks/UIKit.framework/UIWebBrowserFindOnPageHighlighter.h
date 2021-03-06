/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebFindOnPageHighlighter.h>

@protocol UIWebFindOnPageHighlighterDelegate;
@class NSString, NSMutableArray, NSArray, UIView, UIWebBrowserView, UIWebPDFViewHandler;

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {

	NSMutableArray* _highlightBubbleViews;
	NSArray* _pdfHighlightViews;
	UIView* _highlightHostView;
	UIWebBrowserView* _browserView;
	UIWebPDFViewHandler* _pdfHandler;
	BOOL _zoomToHighlightSelection;
	<UIWebFindOnPageHighlighterDelegate>* _delegate;
	NSString* _searchText;
	unsigned _numberOfMatches;
	unsigned _highlightedMatchIndex;

}

@property (nonatomic,readonly) NSString * searchText;                                      //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) <UIWebFindOnPageHighlighterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned numberOfMatches;                                   //@synthesize numberOfMatches=_numberOfMatches - In the implementation block
@property (nonatomic,readonly) unsigned highlightedMatchIndex;                             //@synthesize highlightedMatchIndex=_highlightedMatchIndex - In the implementation block
+(BOOL)expandedRectsWouldIntersect:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)searchText;
-(void)clearBrowserView;
-(id)initWithBrowserView:(id)arg1 ;
-(BOOL)updateHighlightBubbleWobble:(BOOL)arg1 ;
-(id)initWithPDFViewHandler:(id)arg1 ;
-(void)searchWasCancelled:(id)arg1 ;
-(void)search:(id)arg1 hasPartialResults:(id)arg2 ;
-(void)searchDidFinish:(id)arg1 ;
-(void)searchLimitHit:(id)arg1 ;
-(void)searchDidBegin:(id)arg1 ;
-(void)searchDidTimeOut:(id)arg1 ;
-(void)_commonInitialize;
-(void)_clearHighlightViews;
-(void)_addContentViewAtIndex:(unsigned)arg1 withRect:(CGRect)arg2 ;
-(void)_setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 wobble:(BOOL)arg4 ;
-(unsigned)findOnPageOptions;
-(BOOL)_updateHighlightedMatchIndex:(BOOL)arg1 ;
-(id)_currentPDFSearchResult;
-(void)_highlightFindOnPageMatchForPDF:(BOOL)arg1 withPDFHandler:(id)arg2 ;
-(BOOL)_highlightSelection;
-(void)_highlightFindOnPageMatch:(BOOL)arg1 ;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned)arg2 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4 ;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned)numberOfMatches;
-(unsigned)highlightedMatchIndex;
@end

