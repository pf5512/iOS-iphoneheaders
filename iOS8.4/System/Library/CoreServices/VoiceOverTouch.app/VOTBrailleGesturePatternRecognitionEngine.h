/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol VOTBrailleGesturePatternRecognitionEngineDelegate;
#import <vot/vot-Structs.h>
@class VOTBrailleGestureDataRepository, NSMutableArray;

@interface VOTBrailleGesturePatternRecognitionEngine : NSObject {

	VOTBrailleGestureDataRepository* _repository;
	NSMutableArray* _lastBrailleGestures;
	long long _typingMode;
	CGSize _keyboardSize;
	BOOL _shouldUseEightDotBraille;
	id<VOTBrailleGesturePatternRecognitionEngineDelegate> _delegate;

}

@property (assign,nonatomic) id<VOTBrailleGesturePatternRecognitionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseEightDotBraille; 
-(id)printBrailleForTouchPoints:(id)arg1 shouldLearn:(BOOL)arg2 error:(id*)arg3 ;
-(void)unlearnLastGesture;
-(void)resetLastGestures;
-(void)setTypingMode:(long long)arg1 keyboardSize:(CGSize)arg2 shouldUseEightDotBraille:(BOOL)arg3 ;
-(id)dotNumberPositions;
-(void)calibrateWithTouchPoints:(id)arg1 ;
-(void)savePersistentGestureData;
-(BOOL)areDotNumberPositionsCalibrated;
-(BOOL)shouldUseEightDotBraille;
-(void)_populateLeftTouchPoints:(id)arg1 rightTouchPoints:(id)arg2 fromTouchPoints:(id)arg3 ;
-(id)_halfPatternFromTouches:(id)arg1 side:(unsigned long long)arg2 ;
-(id)_printBrailleCharacterFromBraillePattern:(id)arg1 ;
-(id)_sortTouches:(id)arg1 fromTopToBottomForSide:(unsigned long long)arg2 ;
-(id)_closestHalfPatternForOrderedTouches:(id)arg1 possibleMatches:(id)arg2 side:(unsigned long long)arg3 ;
-(id)_halfPatternFromOrderedTouches:(id)arg1 correspondingHalfPattern:(id)arg2 ;
-(id)_orderedTouchesFromHalfPattern:(id)arg1 ;
-(double)_totalDistanceBetweenCorrespondingPointsInTouches:(id)arg1 andTouches:(id)arg2 ;
-(double)_distanceBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(BOOL)_bothObjectsAreNilOrBothAreNonNil:(id)arg1 object:(id)arg2 ;
-(CGPoint)_averageOfOldPoint:(CGPoint)arg1 newPoint:(CGPoint)arg2 dataCount:(unsigned long long)arg3 ;
-(double)_averageOfOldFloat:(double)arg1 newFloat:(double)arg2 dataCount:(unsigned long long)arg3 ;
-(BOOL)_halfPattern:(id)arg1 hasSameDotsAsHalfPattern:(id)arg2 ;
-(id)_averagePointValueWithDataCount:(unsigned long long)arg1 currentPointValue:(id)arg2 newPointValue:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<VOTBrailleGesturePatternRecognitionEngineDelegate>)arg1 ;
-(id)init;
-(id<VOTBrailleGesturePatternRecognitionEngineDelegate>)delegate;
@end
