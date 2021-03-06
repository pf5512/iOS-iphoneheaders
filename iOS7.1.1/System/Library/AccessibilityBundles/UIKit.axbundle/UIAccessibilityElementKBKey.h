/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	bool _changesOnShiftDown;

}

@property (nonatomic,retain) UIKBTree * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) bool changesOnShiftDown;              //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
-(bool)_axIsDictationKey;
-(bool)allowsCaseChangeOnShift;
-(id)_accessibilityLabel;
-(bool)_accessibilityIsDeleteKey;
-(bool)_allowCachingAccessibilityLabel;
-(bool)isUnaffectedByShiftLock;
-(bool)changesOnShiftDown;
-(void)_applyCapitalLetterTransform;
-(void)setChangesOnShiftDown:(bool)arg1 ;
-(bool)isButtonType;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(bool)_accessibilityWasForcedToUseForeignKB;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)key;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(bool)accessibilityActivate;
-(void)setKey:(id)arg1 ;
-(bool)_accessibilitySupportsActivateAction;
-(id)_accessibilityKeyboardKeyEnteredString;
-(bool)_accessibilityKeyboardKeyAllowsTouchTyping;
-(bool)_accessibilityAllowsAlternativeCharacterActivation;
-(id)_accessibilityVariantKeys;
-(bool)_accessibilityHasVariantKeys;
@end

