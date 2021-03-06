/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * fullsize; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SAUIAppPunchOut * photoPunchOut; 
@property (nonatomic,copy) NSURL * thumbnail; 
+(id)photo;
+(id)photoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setThumbnail:(id)arg1 ;
-(id)thumbnail;
-(id)encodedClassName;
-(id)fullsize;
-(void)setFullsize:(id)arg1 ;
-(id)photoPunchOut;
-(void)setPhotoPunchOut:(id)arg1 ;
@end

