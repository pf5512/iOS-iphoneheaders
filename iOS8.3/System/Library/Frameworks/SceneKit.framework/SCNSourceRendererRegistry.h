/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:09:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(void)removeSourceRenderersForCGLContextObj:(void*)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
-(id)sourceRendererForCGLContextObj:(void*)arg1 source:(id)arg2 ;
-(void)rendererDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

