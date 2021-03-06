/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDColor : NSObject <GQDNameMappable> {

	double mRed;
	double mGreen;
	double mBlue;
	double mAlpha;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)readColorFromProcessor:(id)arg1 reader:(xmlTextReaderRef)arg2 ;
+(id)rgbColorFromReader:(xmlTextReaderRef)arg1 calibrated:(BOOL)arg2 ;
+(id)whiteColorFromReader:(xmlTextReaderRef)arg1 calibrated:(BOOL)arg2 ;
+(id)cmykColorFromReader:(xmlTextReaderRef)arg1 ;
+(const StateSpec*)stateForReading;
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)blackColor;
-(int)htmlRed;
-(int)htmlGreen;
-(int)htmlBlue;
-(id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)description;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)alphaComponent;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
@end

