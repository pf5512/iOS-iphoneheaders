/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BuddyCountry : NSObject {

	NSString* _name;
	NSString* _code;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * code;              //@synthesize code=_code - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)compare:(id)arg1 ;
-(NSString *)code;
-(void)setCode:(NSString *)arg1 ;
@end

