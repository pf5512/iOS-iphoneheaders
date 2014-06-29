/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@interface PHStaticDialerPad : TPPhonePad {

	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(id)initWithDialerType:(int)arg1 ;
-(int)dialerType;
-(void)setDialerType:(int)arg1 ;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
@end
