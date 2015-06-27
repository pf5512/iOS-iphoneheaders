/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections; 
@property (retain) SUScriptSection * selectedSection; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(SUScriptSection *)selectedSection;
-(id)sections;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(void)_tabBarConfigurationChangedNotification:(id)arg1 ;
-(id)_copySectionWithIdentifier:(id)arg1 ;
-(id)_fixedSelectedIdentifier;
-(void)_setSelectedIdentifier:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)setRootViewController:(id)arg1 forSection:(id)arg2 ;
-(void)setSelectedSection:(SUScriptSection *)arg1 ;
@end
