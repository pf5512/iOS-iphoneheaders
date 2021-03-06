/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCRCGestureFactory;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct SCRCMathAverageValue {
	unsigned samples;
	50d fifo;
	int fifoIndex;
	double sum;
	double average;
	double current;
} SCRCMathAverageValue;

typedef struct SCRCFingerState {
	unsigned long long identifier;
	int xDirection;
	int yDirection;
	SCRCMathAverageValue velocity;
	SCRCMathAverageValue slopeRise;
	SCRCMathAverageValue slopeRun;
	SCRCMathAverageValue distance;
	double velocityDistance;
	bool dragStalled;
	CGPoint startPoint;
	CGPoint lastPoint;
	CGPoint lastDownPoint;
} SCRCFingerState;

typedef struct {
	id track;
	id tap;
	id gutterUp;
	id splitTap;
} SCD_Struct_SC10;

typedef struct {
	bool down;
	bool dead;
	bool gutter;
	unsigned long long current;
	unsigned long long digits;
	unsigned long long count;
	CGRect frame;
	CGPoint location[5];
	CGPoint locationPerTap[5];
	unsigned long long digitsPerTap;
	double thisTime;
	double lastTime;
} SCD_Struct_SC11;

typedef struct {
	SCRCGestureFactory* factory;
	bool isSplitting;
	bool isTapping;
	bool fastTrack;
	bool tapDead;
	bool timedOut;
	bool active;
	unsigned long long fingerIdentifier;
	double fingerDownTime;
	CGPoint startTapLocation;
	CGPoint lastTapLocation;
	CGPoint primaryFingerLocation;
	double tapDistance;
	int state;
} SCD_Struct_SC12;

typedef struct URegularExpression* URegularExpressionRef;

typedef struct CGImage* CGImageRef;

