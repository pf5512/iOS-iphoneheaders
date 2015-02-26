/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {

	OADColor* mColor1;
	OADColor* mColor2;
	int mTransferMode1;
	int mTransferMode2;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)setColor1:(id)arg1 ;
-(void)setColor2:(id)arg1 ;
-(id)color1;
-(id)color2;
-(int)transferMode1;
-(int)transferMode2;
-(void)setTransferMode1:(int)arg1 ;
-(void)setTransferMode2:(int)arg1 ;
@end
