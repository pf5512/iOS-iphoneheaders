/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDPath : NSObject {

	char* mPathString;

}
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(char*)pathStr;
-(CGPathRef)createBezierPath;
-(BOOL)hasVerticalFlip;
-(BOOL)hasHorizontalFlip;
-(BOOL)isRect;
-(void)dealloc;
-(BOOL)isRectangular;
@end

