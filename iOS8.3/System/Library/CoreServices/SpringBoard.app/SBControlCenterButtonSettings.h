/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSString;

@interface SBControlCenterButtonSettings : _UISettings {

	char _enabled;
	NSString* _displayName;
	NSString* _identifier;

}

@property (assign,nonatomic) char enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(id)createWithSettingClass:(Class)arg1 ;
+(id)settingsControllerModule;
-(NSString *)identifier;
-(void)setEnabled:(char)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)enabled;
-(void)setDefaultValues;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end
