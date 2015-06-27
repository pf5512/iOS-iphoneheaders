/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPFootnoteHeightMeasurer.h>

@class TPFootnoteContainerLayout, TSDLayoutController, TSULRUCache, NSString;

@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer> {

	TPFootnoteContainerLayout* _footnoteContainerLayout;
	TSDLayoutController* _layoutController;
	TSULRUCache* _footnoteLayoutCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllFootnoteReferenceStorages;
-(float)footnoteHeight;
-(void)removeFootnoteReferenceStorage:(id)arg1 ;
-(void)addFootnoteReferenceStorage:(id)arg1 ;
-(id)initWithFootnoteMarkProvider:(id)arg1 maxFootnoteWidth:(float)arg2 maxFootnoteHeight:(float)arg3 footnoteSpacing:(float)arg4 ;
-(void)setContainerWidth:(float)arg1 ;
-(void)setFootnoteSpacing:(int)arg1 ;
-(void)p_clearFootnoteLayoutCache;
-(void)dealloc;
@end
