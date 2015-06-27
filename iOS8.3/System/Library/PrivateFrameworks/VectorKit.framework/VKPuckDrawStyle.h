/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKPuckDrawStyle : VKRenderStyle

@property (nonatomic,readonly) float circleBrightness; 
@property (nonatomic,readonly) float arrowBrightness; 
@property (nonatomic,readonly) Matrix<float arrowColor; 
@property (nonatomic,readonly) Matrix<float arrowColorStale; 
@property (nonatomic,readonly) float size; 
@property (nonatomic,readonly) float offset; 
@property (nonatomic,readonly) char hasCircleBrightness; 
@property (nonatomic,readonly) char hasArrowBrightness; 
@property (nonatomic,readonly) char hasArrowColor; 
@property (nonatomic,readonly) char hasArrowColorStale; 
@property (nonatomic,readonly) char hasSize; 
@property (nonatomic,readonly) char hasOffset; 
+(int)renderStyleID;
-(float)size;
-(float)offset;
-(Matrix<float)arrowColor;
-(char)hasArrowColor;
-(char)hasCircleBrightness;
-(float)circleBrightness;
-(char)hasArrowColorStale;
-(Matrix<float)arrowColorStale;
-(char)hasArrowBrightness;
-(float)arrowBrightness;
-(char)hasSize;
-(char)hasOffset;
@end
