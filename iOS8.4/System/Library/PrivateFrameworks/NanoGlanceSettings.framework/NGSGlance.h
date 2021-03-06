/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoGlanceSettings/NanoGlanceSettings-Structs.h>
#import <NanoGlanceSettings/NSCopying.h>

@class NSString;

@interface NGSGlance : NSObject <NSCopying> {

	BOOL _cannotBeDisabled;
	BOOL _active;
	BOOL _defaultGlance;
	BOOL _prelaunch;
	BOOL _installed;
	NSString* _name;
	NSString* _appBundleIdentifier;
	NSString* _glanceBundleIdentifier;
	NSString* _sockPuppetIdentifier;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                           //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * glanceBundleIdentifier;                        //@synthesize glanceBundleIdentifier=_glanceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sockPuppetIdentifier;                          //@synthesize sockPuppetIdentifier=_sockPuppetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * glanceIdentifier; 
@property (assign,nonatomic) BOOL cannotBeDisabled;                                  //@synthesize cannotBeDisabled=_cannotBeDisabled - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (assign,getter=isDefaultGlance,nonatomic) BOOL defaultGlance;              //@synthesize defaultGlance=_defaultGlance - In the implementation block
@property (assign,nonatomic) BOOL prelaunch;                                         //@synthesize prelaunch=_prelaunch - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;                      //@synthesize installed=_installed - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(NSString *)glanceIdentifier;
-(NSString *)sockPuppetIdentifier;
-(NSString *)glanceBundleIdentifier;
-(BOOL)prelaunch;
-(BOOL)cannotBeDisabled;
-(BOOL)isDefaultGlance;
-(void)setGlanceBundleIdentifier:(NSString *)arg1 ;
-(void)setCannotBeDisabled:(BOOL)arg1 ;
-(void)setSockPuppetIdentifier:(NSString *)arg1 ;
-(void)setDefaultGlance:(BOOL)arg1 ;
-(void)setPrelaunch:(BOOL)arg1 ;
-(BOOL)isInstalled;
@end

