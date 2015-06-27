/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedString;
+(id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siriui_enumeratePropertyRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)regions;
-(void)setRegions:(NSArray *)arg1 ;
@end
