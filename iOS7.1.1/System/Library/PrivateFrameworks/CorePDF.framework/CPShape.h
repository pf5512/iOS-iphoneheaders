/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <CorePDF/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	unsigned pdfObjectID;
	CGPathRef path;
	bool isUprightRectangle;
	int windingRule;
	double lineWidth;
	double miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObject* fillObject;
	CGPDFObject* strokeObject;
	CGAffineTransform paintTransform;
	bool boundsComputed;
	bool renderedBoundsComputed;

}
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(id)string;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(bool)isVisible;
-(CGColorRef)fillColor;
-(CGColorRef)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(id)attributes;
-(void)addShape:(id)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)dispose;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(bool)isUprightRectangle;
-(bool)hasSamePathAs:(id)arg1 ;
-(bool)isStrokeFor:(id)arg1 ;
-(CGPDFObject*)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObject*)strokeObject;
-(bool)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObject*)arg1 ;
-(void)setStrokeObject:(CGPDFObject*)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
-(bool)hasFill;
-(bool)hasStroke;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(int)lineJoin;
-(void)finalize;
-(int)lineCap;
@end

