/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/__VKMapViewAccessibility_super.h>

@interface VKMapViewAccessibility : __VKMapViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_axWorldViewDelegate;
-(id)accessibilityTourStatus;
-(BOOL)_axIsShowingRoutes;
-(long long)_axOrientationOfElements;
-(void)_axUpdateElements;
-(id)_axDirectionsManager;
-(void)_axLoadAccessibility;
-(BOOL)accessibilityIsInTourGuideMode;
-(id)_axRouteForAnnotationMarker:(id)arg1 ;
-(id)_axTourGuideElement;
-(long long)accessibilityOrientation;
-(double)accessibilityYaw;
-(id)_axElements;
-(id)_axWindow;
-(float)accessibilityZoomLevel;
-(CGPoint)accessibilityConvertCoordinateToWindow:(SCD_Struct_VK1)arg1 ;
-(void)_axMapViewDidChangeVisibleRegion;
-(BOOL)accessibilityIsShowingCalloutAnnotationView;
-(void)accessibilityClearVisibleAXBoundsFrame;
-(CGRect)accessibilityVisibleAXViewBounds;
-(float)accessibilityDistance:(CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3 withElement:(id)arg4 ;
-(id)accessibilityUpcomingRoadsForPoint:(CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3 ;
-(float)accessibilityDistanceToEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3 ;
-(float)accessibilityRealDistanceBetweenPoint:(CGPoint)arg1 screenPoint2:(CGPoint)arg2 ;
-(BOOL)accessibilityAnnotationMarkerIsAlternateRoute:(id)arg1 ;
-(CGRect)accessibilityPositionFrameForElement:(SCD_Struct_VK0)arg1 ;
-(id)accessibilityCalloutAnnotationView;
-(id)accessibilityOverviewForAlternateRouteAnnotationMarker:(id)arg1 ;
-(void)_axSetTrackingMode:(long long)arg1 ;
-(id)_axUserLocationMarker;
-(SCD_Struct_VK0)_axBoundsOfElements;
-(SCD_Struct_VK1)accessibilityCenter;
-(BOOL)_axShouldSummarizeVisibleBounds;
-(void)_axSummaryForVisibleBounds;
-(void)_axUpdateElementsComplete:(id)arg1 ;
-(id)_axAnnotationElements;
-(id)_axElementManager;
-(SCD_Struct_VK0)accessibilityBounds;
-(id)accessibilityLayerHostingView;
-(BOOL)_axTrackingEnabled;
-(id)_axTourGuideManager;
-(void)accessibilityZoom:(BOOL)arg1 point:(CGPoint)arg2 ;
-(BOOL)_axTrackingWithHeadingEnabled;
-(void)_axUserTrackingModeChange:(id)arg1 ;
-(void)_axVoiceOverTouchEnabled;
-(id)_axMapViewDelegate;
-(void)_axStartListeningForVoiceOverTouchEnabled;
-(BOOL)accessibilityViewBoundsContainsPathPoint:(CGPoint)arg1 ;
-(SCD_Struct_VK1)_axConvertScreenPointToCoordinate:(CGPoint)arg1 ;
-(CGPoint)_axIntersectionBetweenRoad:(id)arg1 andOtherRoad:(id)arg2 ;
-(void)_axStopListeningForUpdateAccessibilityElementsComplete;
-(void)_axStopListeningForUserTrackingModeChange;
-(void)_axStopListeningForVoiceOverTouchEnabled;
-(BOOL)_axElementsInvalidForVisibleBounds;
-(void)_axStartListeningForUpdateAccessibilityElementsComplete;
-(void)_axStartListeningForUserTrackingModeChange;
-(BOOL)accessibilityTileLoadingComplete;
-(long long)_axTrackingMode;
-(BOOL)accessibilityMapTypeSupportsAccessibility;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityScrollStatus;
-(id)accessibilityContainerElements;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncreaseTrackingDetail;
-(void)accessibilityDecreaseTrackingDetail;
-(void)setMapType:(long long)arg1 ;
-(void)mapDidChangeVisibleRegion:(id)arg1 ;
-(void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)mapDidStartLoadingTiles:(id)arg1 ;
-(void)mapDidFinishLoadingTiles:(id)arg1 ;
-(void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
@end

