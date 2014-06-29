/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrintFormatter.h>

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

	UIWebDocumentView* _webDocumentView;
	UIWebPaginationInfo* _paginationInfo;
	NSString* _markupText;

}

@property (nonatomic,copy) NSString * markupText;              //@synthesize markupText=_markupText - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)_recalcPageCount;
-(void)removeFromPrintPageRenderer;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(void)setMarkupText:(id)arg1 ;
-(id)initWithMarkupText:(id)arg1 ;
-(id)markupText;
@end
