/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSArray;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSArray* _servers;
	NSArray* _searchDomains;

}

@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (readonly) NSArray * searchDomains;              //@synthesize searchDomains=_searchDomains - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)servers;
-(NSArray *)searchDomains;
-(id)initWithServers:(id)arg1 andSearchDomains:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

