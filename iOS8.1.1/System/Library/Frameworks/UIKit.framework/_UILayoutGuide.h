/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UILayoutSupport.h>

@class NSArray, NSString;

@interface _UILayoutGuide : UIView <UILayoutSupport> {

	BOOL _allowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;
	NSString* _archivedIdentifier;

}

@property (assign,setter=_setHorizontal:,getter=isHorizontal,nonatomic) BOOL _horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier;                                 //@synthesize archivedIdentifier=_archivedIdentifier - In the implementation block
@property (assign,setter=_setAllowsArchivingAsSubview:,nonatomic) BOOL _allowsArchivingAsSubview;                         //@synthesize allowsArchivingAsSubview=_allowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;              //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double length; 
+(id)_verticalLayoutGuide;
+(id)_horizontalLayoutGuide;
+(id)classFallbacksForKeyedArchiver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(BOOL)_isFloatingLayoutItem;
-(BOOL)_allowsArchivingAsSubview;
-(id)_layoutVariablesWithAmbiguousValue;
-(NSString *)_archivedIdentifier;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(BOOL)isHorizontal;
-(id)_relevantLayoutVariables;
-(void)_setUpCounterDimensionConstraint;
-(void)_setAllowsArchivingAsSubview:(BOOL)arg1 ;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
@end

