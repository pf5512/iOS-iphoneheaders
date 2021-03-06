/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/NSSecureCoding.h>

@class NSString, NSURL;

@interface PDWebService : NSObject <NSSecureCoding> {

	NSString* _passTypeID;
	NSURL* _serviceURL;
	NSString* _pushToken;
	NSString* _deviceIdentifier;

}

@property (nonatomic,retain) NSString * passTypeID;                    //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,retain) NSURL * serviceURL;                       //@synthesize serviceURL=_serviceURL - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                     //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPassTypeID:(NSString *)arg1 ;
-(void)setServiceURL:(NSURL *)arg1 ;
-(NSString *)passTypeID;
-(NSURL *)serviceURL;
-(void)generateNewDeviceIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)pushToken;
@end

