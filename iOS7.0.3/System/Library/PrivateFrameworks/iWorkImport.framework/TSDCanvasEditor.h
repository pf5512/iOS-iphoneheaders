/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasEditor.h>

@protocol TSDCanvasEditor <TSDEditor,TSDSubcommandProvider,TSDTextInput>
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasEditorHelper * canvasEditorHelper; 
@property (nonatomic,readonly) TSKSelection<TSDCanvasSelection> * canvasSelection; 
@property (nonatomic,readonly) TSPObject * modelForSelection; 
@property (nonatomic,readonly) <TSDArrangeInspectorDelegate> * arrangeInspectorDelegate; 
@property (nonatomic,readonly) TSKPasteboardController * pasteboardController; 
@property (nonatomic,retain) TSKSelection * selection; 
@optional
-(id)exteriorTextWrapForInfos:(id)arg1;
-(void)setExteriorTextWrap:(id)arg1 forInfos:(id)arg2;
-(void)setExteriorTextWrapMargin:(float)arg1 forInfos:(id)arg2;

@required
+(id)canvasSelectionWithInfos:(id)arg1;
+(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
-(void)lock:(id)arg1;
-(id)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
-(void)setSelection:(id)arg1 withFlags:(unsigned)arg2;
-(id)canvasSelection;
-(void)repWasCreated:(id)arg1;
-(void)canvasInfosDidChange;
-(id)canvasSelectionWithInfos:(id)arg1;
-(void)setSelectionToRep:(id)arg1;
-(void)setSelectionToInfo:(id)arg1;
-(id)editorToPopToOnEndEditing;
-(BOOL)isRepSelectable:(id)arg1;
-(BOOL)isSelectedInfo:(id)arg1;
-(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
-(id)canvasEditorHelper;
-(void)unlock:(id)arg1;
-(void)maskWithShape:(id)arg1;
-(void)mask:(id)arg1;
-(void)deleteGuide:(id)arg1;
-(void)clearGuides:(id)arg1;
-(void)copyUserDefinedGuides:(id)arg1;
-(void)pasteUserDefinedGuides:(id)arg1;
-(id)pasteboardController;
-(BOOL)canvasEditorCanDeleteWithSender:(id)arg1;
-(BOOL)canvasEditorCanCopyWithSender:(id)arg1;
-(BOOL)canvasEditorCanPasteWithSender:(id)arg1;
-(unsigned)countOfDrawables;
-(BOOL)canGroupDrawable:(id)arg1;
-(void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
-(id)commandForDeletingDrawables:(id)arg1;
-(void)pasteValues:(id)arg1;
-(void)setSelectionToInfos:(id)arg1;
-(void)unmask:(id)arg1;
-(void)prepareGeometryForInsertingDrawables:(id)arg1 withInsertionContext:(id)arg2;
-(CGSize*)sizeForInsertingMediaOfSize:(CGSize)arg1;
-(void)insertDrawables:(id)arg1 withInsertionContext:(id)arg2;
-(id)commandForDelete;
-(id)selectionBehaviorForDelete;
-(void)pasteWithPasteboard:(id)arg1 selection:(id)arg2 forceMatchStyle:(BOOL)arg3 sender:(id)arg4 bakeFormulas:(BOOL)arg5;
-(id)pasteNativeInfosFromPasteboard:(id)arg1 allowImageReplacement:(BOOL)arg2;
-(void)connectWithConnectionLine:(id)arg1;
-(BOOL)shouldUseAlternateSelectionHighlight;
-(BOOL)canvasEditorCanCutWithSender:(id)arg1;
-(BOOL)canvasEditorCanPasteAsPlainTextWithSender:(id)arg1;
-(BOOL)canvasEditorCanPasteValuesWithSender:(id)arg1;
-(BOOL)canvasEditorCanDuplicateWithSender:(id)arg1;
-(BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1;
-(BOOL)canvasEditorCanSelectAllWithSender:(id)arg1;
-(BOOL)canvasEditorCanGroupWithSender:(id)arg1;
-(BOOL)canvasEditorCanUngroupWithSender:(id)arg1;
-(BOOL)shouldPushNewEditorForNewSelection;
-(id)guidePasteboard;
-(id)modelForSelection;
-(id)arrangeInspectorDelegate;
-(id)selection;
-(void)setSelection:(id)arg1;
-(void)selectAll:(id)arg1;
-(void)cut:(id)arg1;
-(void)copy:(id)arg1;
-(void)paste:(id)arg1;
-(void)select:(id)arg1;
-(void)delete:(id)arg1;
-(id)drawables;
-(void)teardown;
-(void)pasteAsPlainText:(id)arg1;
@end


@protocol TSDArrangeInspectorDelegate, TSDInlineFloatingWrapInspectorDelegate;
@class TSDInteractiveCanvasController, TSDCanvasEditorHelper, TSPObject, TSKPasteboardController, TSKSelection, TSDCanvasSelection, NSObject, UIView, NSSet;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor> {

	TSDInteractiveCanvasController* mInteractiveCanvasController;
	TSDCanvasEditorHelper* mCanvasEditorHelper;
	TSDCanvasSelection* mSelection;
	NSObject<TSDArrangeInspectorDelegate>* mZOrderArranger;
	NSObject<TSDInlineFloatingWrapInspectorDelegate>* mInlineFloatingEditor;
	BOOL mPreventImageDataReplace;
	UIView* mInputView;

}

@property (nonatomic,readonly) NSSet * infosForSelectAllInRoot; 
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@property (nonatomic,readonly) TSKSelection<TSDTextSelection> * textInputSelection; 
@property (nonatomic,readonly) NSRange markedRange; 
@property (readonly) UIView * inputView; 
@property (readonly) UIView * inputAccessoryView; 
@property (readonly) BOOL wantsRawArrowKeyEvents; 
@property (nonatomic,retain) TSKSelection<TSDTextSelection> * selectionForArrowKeys; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasEditorHelper * canvasEditorHelper; 
@property (nonatomic,readonly) TSKSelection<TSDCanvasSelection> * canvasSelection; 
@property (nonatomic,readonly) TSPObject * modelForSelection; 
@property (nonatomic,readonly) <TSDArrangeInspectorDelegate> * arrangeInspectorDelegate; 
@property (nonatomic,readonly) TSKPasteboardController * pasteboardController; 
+(id)canvasSelectionWithInfos:(id)arg1 ;
+(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
+(Class)canvasEditorHelperClass;
+(BOOL)physicalKeyboardIsSender:(id)arg1 ;
+(/*^block*/ id)spatialInfoComparator;
-(void)lock:(id)arg1 ;
-(id)selectionWithRange:(NSRange)arg1 ;
-(id)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)addOrShowComment:(id)arg1 ;
-(void)setSelection:(id)arg1 withFlags:(unsigned)arg2 ;
-(id)canvasSelection;
-(void)repWasCreated:(id)arg1 ;
-(void)canvasInfosDidChange;
-(id)canvasSelectionWithInfos:(id)arg1 ;
-(void)setSelectionToRep:(id)arg1 ;
-(void)setSelectionToInfo:(id)arg1 ;
-(id)editorToPopToOnEndEditing;
-(BOOL)isRepSelectable:(id)arg1 ;
-(BOOL)isSelectedInfo:(id)arg1 ;
-(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(id)canvasEditorHelper;
-(void)unlock:(id)arg1 ;
-(void)duplicate:(id)arg1 ;
-(void)maskWithShape:(id)arg1 ;
-(void)mask:(id)arg1 ;
-(void)maskWithShapeType:(id)arg1 ;
-(void)reduceDocumentFileSize:(id)arg1 ;
-(void)reduceFileSizeForSelectedImages:(id)arg1 ;
-(void)bringToFront:(id)arg1 ;
-(void)bringForward:(id)arg1 ;
-(void)sendBackward:(id)arg1 ;
-(void)sendToBack:(id)arg1 ;
-(void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2 ;
-(BOOL)canDeleteComment;
-(void)deleteGuide:(id)arg1 ;
-(void)clearGuides:(id)arg1 ;
-(void)copyUserDefinedGuides:(id)arg1 ;
-(void)pasteUserDefinedGuides:(id)arg1 ;
-(id)p_filterNonDisplayedInfos:(id)arg1 ;
-(id)pasteboardController;
-(BOOL)canvasEditorCanDeleteWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanCopyWithSender:(id)arg1 ;
-(BOOL)canCopyStyle;
-(BOOL)canvasEditorCanPasteWithSender:(id)arg1 ;
-(unsigned)countOfDrawables;
-(BOOL)canSelectAllWithSender:(id)arg1 ;
-(BOOL)canGroupDrawable:(id)arg1 ;
-(BOOL)canGroupWithSender:(id)arg1 ;
-(BOOL)canUngroupWithSender:(id)arg1 ;
-(BOOL)canAddOrShowComment;
-(void)copyToPasteboard:(id)arg1 withSender:(id)arg2 ;
-(id)commandForInsertingDrawable:(id)arg1 withInsertionContext:(id)arg2 ;
-(id)commandForDeletingDrawables:(id)arg1 ;
-(void)pasteValues:(id)arg1 ;
-(id)infosForSelectAllInRoot;
-(void)setSelectionToInfos:(id)arg1 ;
-(void)ungroup:(id)arg1 ;
-(id)p_spatiallySortedDrawables;
-(id)p_nextInfoInTabSequence:(int)arg1 ;
-(void)unmask:(id)arg1 ;
-(void)prepareGeometryForInsertingDrawables:(id)arg1 withInsertionContext:(id)arg2 ;
-(CGSize)sizeForInsertingMediaOfSize:(CGSize)arg1 ;
-(void)insertDrawables:(id)arg1 withInsertionContext:(id)arg2 ;
-(id)commandForDelete;
-(id)selectionBehaviorForDelete;
-(void)pasteWithPasteboard:(id)arg1 selection:(id)arg2 forceMatchStyle:(BOOL)arg3 sender:(id)arg4 bakeFormulas:(BOOL)arg5 ;
-(id)pasteNativeInfosFromPasteboard:(id)arg1 allowImageReplacement:(BOOL)arg2 ;
-(void)connectWithConnectionLine:(id)arg1 ;
-(BOOL)shouldUseAlternateSelectionHighlight;
-(BOOL)canvasEditorCanCutWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanPasteAsPlainTextWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanPasteValuesWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanDuplicateWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanSelectAllWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanGroupWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanUngroupWithSender:(id)arg1 ;
-(BOOL)shouldPushNewEditorForNewSelection;
-(id)guidePasteboard;
-(id)modelForSelection;
-(id)arrangeInspectorDelegate;
-(id)commandForInsertingDrawables:(id)arg1 below:(id)arg2 ;
-(NSRange)editRange;
-(BOOL)wantsKeyboard;
-(BOOL)textIsVerticalAtCharIndex:(unsigned)arg1 ;
-(void)deleteForward;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(id)textColorAtCharIndex:(unsigned)arg1 ;
-(id)textFontAtCharIndex:(unsigned)arg1 ;
-(void)setSelectionWithRange:(NSRange)arg1 endOfLine:(BOOL)arg2 ;
-(void)clearMarkedRange;
-(BOOL)isCharIndex:(unsigned)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(int)arg3 inDirection:(int)arg4 ;
-(unsigned)charIndexByMovingPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3 preferPosition:(float*)arg4 ;
-(BOOL)isCharIndex:(unsigned)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(NSRange)rangeOfWordEnclosingCharIndex:(unsigned)arg1 backward:(BOOL)arg2 ;
-(id)textInputSelection;
-(BOOL)wantsRawArrowKeyEvents;
-(void)maskWithSelection:(id)arg1 ;
-(void)alignDrawablesByLeftEdge:(id)arg1 ;
-(void)alignDrawablesByRightEdge:(id)arg1 ;
-(void)alignDrawablesByVerticalCenter:(id)arg1 ;
-(void)alignDrawablesByTopEdge:(id)arg1 ;
-(void)alignDrawablesByBottomEdge:(id)arg1 ;
-(void)alignDrawablesByHorizontalCenter:(id)arg1 ;
-(void)distributeDrawablesHorizontally:(id)arg1 ;
-(void)distributeDrawablesVertically:(id)arg1 ;
-(void)distributeDrawablesEvenly:(id)arg1 ;
-(Class)editorClassForSelection;
-(BOOL)canPasteWithSender:(id)arg1 ;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)copyObject:(id)arg1 ;
-(void)cutObject:(id)arg1 ;
-(void)pasteObject:(id)arg1 ;
-(void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)group:(id)arg1 ;
-(void)dealloc;
-(id)keyCommands;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(void)endEditing;
-(id)textInRange:(NSRange)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(CGRect)firstRectForRange:(NSRange)arg1 ;
-(id)selectionRectsForRange:(NSRange)arg1 ;
-(NSRange)markedRange;
-(int)returnKeyType;
-(id)inputView;
-(id)inputAccessoryView;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)deleteBackward:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(id)drawables;
-(void)teardown;
-(id)documentRoot;
-(void)deleteObject:(id)arg1 ;
-(void)deleteComment:(id)arg1 ;
-(unsigned)textLength;
-(void)deleteForward:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)deleteToBeginningOfLine:(id)arg1 ;
-(void)deleteToEndOfLine:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)deleteWordForward:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
@end

