/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFObject.h>

@class TSUColor;

@interface MFPen : NSObject <MFObject> {

	int m_penStyle;
	int m_penWidth;
	TSUColor* m_colour;
	double* m_userStyleArray;

}
+(id)pen;
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(void)dealloc;
-(id)init;
-(int)selectInto:(id)arg1 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(id)getColor;
-(int)getWidth;
-(int)getStyle;
@end

