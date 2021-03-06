/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTokenizer.h>

@protocol UITextInput;
@class UIResponder, NSString;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

	UIResponder*<UITextInput> _textInput;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
@end

