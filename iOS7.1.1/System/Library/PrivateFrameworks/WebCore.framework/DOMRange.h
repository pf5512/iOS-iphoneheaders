/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>
#import <UIKit/UIWebSelectionBlock.h>

@class DOMNode, NSString;

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) DOMNode * startContainer; 
@property (readonly) int startOffset; 
@property (readonly) DOMNode * endContainer; 
@property (readonly) int endOffset; 
@property (readonly) bool collapsed; 
@property (readonly) DOMNode * commonAncestorContainer; 
@property (readonly) NSString * text; 
+(id)rangeForFirstPosition:(id)arg1 second:(id)arg2 ;
-(id)mf_attachmentURLs;
-(void)mf_hoistRange;
-(id)mf_firstNode;
-(id)mf_lastNode;
-(void)mf_getBlockBoundaryParent:(id*)arg1 nextSibling:(id*)arg2 atStart:(bool)arg3 ;
-(id)webFrame;
-(CGRect)boundingRect;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)asDomNode;
-(bool)selectable;
-(id)parentBlock;
-(bool)canShrinkDirectlyToTextOnly;
-(id)enclosingDocument;
-(id)asDomRange;
-(id)rangeOfContents;
-(bool)isSameBlock:(id)arg1 ;
-(bool)containsBlock:(id)arg1 ;
-(bool)strictlyContainsBlock:(id)arg1 ;
-(id)largerParent;
-(bool)rendersAsBlock;
-(void)unionWithRange:(id)arg1 ;
-(bool)containsRange:(id)arg1 ;
-(id)startPosition;
-(id)endPosition;
-(id)enclosingWordRange;
-(id)webArchive;
-(id)markupString;
-(id)firstNode;
-(void)move:(unsigned)arg1 inDirection:(int)arg2 ;
-(void)extend:(unsigned)arg1 inDirection:(int)arg2 ;
-(id)description;
-(id)_text;
-(CGRect)boundingBox;
-(id)textRects;
-(id)lineBoxRects;
-(CGImageRef)renderedImageForcingBlackText:(bool)arg1 ;
-(void)dealloc;
-(id)text;
-(int)endOffset;
-(int)startOffset;
-(void)detach;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(id)startContainer;
-(void)selectNodeContents:(id)arg1 ;
-(bool)collapsed;
-(void)insertNode:(id)arg1 ;
-(void)setStartAfter:(id)arg1 ;
-(void)setEndAfter:(id)arg1 ;
-(id)cloneContents;
-(id)cloneRange;
-(void)selectNode:(id)arg1 ;
-(id)endContainer;
-(short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2 ;
-(id)commonAncestorContainer;
-(void)finalize;
-(void)setStart:(id)arg1 :(int)arg2 ;
-(void)setEnd:(id)arg1 :(int)arg2 ;
-(void)setStartBefore:(id)arg1 ;
-(void)setEndBefore:(id)arg1 ;
-(void)collapse:(bool)arg1 ;
-(short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2 ;
-(void)deleteContents;
-(id)extractContents;
-(void)surroundContents:(id)arg1 ;
-(id)toString;
-(id)createContextualFragment:(id)arg1 ;
-(bool)intersectsNode:(id)arg1 ;
-(short)compareNode:(id)arg1 ;
-(short)comparePoint:(id)arg1 offset:(int)arg2 ;
-(bool)isPointInRange:(id)arg1 offset:(int)arg2 ;
-(void)expand:(id)arg1 ;
@end

