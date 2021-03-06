/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode {

	char _enabled;
	UIColor* _lightColor;
	UIColor* _ambientColor;
	UIColor* _shadowColor;
	float _falloff;
	unsigned _categoryBitMask;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIColor * lightColor;                       //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,retain) UIColor * ambientColor;                     //@synthesize ambientColor=_ambientColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                      //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) float falloff;                              //@synthesize falloff=_falloff - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                   //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
-(float)falloff;
-(void)setFalloff:(float)arg1 ;
-(char)isEqualToNode:(id)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(void)setLightCategoryBitMask:(unsigned)arg1 ;
-(void)setLightDecay:(float)arg1 ;
-(UIColor *)ambientColor;
-(UIColor *)lightColor;
-(float)lightDecay;
-(unsigned)lightCategoryBitMask;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
@end

