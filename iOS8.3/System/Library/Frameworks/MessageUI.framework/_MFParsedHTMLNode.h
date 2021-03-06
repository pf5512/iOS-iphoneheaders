/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:59:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyTreeNode.h>
#import <MessageUI/MFMessageBodyConsumableInnerTextNode.h>

@class NSMutableArray, NSString;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {

	NSMutableArray* _childNodes;
	_MFParsedHTMLNode* _parentNode;
	_MFParsedHTMLNode* _nextSibling;
	NSString* _htmlString;
	unsigned _startLocation;
	unsigned _endLocation;

}

@property (assign,nonatomic) _MFParsedHTMLNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic) _MFParsedHTMLNode * nextSibling;               //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,readonly) char hasChildNodes; 
@property (nonatomic,readonly) _MFParsedHTMLNode * firstChild; 
@property (nonatomic,readonly) _MFParsedHTMLNode * lastChild; 
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,retain) NSString * htmlString;                         //@synthesize htmlString=_htmlString - In the implementation block
@property (assign,nonatomic) unsigned startLocation;                        //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) unsigned endLocation;                          //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)startLocation;
-(NSString *)htmlString;
-(void)collectDescendanceIntoArray:(id)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(unsigned)endLocation;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)setEndLocation:(unsigned)arg1 ;
-(void)setParentNode:(_MFParsedHTMLNode *)arg1 ;
-(void)setNextSibling:(_MFParsedHTMLNode *)arg1 ;
-(void)addRecursiveDescriptionWithLevel:(unsigned)arg1 toString:(id)arg2 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)recursiveDescription;
-(_MFParsedHTMLNode *)lastChild;
-(NSString *)tagName;
-(_MFParsedHTMLNode *)firstChild;
-(void)setStartLocation:(unsigned)arg1 ;
-(_MFParsedHTMLNode *)parentNode;
-(_MFParsedHTMLNode *)nextSibling;
-(void)appendChild:(id)arg1 ;
-(char)hasChildNodes;
@end

