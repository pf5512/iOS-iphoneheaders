/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {

	CoreThemeDocument* _doc;

}
+(bool)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)initWithThemeDocument:(id)arg1 ;
-(void)loadZeroCodeArtworkInfo;
-(void)loadArtworkDraftTypes;
-(void)resetThemeConstants;
-(void)sanityCheckAndUpdateDocumentIfNecessary;
-(void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD10*)arg1 withElement:(id)arg2 ;
-(void)_addSchemaPartDefinitionsForStandardElement:(const SCD_Struct_TD10*)arg1 withElement:(id)arg2 ;
-(bool)_renditionKey:(const renditionkeytoken*)arg1 isEqualToKeyIgnoringLook:(const renditionkeytoken*)arg2 ;
-(void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(bool)arg3 ;
-(void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
-(void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
-(void)_sanityCheckSchemaAssets;
-(void)loadThemeSizes;
-(void)loadThemeValues;
-(void)loadThemeElements;
-(void)loadThemeParts;
-(void)loadThemeStates;
-(void)loadThemePresentationStates;
-(void)loadThemeDirections;
-(void)loadThemeDrawingLayers;
-(void)loadThemeIdioms;
-(void)loadIterationTypes;
-(void)loadThemeLooks;
-(void)loadRenditionTypes;
-(void)loadRenditionSubtypes;
-(void)loadColorStatuses;
-(void)loadMetafontSelectors;
-(void)loadMetafontSizes;
-(void)loadColorNames;
-(void)loadSchemaCategories;
-(void)loadSchemaDefinitions;
-(void)loadEffectConstants;
-(void)loadBasicThemePart;
-(void)loadThemeDefaultLook;
-(void)loadDefaultFontCustomizations;
-(void)loadStandardEffectDefinitions;
@end

