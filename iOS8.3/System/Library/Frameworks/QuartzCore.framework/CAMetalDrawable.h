/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMetalDrawable.h>
@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(CAMetalLayer *)layer;
-(id<MTLTexture>)texture;

@end


@class CAMetalLayer, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable> {

	CAMetalLayer* _layer;
	CAMetalDrawablePrivate* _priv;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
-(void)presentAtTime:(double)arg1 ;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
-(CAMetalDrawablePrivate*)priv;
-(void)dealloc;
-(CAMetalLayer *)layer;
-(void)present;
-(id<MTLTexture>)texture;
@end

