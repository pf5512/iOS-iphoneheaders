/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartTitleRenderer : TSCHRenderer {

	CGRect mStartingEditingFrame;

}
-(BOOL)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg1 ;
-(CGRect)frameForEditingTextForSelectionPath:(id)arg1 ;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)p_drawTitle:(CGContextRef)arg1 rangePtr:(NSRange*)arg2 ;
-(void)useEditedString:(id)arg1 ;
-(double)frameHeightChangeForPath:(id)arg1 ;
-(CGRect)p_rawFrameForEditingTextForSelectionPath:(id)arg1 ;
@end
