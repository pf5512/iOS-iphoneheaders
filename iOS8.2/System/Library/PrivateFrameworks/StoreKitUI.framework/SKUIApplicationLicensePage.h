/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <NSCopying> {

	NSString* _licenseAgreementHTML;
	NSString* _title;

}

@property (nonatomic,copy) NSString * licenseAgreementHTML;              //@synthesize licenseAgreementHTML=_licenseAgreementHTML - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLicenseAgreementHTML:(NSString *)arg1 ;
-(NSString *)licenseAgreementHTML;
@end
