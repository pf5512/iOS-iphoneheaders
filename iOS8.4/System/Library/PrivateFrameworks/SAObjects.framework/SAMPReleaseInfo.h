/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * releaseDate; 
@property (assign,nonatomic) long long releaseYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)releaseInfo;
+(id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACalendar *)releaseDate;
-(id)encodedClassName;
-(void)setReleaseYear:(long long)arg1 ;
-(void)setReleaseDate:(SACalendar *)arg1 ;
-(long long)releaseYear;
@end

