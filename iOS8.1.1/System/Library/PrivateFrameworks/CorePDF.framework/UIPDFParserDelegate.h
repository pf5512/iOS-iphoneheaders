/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/NSXMLParserDelegate.h>

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {

	CGPoint _p[4];
	CGPathRef _path;
	BOOL _parserError;

}

@property (readonly) CGPathRef path; 
@property (readonly) BOOL parserError;                              //@synthesize parserError=_parserError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(CGPathRef)path;
-(BOOL)parserError;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
@end

