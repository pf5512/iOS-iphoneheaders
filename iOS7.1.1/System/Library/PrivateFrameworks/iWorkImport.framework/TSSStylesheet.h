/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKTransformableObject.h>

@class TSUMutableRetainedPointerSet, NSMutableDictionary, TSURetainedPointerKeyDictionary, TSWPParagraphStyle, NSSet;

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {

	TSSStylesheet* mParent;
	TSSStylesheet* mChild;
	TSUMutableRetainedPointerSet* mStyles;
	NSMutableDictionary* mIdentifierToStyleMap;
	TSURetainedPointerKeyDictionary* mParentToChildrenStyleMap;
	bool mIsLocked;
	bool mCanCullStyles;

}

@property (nonatomic,readonly) TSWPParagraphStyle * defaultPresenterNotesParagraphStyle; 
@property (nonatomic,readonly) TSSStylesheet * parent; 
@property (nonatomic,readonly) TSSStylesheet * child; 
@property (assign,nonatomic) bool isLocked; 
@property (assign,nonatomic) bool canCullStyles; 
@property (nonatomic,readonly) NSSet * styles; 
+(id)presenterNotesParagraphStyleIdentifier;
+(id)p_presenterNotesListStyleIdentifierForListLabelType:(int)arg1 ;
-(void)addDefaultPresenterNotesStylesIfAbsent;
-(void)upgradeDefaultPresenterNotesStyles;
-(id)defaultPresenterNotesParagraphStyle;
-(void)p_upgradeDefaultPresenterNotesStylesResetExisting:(bool)arg1 ;
-(id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(int)arg2 ;
-(id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(int)arg1 ;
-(id)p_newDefaultPresenterNotesParagraphStyleWithContext:(id)arg1 ;
-(id)p_defaultPresenterNotesParagraphStylePropertyMap;
-(id)_defaultCharacterStyleWasCreated:(bool*)arg1 ;
-(id)_hyperlinkStyleWasCreated:(bool*)arg1 ;
-(id)_defaultParagraphStyleWasCreated:(bool*)arg1 ;
-(id)_defaultListStyleWasCreated:(bool*)arg1 ;
-(id)_defaultColumnStyleWasCreated:(bool*)arg1 ;
-(id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(bool*)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)hyperlinkStyle;
-(id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3 ;
-(id)defaultColumnStyle;
-(id)p_variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3 ;
-(id)headerAndFooterStyle;
-(id)defaultParagraphStyle;
-(id)defaultCharacterStyle;
-(id)defaultListStyle;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(bool)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)saveToArchiver:(id)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)p_allFilteredIdentifiersInArchive:(const StylesheetArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveStyles:(id)arg1 toArchiver:(id)arg2 ;
-(id)addDuplicateOfStyle:(id)arg1 withIdentifier:(id)arg2 ;
-(id)styleWithIdentifier:(id)arg1 ;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(id)cascadedStyleWithIdentifier:(id)arg1 ;
-(id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 ;
-(id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2 ;
-(void)removeStyle:(id)arg1 ;
-(id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2 ;
-(void)setIsLocked:(bool)arg1 ;
-(id)stylesOfClass:(Class)arg1 ;
-(void)addStyle:(id)arg1 withIdentifier:(id)arg2 ;
-(void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 ;
-(void)setIdentifier:(id)arg1 ofStyle:(id)arg2 ;
-(id)stylesPassingTest:(/*^block*/ id)arg1 ;
-(id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2 ;
-(void)enumerateStylesUsingBlock:(/*^block*/ id)arg1 ;
-(id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(id)rootAncestor;
-(unsigned long long)descendantCount;
-(id)child;
-(id)childrenOfStyle:(id)arg1 ;
-(bool)isDescendentOf:(id)arg1 ;
-(bool)isAncestorOf:(id)arg1 ;
-(bool)isChildOf:(id)arg1 ;
-(bool)isParentOf:(id)arg1 ;
-(id)initWithContext:(id)arg1 canCullStyles:(bool)arg2 ;
-(void)setParent:(id)arg1 withParentStyleMap:(CFDictionaryRef)arg2 ;
-(void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3 ;
-(void)p_removeStyle:(id)arg1 ;
-(id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2 ;
-(void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2 ;
-(void)p_setParent:(id)arg1 ofStyle:(id)arg2 ;
-(id)firstStyleWithName:(id)arg1 ;
-(id)cascadedFirstStyleWithName:(id)arg1 ;
-(id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4 ;
-(void)p_addStyleToParentChildren:(id)arg1 ;
-(bool)containsStyle:(id)arg1 ;
-(void)p_removeStyleFromParentChildren:(id)arg1 ;
-(bool)canCullStyles;
-(void)setCanCullStyles:(bool)arg1 ;
-(void)addStyle:(id)arg1 withParent:(id)arg2 ;
-(void)setParent:(id)arg1 ofStyle:(id)arg2 ;
-(id)stylesWithName:(id)arg1 ;
-(id)stylesWithName:(id)arg1 ofClass:(Class)arg2 ;
-(id)identifiedStyles;
-(id)identifiedStylesOfClass:(Class)arg1 ;
-(void)enumerateCascadedStylesUsingBlock:(/*^block*/ id)arg1 ;
-(id)namedStylesOfClass:(Class)arg1 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3 ;
-(id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4 ;
-(void)unlockStylesheetForDurationOfBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(bool)isLocked;
-(id)initWithContext:(id)arg1 ;
-(id)styles;
-(void)addStyle:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

