/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic,readonly) int showSettings; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,readonly) unsigned transition; 
@property (nonatomic,readonly) double transitionInterval; 
-(NSArray *)images;
-(unsigned)transition;
-(int)showSettings;
-(double)transitionInterval;
@end

