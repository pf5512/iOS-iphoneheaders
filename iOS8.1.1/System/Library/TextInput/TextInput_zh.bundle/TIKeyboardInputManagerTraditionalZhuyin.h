/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseMecabra.h>

@interface TIKeyboardInputManagerTraditionalZhuyin : TIKeyboardInputManagerChineseMecabra {

	BOOL _isDynamic;
	BOOL _assertDefaultKeyPlane;

}
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(BOOL)shouldSearchCompletionForSubstrings;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)phoneticSortingMethod;
-(int)inputMethodType;
-(BOOL)shouldInsertFirstToneMark;
-(TIInputManagerZephyr*)initImplementation;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)inputsToReject;
-(void)syncToLayoutState:(id)arg1 ;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(id)didAcceptCandidate:(id)arg1 ;
@end

