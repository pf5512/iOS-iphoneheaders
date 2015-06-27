/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/MobileMail.axbundle/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/__MFApplicationSceneControllerAccessibility_super.h>

@interface MFApplicationSceneControllerAccessibility : __MFApplicationSceneControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityPrimaryViewController;
-(void)presentModalViewController:(id)arg1 animated:(char)arg2 options:(id)arg3 ;
-(void)_setActiveActorItem:(id)arg1 animated:(char)arg2 ;
-(void)_accessibilityUpdateDraftElements;
-(id)_actorItemForActorViewController:(id)arg1 createIfNecessary:(char)arg2 ;
-(void)tiltedTabViewDidPresent:(id)arg1 ;
-(void)tiltedTabViewDidDismiss:(id)arg1 ;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned)arg2 ;
-(void)_accessibilityUpdateDraftLabelForBorrowedView:(id)arg1 withActorAtIndex:(int)arg2 ;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned)arg2 withBoundsInsets:(out UIEdgeInsets*)arg3 ;
-(id)_accessibilitySpeakThisViewController;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
