/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMCommonCoreAccessibilityExtras.h>

@class NSString;

@interface IMCommonCoreAccessibility : NSObject <IMCommonCoreAccessibilityExtras> {

	char _accessibilitySupportLoaded;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setAccessibilitySupportLoaded:,getter=_isAccessibilitySupportLoaded,nonatomic) char _accessibilitySupportLoaded;              //@synthesize accessibilitySupportLoaded=_accessibilitySupportLoaded - In the implementation block
+(id)sharedInstance;
-(void)loadAccessibilitySupport;
-(char)needsAccessibilityElements;
-(id)preferencesDomain;
-(char)needsAccessibilityAnnouncements;
-(void)performExtraValidation;
-(void)addExtraSafeCategoryNamesToCollection:(id)arg1 ;
-(char)_isAccessibilitySupportLoaded;
-(void)performValidation;
-(void)addSafeCategoryNamesToCollection:(id)arg1 ;
-(void)_setAccessibilitySupportLoaded:(char)arg1 ;
@end
