/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSnippet.h>

@class NSNumber;

@interface SASettingBoolSnippet : SASettingSnippet

@property (assign,nonatomic) BOOL toggle; 
@property (nonatomic,copy) NSNumber * value; 
+(id)boolSnippet;
+(id)boolSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(id)encodedClassName;
-(BOOL)toggle;
-(void)setToggle:(BOOL)arg1 ;
@end
