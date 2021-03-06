/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXInterestAreaViewControllerDelegate <NSObject>
@optional
-(void)interestAreaViewController:(id)arg1 didFinishDrawingFingerPath:(id)arg2 interestAreaPath:(id*)arg3;
-(void)interestAreaPathsDidChangeForInterestAreaViewController:(id)arg1;
-(CGRect*)boundsForConstrainingFingerPathInInterestAreaViewController:(id)arg1;
-(id)referenceViewForConvertingFromAndToWindowCoordinateSystemForInterestAreaViewController:(id)arg1;
-(id)viewToCoverWithOutOfBoundsDrawingForInterestAreaViewWithController:(id)arg1 edgeInsets:(UIEdgeInsets*)arg2;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
-(float)scaleForSpecialControlsInInterestAreaViewController:(id)arg1;
-(BOOL)isInterestAreaViewAccessibilityElementWithController:(id)arg1;
@end

