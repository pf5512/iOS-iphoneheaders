/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElementManager.h>

@protocol SCATPointPickerDelegate;
@class NSValue, SCATPointPickerViewController;

@interface SCATPointPicker : SCATElementManager {

	BOOL _shouldKeepScannerAwake;
	<SCATPointPickerDelegate>* _delegate;
	NSValue* _realPickedPoint;
	unsigned _refinementCount;
	int _pickerType;

}

@property (assign,nonatomic) <SCATPointPickerDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCATPointPickerViewController * pickerViewController; 
@property (nonatomic,readonly) int pickerType;                                                    //@synthesize pickerType=_pickerType - In the implementation block
@property (nonatomic,readonly) BOOL allowsSelectionRefinement; 
@property (nonatomic,readonly) BOOL hasPickedPoint; 
@property (nonatomic,readonly) CGPoint pickedPoint; 
@property (nonatomic,readonly) CGPoint pickedPointInScreenCoordinates; 
@property (assign,nonatomic) BOOL shouldKeepScannerAwake;                                         //@synthesize shouldKeepScannerAwake=_shouldKeepScannerAwake - In the implementation block
@property (nonatomic,retain) NSValue * realPickedPoint;                                           //@synthesize realPickedPoint=_realPickedPoint - In the implementation block
@property (assign,nonatomic) unsigned refinementCount;                                            //@synthesize refinementCount=_refinementCount - In the implementation block
+(id)mostSuitablePointPickerWithMenu:(id)arg1 ;
+(id)pointPickerWithMode:(int)arg1 menu:(id)arg2 ;
-(unsigned)refinementCount;
-(CGPoint)pickedPoint;
-(void)_savePoint:(CGPoint)arg1 andNotifyDelegate:(BOOL)arg2 ;
-(BOOL)isRefiningPoint;
-(BOOL)shouldKeepScannerAwake;
-(id)initWithMenu:(id)arg1 ;
-(void)didFetchElements:(id)arg1 foundNewElements:(BOOL)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(BOOL)arg4 ;
-(void)setShouldKeepScannerAwake:(BOOL)arg1 ;
-(void)scannerManager:(id)arg1 didActivateElement:(id)arg2 ;
-(BOOL)hasPickedPoint;
-(CGPoint)pickedPointInScreenCoordinates;
-(void)resetRefinedSelectedPoint;
-(BOOL)allowsSelectionRefinement;
-(void)refineSelectedPoint;
-(int)pickerType;
-(void)setRealPickedPoint:(id)arg1 ;
-(id)realPickedPoint;
-(void)setRefinementCount:(unsigned)arg1 ;
-(id)pickerViewController;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)identifier;
@end

