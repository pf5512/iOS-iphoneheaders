/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/KNInspectableAnimation.h>

@class NSArray, TSDDrawableInfo, NSString, KNBuildAttributes, KNAbstractSlide, KNAnimationInfo, KNAnimationPluginMenu, KNBuildChunk, TSUColor, TSDEditableBezierPathSource, NSSet;

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation> {

	NSArray* mCachedChunks;
	NSRange mCachedActiveChunkRange;
	BOOL mCachedActiveChunkRangeIsValid;
	TSDDrawableInfo* mDrawable;
	NSString* mDelivery;
	KNBuildAttributes* mAttributes;
	KNAbstractSlide* mSlide;

}

@property (assign,nonatomic) KNAbstractSlide * slide; 
@property (nonatomic,retain) TSDDrawableInfo * drawable; 
@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,copy) KNBuildAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned long long directionType; 
@property (nonatomic,readonly) NSString * localizedEffect; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) unsigned long long firstChunkIndexOnSlide; 
@property (nonatomic,readonly) unsigned long long lastChunkIndexOnSlide; 
@property (nonatomic,readonly) NSArray * chunks; 
@property (nonatomic,readonly) unsigned long long chunkCount; 
@property (nonatomic,readonly) KNBuildChunk * firstChunk; 
@property (nonatomic,readonly) NSRange activeChunkRange; 
@property (nonatomic,readonly) unsigned long long startOffset; 
@property (nonatomic,readonly) unsigned long long endOffset; 
@property (nonatomic,readonly) unsigned long long firstActiveChunkIndexInBuild; 
@property (nonatomic,readonly) unsigned long long lastActiveChunkIndexInBuild; 
@property (nonatomic,readonly) BOOL hasInactiveChunks; 
@property (nonatomic,copy) NSString * delivery; 
@property (nonatomic,readonly) BOOL downgradesDelivery; 
@property (nonatomic,readonly) NSString * deliveryWithoutDowngrading; 
@property (nonatomic,readonly) unsigned long long deliveryStyle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) unsigned long long indexOrderedByFirstChunk; 
@property (nonatomic,readonly) BOOL isFirst; 
@property (nonatomic,readonly) BOOL hasComplement; 
@property (nonatomic,readonly) BOOL isActionBuild; 
@property (nonatomic,readonly) BOOL isActionMotionBuild; 
@property (nonatomic,readonly) BOOL isEmphasisBuild; 
@property (nonatomic,readonly) BOOL supportsDirection; 
@property (nonatomic,readonly) BOOL supportsDuration; 
@property (nonatomic,readonly) BOOL supportsBounce; 
@property (nonatomic,readonly) BOOL supportsDelivery; 
@property (nonatomic,readonly) BOOL supportsCustomTextDelivery; 
@property (nonatomic,readonly) int animationType; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) double durationDefaultForInitialChunk; 
@property (nonatomic,readonly) unsigned long long actionAcceleration; 
@property (nonatomic,readonly) TSDEditableBezierPathSource * actionMotionPathSource; 
@property (nonatomic,readonly) double actionScale; 
@property (nonatomic,readonly) double actionRotationAngle; 
@property (nonatomic,readonly) unsigned long long actionRotationDirection; 
@property (nonatomic,readonly) double actionOpacity; 
@property (nonatomic,readonly) long long customTextDelivery; 
@property (nonatomic,readonly) unsigned long long customDeliveryOption; 
@property (nonatomic,readonly) float custom3DChartRotation; 
@property (nonatomic,readonly) BOOL customBounce; 
@property (nonatomic,readonly) BOOL customMotionBlur; 
@property (nonatomic,readonly) unsigned long long customRepeatCount; 
@property (nonatomic,readonly) BOOL customDecay; 
@property (nonatomic,readonly) unsigned long long customScale; 
@property (nonatomic,readonly) unsigned long long customJiggleIntensity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
+(BOOL)needsObjectUUID;
+(id)p_drawableFromInfo:(id)arg1 ;
+(BOOL)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2 ;
+(id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2 ;
+(id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2 ;
+(id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3 ;
-(id)createNewChunks;
-(void)i_invalidateChunkCache;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(BuildArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const BuildArchive*)arg1 unarchiver:(id)arg2 ;
-(NSString *)animationFilter;
-(unsigned long long)deliveryStyle;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(unsigned long long)directionType;
-(void)setSlide:(KNAbstractSlide *)arg1 ;
-(NSArray *)chunks;
-(BOOL)isActionBuild;
-(BOOL)hasComplement;
-(double)durationDefaultForInitialChunk;
-(NSRange)activeChunkRange;
-(BOOL)isComplementOfBuild:(id)arg1 ;
-(BOOL)canEditAnimations;
-(NSSet *)inspectableAttributes;
-(unsigned long long)firstChunkIndexOnSlide;
-(unsigned long long)lastChunkIndexOnSlide;
-(id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4 ;
-(id)deliveriesLocalized:(BOOL)arg1 ;
-(void)setDelivery:(NSString *)arg1 ;
-(KNBuildChunk *)firstChunk;
-(BOOL)downgradesDelivery;
-(NSRange)p_calculateActiveChunkRange;
-(unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1 ;
-(id)p_chunkAtIndex:(unsigned long long)arg1 ;
-(id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned long long)arg2 ;
-(BOOL)hasComplementInBuilds:(id)arg1 ;
-(BOOL)supportsDirection;
-(BOOL)supportsDelivery;
-(BOOL)supportsDuration;
-(BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1 ;
-(long long)customTextDelivery;
-(KNAnimationPluginMenu *)directionMenu;
-(NSString *)localizedEffect;
-(NSString *)deliveryWithoutDowngrading;
-(unsigned long long)firstActiveChunkIndexInBuild;
-(unsigned long long)lastActiveChunkIndexInBuild;
-(BOOL)hasInactiveChunks;
-(unsigned long long)indexOrderedByFirstChunk;
-(BOOL)isFirst;
-(BOOL)isActionMotionBuild;
-(BOOL)isEmphasisBuild;
-(BOOL)supportsBounce;
-(BOOL)supportsCustomTextDelivery;
-(unsigned long long)actionAcceleration;
-(TSDEditableBezierPathSource *)actionMotionPathSource;
-(double)actionScale;
-(double)actionRotationAngle;
-(unsigned long long)actionRotationDirection;
-(double)actionOpacity;
-(float)custom3DChartRotation;
-(unsigned long long)customDeliveryOption;
-(BOOL)customBounce;
-(BOOL)customMotionBlur;
-(unsigned long long)customRepeatCount;
-(BOOL)customDecay;
-(unsigned long long)customScale;
-(unsigned long long)customJiggleIntensity;
-(NSString *)delivery;
-(void)dealloc;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)direction;
-(unsigned long long)endOffset;
-(unsigned long long)startOffset;
-(TSUColor *)color;
-(unsigned long long)index;
-(NSString *)effect;
-(KNBuildAttributes *)attributes;
-(void)setAttributes:(KNBuildAttributes *)arg1 ;
-(int)animationType;
-(unsigned long long)chunkCount;
-(TSDDrawableInfo *)drawable;
-(void)setDrawable:(TSDDrawableInfo *)arg1 ;
-(KNAbstractSlide *)slide;
-(KNAnimationInfo *)animationInfo;
@end

