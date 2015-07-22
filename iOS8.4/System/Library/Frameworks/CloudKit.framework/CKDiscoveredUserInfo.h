/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKRecordID, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _userRecordID;
	NSString* _firstName;
	NSString* _lastName;
	void* _oldDisplayContact;

}

@property (nonatomic,copy) CKRecordID * userRecordID;                //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) void* oldDisplayContact;              //@synthesize oldDisplayContact=_oldDisplayContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(void*)oldDisplayContact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(CKRecordID *)userRecordID;
-(id)CKPropertiesDescription;
-(id)initWithUserRecordID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
@end
